#include <stdio.h> //�����׼���������ͷ�ļ�
#include "jni.h" //���ͷ�ļ��ڱ��뻷���� ֱ��ָ��<> ����ļ��ڵ�ǰĿ¼��""

//ʵ��java����δʵ�ֵķ���

/**
 *JNIEnv* env java������Ļ�����ָ��
 *jobject �������c�����java���������MainActivity������õķ�����obj�������MainActivity����
 */
jstring Java_com_example_jnidemo1_MainActivity_fromC(JNIEnv* env,jobject obj){
	//������  c���룻
	char* str = "hello from c !!";
	//��jni�淶���� ��jni�����Ľṹ������
	//jstring     (*NewStringUTF)(JNIEnv*, const char*);
	//ת������java���ַ���
	return (*(*env)).NewStringUTF(env,str);
}


