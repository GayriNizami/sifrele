#include<stdio.h>

main () {

printf("Varsayılan şifremi olsun yoksa sonradan giriş mi? \n");

char sec;
scanf(" %c", &sec);


if ( sec == 's' ) {
system("echo -n SifrelenecekYAZI | openssl enc -e -aes-256-cbc -a");
}

else if ( sec == 'v' ) {
system("./sifreli.sh");
}

}
