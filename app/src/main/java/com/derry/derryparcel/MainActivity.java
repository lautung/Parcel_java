package com.derry.derryparcel;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.os.Parcel;
import android.util.Log;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // =========================  源码分析
        Parcel parcel = Parcel.obtain();

        parcel.writeInt(50);
        parcel.writeInt(100);

        // mDataPos = 4

        parcel.setDataPosition(0); // 为什么要修改成0

        int r = parcel.readInt();
        Log.d("Derry", "onCreate: 系统的：" + r);
        r = parcel.readInt();
        Log.d("Derry", "onCreate: 系统的：" + r);


        // =========================  用自己的Parcel

        DParcel dParcel = DParcel.obtain();

        dParcel.writeInt(50);
        dParcel.writeInt(100);

        // mDataPos = 4

        dParcel.setDataPosition(0); // 为什么要修改成0

        r = dParcel.readInt();
        Log.d("Derry", "onCreate: 手写的：" + r);
        r = dParcel.readInt();
        Log.d("Derry", "onCreate: 手写的：" + r);

    }
}