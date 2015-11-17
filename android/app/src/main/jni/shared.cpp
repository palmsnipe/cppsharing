#include <jni.h>
#include <iostream>
#include "mylib.h"

extern "C" {
    JNIEXPORT jstring JNICALL
    Java_com_cyrilmorales_cppsharing_MainActivity_helloworld(JNIEnv *env, jobject instance) {

        std::string str = helloworld();

        return env->NewStringUTF(str.c_str());
    }
}