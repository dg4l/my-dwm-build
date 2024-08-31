#include <stdlib.h>
#include <unistd.h>

int main(){
	if (!geteuid()){ // if euid = 0, install
		system("cd dwm/ && make clean install && cd .. && cd slstatus/ && make clean install && cd .. && cd dmenu/ && make clean install && cd ..");
		system("cp dwm.desktop /usr/share/xsessions/");
		system("Done bro...");
	}
	else{
		system("echo please run as root");
	}
	return 0;
}
