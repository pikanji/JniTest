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

Git Tags
--------

minimum 