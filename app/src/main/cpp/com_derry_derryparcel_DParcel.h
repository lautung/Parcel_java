/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "DParcel.h"
/* Header for class com_derry_derryparcel_DParcel */

#ifndef _Included_com_derry_derryparcel_DParcel
#define _Included_com_derry_derryparcel_DParcel
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     com_derry_derryparcel_DParcel
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_derry_derryparcel_DParcel_nativeCreate
  (JNIEnv *, jobject);

/*
 * Class:     com_derry_derryparcel_DParcel
 * Method:    nativeWriteInt
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_derry_derryparcel_DParcel_nativeWriteInt
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_derry_derryparcel_DParcel
 * Method:    nativeSetDataPosition
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_derry_derryparcel_DParcel_nativeSetDataPosition
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_derry_derryparcel_DParcel
 * Method:    nativeReadInt
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_derry_derryparcel_DParcel_nativeReadInt
  (JNIEnv *, jobject, jlong);


#ifdef __cplusplus
}
#endif
#endif
