#include "com_derry_derryparcel_DParcel.h"

// 全局的  OpenCV  Parcel 都是这样干的 ....
static DParcel * dParcel = 0;

// 早期：DerryPlayer * py

// 如果在native中定义成全局变量的话，java层没办法控制了  是对的，  我还是能共享起来

// 【获取C++对象指针的值，作为共享】
extern "C" JNIEXPORT jlong JNICALL Java_com_derry_derryparcel_DParcel_nativeCreate
        (JNIEnv * jniEnv, jobject job) {
    DParcel * dParcel = new DParcel();
    return reinterpret_cast<jlong>(dParcel);
}

// 【写入操作】
extern "C" JNIEXPORT void JNICALL Java_com_derry_derryparcel_DParcel_nativeWriteInt
        (JNIEnv * jniEnv, jobject thiz, jlong native_ptr, jint val) {

    // C的命名标准：   AVFormatContext    fmt_cxt        VIM 没有提示 全部手敲

    DParcel * dParcel = reinterpret_cast<DParcel *>(native_ptr);
    dParcel->writeInt(val);
}

// 【修改指针位置】
extern "C" JNIEXPORT void JNICALL Java_com_derry_derryparcel_DParcel_nativeSetDataPosition
        (JNIEnv *, jobject, jlong native_ptr, jint mDataPos) {
    DParcel * dParcel = reinterpret_cast<DParcel *>(native_ptr);
    dParcel->setDataPosition(mDataPos);
}

// 【读取操作】
extern "C" JNIEXPORT jint JNICALL Java_com_derry_derryparcel_DParcel_nativeReadInt
        (JNIEnv *, jobject, jlong native_ptr) {
    DParcel * dParcel = reinterpret_cast<DParcel *>(native_ptr);
    return dParcel->readInt();
}





