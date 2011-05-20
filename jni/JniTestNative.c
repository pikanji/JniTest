#include "net_pikanji_jnitest_JniTest.h"

JNIEXPORT jstring JNICALL Java_net_pikanji_jnitest_JniTest_getStringFromNative( JNIEnv *env, jobject obj )
{
    return (*env)->NewStringUTF(env, (char *)"from Native Code String");
}
