#include <jni.h>
#include <string>
#include<android/log.h>

#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,"native-lib" ,__VA_ARGS__)

extern "C"{

 JNIEXPORT jstring JNICALL
Java_com_sun_ndk1_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

 JNIEXPORT jstring JNICALL
Java_com_sun_ndk1_MainActivity_getJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++ getJNI";
    return env->NewStringUTF(hello.c_str());
}
 JNIEXPORT void JNICALL
Java_com_sun_ndk1_MainActivity_show(
        JNIEnv * env, jobject thiz, jboolean a1, jbyte a2, jshort a3, jint a4, jlong a5, jfloat a6, jdouble a7, jchar a8) {
        int b1=a1;
        char b2=a2;
        short b3=a3;
        int b4=a4;
        long long b5=a5;
        float b6=a6;
        double b7=a7;
        unsigned short b8=a8;

        LOGE("b1=%d\n",a1);
        LOGE("b2=%d\n",a2);
        LOGE("b3=%d\n",a3);
        LOGE("b4=%d\n",a4);
        LOGE("b5=%lld\n",a5);
        LOGE("b6=%lf\n",a6);
        LOGE("b7=%d\n",a7);
        LOGE("b8=%c\n",a8);

        LOGE("b1=%d\n",b1);
        LOGE("b2=%d\n",b2);
        LOGE("b3=%d\n",b3);
        LOGE("b4=%d\n",b4);
        LOGE("b5=%lld\n",b5);
        LOGE("b6=%lf\n",b6);
        LOGE("b7=%f\n",b7);
        LOGE("b8=%c\n",b8);
}


/*
 * Class:     com_sun_ndk1_MainActivity
 * Method:    getBoolean
 * Signature: ()Z
 */
 JNIEXPORT jboolean JNICALL Java_com_sun_ndk1_MainActivity_getBoolean
  (JNIEnv * env, jobject thiz){

unsigned char x=1;
jboolean y=x;
return y;

                                }

/*
 * Class:     com_sun_ndk1_MainActivity
 * Method:    getByte
 * Signature: ()B
 */
 JNIEXPORT jbyte JNICALL Java_com_sun_ndk1_MainActivity_getByte
  (JNIEnv * env, jobject thiz){

char x=100;
jbyte y=x;
return y;
                                }

/*
 * Class:     com_sun_ndk1_MainActivity
 * Method:    getShort
 * Signature: ()S
 */
 JNIEXPORT jshort JNICALL Java_com_sun_ndk1_MainActivity_getShort
  (JNIEnv * env, jobject thiz){
short x=200;
jshort y=x;
return y;

                                }

/*
 * Class:     com_sun_ndk1_MainActivity
 * Method:    getInt
 * Signature: ()I
 */
 JNIEXPORT jint JNICALL Java_com_sun_ndk1_MainActivity_getInt
  (JNIEnv * env, jobject thiz){
    int x=1000;
    jint y=x;
    return y;

                                }

/*
 * Class:     com_sun_ndk1_MainActivity
 * Method:    getLong
 * Signature: ()J
 */
 JNIEXPORT jlong JNICALL Java_com_sun_ndk1_MainActivity_getLong
  (JNIEnv * env, jobject thiz){

long long x=9999999ll;
jlong y=x;
return y;
                                }

/*
 * Class:     com_sun_ndk1_MainActivity
 * Method:    getFloat
 * Signature: ()F
 */
 JNIEXPORT jfloat JNICALL Java_com_sun_ndk1_MainActivity_getFloat
  (JNIEnv * env, jobject thiz){

float x=23.23f;
jfloat y=x;

return y;
                                }

/*
 * Class:     com_sun_ndk1_MainActivity
 * Method:    getDouble
 * Signature: ()D
 */
 JNIEXPORT jdouble JNICALL Java_com_sun_ndk1_MainActivity_getDouble
  (JNIEnv * env, jobject thiz){

double x=234.234;
jdouble y=x;
return y;

                                }

/*
 * Class:     com_sun_ndk1_MainActivity
 * Method:    getChar
 * Signature: ()C
 */
 JNIEXPORT jchar JNICALL Java_com_sun_ndk1_MainActivity_getChar
  (JNIEnv * env, jobject thiz){
unsigned short x='A';
jchar y=x;
return y;
  }



}



























