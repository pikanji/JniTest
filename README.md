JniTest
=======

Sample code for using Android JNI.

Build Instruction
-----------------

1.  Generate C/C++ header file
    Execute the command below in project root directory.
    
    $ javah -classpath bin -d jni net.pikanji.jnitest.JniTest
    
    Output is jni/net_pikanji_jnitest_JniTest.h
    
2.  Build native code
    Execute the command below in project root directory.
    
    $ <ndk_dir>/ndk-build

Git Tags
--------

minimum 