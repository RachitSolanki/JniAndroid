LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
# module name
LOCAL_MODULE := sample
LOCAL_SRC_FILES := sample.c
LOCAL_CPPFLAGS := -std=gnu++0x -Wall -fPIE
LOCAL_LDLIBS := -llog
include $(BUILD_SHARED_LIBRARY)
