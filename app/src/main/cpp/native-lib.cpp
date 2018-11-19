#include <jni.h>
#include <string>

extern "C" {
        #include "include/sample.h"

JNIEXPORT jint JNICALL Java_com_rachit_jni_MainActivity_addFromSample(
        JNIEnv *env,
        jobject obj,
        jint operand1,
        jint operand2) {
        return add(operand1,operand2);
}

JNIEXPORT jdouble JNICALL Java_com_rachit_jni_MainActivity_multiplyFromSample(
        JNIEnv *env,
        jobject obj,
        jint operand1,
        jint operand2) {
        return multiply(operand1,operand2);
}


}
extern "C" JNIEXPORT jstring

JNICALL
Java_com_rachit_jni_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
        std::string hello = "Hello from C++";
        return env->NewStringUTF(hello.c_str());
}

