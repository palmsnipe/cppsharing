#include <jni.h>
#include <iostream>
#include <vector>
#include "mylib.h"

extern "C" {
JNIEXPORT jstring JNICALL
    Java_com_cyrilmorales_cppsharing_MainActivity_helloworld(JNIEnv *env, jobject instance) {

        std::string str = helloworld();

        return env->NewStringUTF(str.c_str());
    }

    JNIEXPORT jobject JNICALL
    Java_com_cyrilmorales_cppsharing_MainActivity_getDays(JNIEnv *env, jobject instance) {
        std::vector<std::string> days = getDays();

        jclass clazz = env->FindClass("java/util/ArrayList");
        jobject result = env->NewObject(clazz, env->GetMethodID(clazz, "<init>", "()V"));

        for (int i = 0; i < days.size(); i++) {
            jstring day = env->NewStringUTF(days[i].c_str());
            env->CallBooleanMethod(result, (*env).GetMethodID(clazz, "add", "(Ljava/lang/Object;)Z"), day);
        }

        return result;
    }
}