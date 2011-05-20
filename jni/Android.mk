LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := JniTestNative
LOCAL_SRC_FILES := JniTestNative.c
LOCAL_LDLIBS := -llog
LOCAL_ARM_MODE := arm
include $(BUILD_SHARED_LIBRARY)
