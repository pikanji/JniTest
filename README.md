JniTest
=======

Sample code for using Android JNI.

Build Instruction
-----------------

1.  Generate C/C++ header file<br>
    Execute the command below in project root directory.<br>
    `$ javah -classpath bin -d jni net.pikanji.jnitest.JniTest`<br>
    Output is `jni/net_pikanji_jnitest_JniTest.h`
2.  Build native code<br>
    Execute the command below in project root directory.<br>
    `$ <ndk_dir>/ndk-build`


GitHub URL
----------
[https://github.com/pikanji/JniTest](https://github.com/pikanji/JniTest)

Git Tags
--------
* minimum -- Minimum code demonstrating Android JNI usage.
* call_j -- Demonstrates calling a Java method from native code.