package com.derry.derryparcel;

import android.os.Parcel;
import android.os.Parcelable;

import java.io.Serializable;

// 面试题  Serializable  和 Parcelable 那个性能高 为什么？
// 答： Parcelable 性能高
// 因为：Serializable IO流完成的(存储到磁盘)，   Parcelable C++ 对象指针 共享内存 指针挪动报错数据。
// https://www.ktanx.com/blog/p/2037

// Android基础，不讲的
public class Student implements Parcelable {

    protected Student(Parcel in) {
        in.readInt(); // 顺序不能乱
        in.readString();
    }

    @Override
    public void writeToParcel(Parcel dest, int flags) {
        dest.writeInt(10); // 顺序不能乱
        dest.writeString("AAA");
    }

    @Override
    public int describeContents() {
        return 0;
    }

    public static final Creator<Student> CREATOR = new Creator<Student>() {
        @Override
        public Student createFromParcel(Parcel in) {
            return new Student(in);
        }

        @Override
        public Student[] newArray(int size) {
            return new Student[size];
        }
    };
}
