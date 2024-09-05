#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int main(){
	if (!geteuid()){ // if euid = 0, install
		system("cd dwm/ && make clean install && cd .. && cd slstatus/ && make clean install && cd .. && cd dmenu/ && make clean install && cd ..");
		if (!fopen("/usr/share/xsessions/dwm.desktop", "r")){
				system("cp dwm.desktop /usr/share/xsessions/");
		}
		else{
			printf("dwm xsession already exists\n");
		}

		printf("done bro...\n");
	}
	else{
		printf("this program must be run as root\n");
	}
	return 0;
}
