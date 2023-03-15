#include <jni.h>
#include <string>

extern "C" {
JNIEXPORT jint Java_com_rjz_cppdemo_Calculator_add(JNIEnv *env, jobject, jint a, jint b) {
    return a + b;
}

JNIEXPORT jint Java_com_rjz_cppdemo_Calculator_multiply(JNIEnv *env, jobject, jint a, jint b) {
    if (a == 0 || b == 0) return 0;
    return a * b;
}

JNIEXPORT jint Java_com_rjz_cppdemo_Calculator_subtracation(JNIEnv *env, jobject, jint a, jint b) {
    return a - b;
}
JNIEXPORT jint Java_com_rjz_cppdemo_Calculator_division(JNIEnv *env, jobject, jint a, jint b) {
    return a / b;
}
}