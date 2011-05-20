#include <stdio.h>
#include "net_pikanji_jnitest_JniTest.h"

JNIEXPORT jstring JNICALL Java_net_pikanji_jnitest_JniTest_getStringFromNative( JNIEnv *env, jobject thiz )
{
	jint value;
	jclass clazz;
	jmethodID mId;
	char str[64];

	clazz = (*env)->GetObjectClass(env, thiz);
	//clazz = (*env)->FindClass(env,"net/pikanji/jnitest/JniTest");
	mId = (*env)->GetMethodID(env, clazz, "getIntFromJni", "()I");
	value = (*env)->CallIntMethod(env, thiz, mId);

	sprintf(str, (char *)"From Native: Native got %d from JNI.", (int)value);
	return (*env)->NewStringUTF(env, str);
}
