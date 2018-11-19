package com.rachit.jni;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.widget.TextView;

import java.util.Locale;

public class MainActivity extends AppCompatActivity {

        // Used to load the 'native-lib' library on application startup.
        static {
                System.loadLibrary("sample");
                System.loadLibrary("native-lib");
        }

        @Override
        protected void onCreate(Bundle savedInstanceState) {
                super.onCreate(savedInstanceState);
                Log.e("O m","Create");
                setContentView(R.layout.activity_main);

                // Example of a call to a native method
                TextView tv = findViewById(R.id.sample_text);
                String str = String.format( Locale.getDefault(),
                                            "%s %d",
                                            "2 + 2 =",
                                            addFromSample(2,2) );

                tv.setText(stringFromJNI() +"\n"+ str);
                Log.e("Result of multiply",multiplyFromSample(2,10)+"");


        }

        /**
         * A native method that is implemented by the 'native-lib' native library,
         * which is packaged with this application.
         */

        public native String stringFromJNI();

        /*
         * Native function to add two numbers
         */
        public native int addFromSample(int operand1,int operand2);

        /*
         * Native function to multiply two numbers
         * for more check sample.h
         */
        public native double multiplyFromSample(int operand1,int operand2);

}
