/*
 ============================================================================
 Name        : lab_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>

#include <dirent.h>
#include <string.h>
#define N 10
#define NAME_MAX 256
int k = 0;
FILE *out_a;
FILE *source;
FILE *out_otherfile;
int ch;

int num;

void prestart(){

if((out_a= fopen("out.txt", "wt"))==NULL){
printf("Ошибка открытия файла");
}else{
out_a=fopen("out.txt","a+");
}

for (k = 1; k <= N; k++) {
printf("->");
scanf("%d", &num);
fprintf(out_a, "%d\n", num);
}
fclose(out_a);
}

void n1(){
	prestart();
	source =fopen ("out.txt", "r");
	out_otherfile = fopen("o.txt","a+");
	//fscanf (out_a, "%d", &i);
	while (!feof (source))
	{
	fscanf(source,"%d",&ch);

	if(ch%2==0)
		fprintf(out_otherfile,"%d\n",ch+1);
	else
		fprintf(out_otherfile,"%d\n",ch);
	}
	printf("Файл скопирован!");
	fclose (source);
	fclose(out_otherfile);
}

void n3(){
	prestart();
	int i=1;
		source =fopen ("out.txt", "r");
		out_otherfile = fopen("o.txt","a+");
		//fscanf (out_a, "%d", &i);
		while (!feof (source))
		{
		fscanf(source,"%d",&ch);

		if(i==2){
			i=0;
			fprintf(out_otherfile,"%d\n",0);
		}else{
			++i;
			fprintf(out_otherfile,"%d\n",ch);}
		}
		printf("Файл скопирован!");
		fclose (source);
		fclose(out_otherfile);
}

void n5(){
	prestart();
		int i=1;
			source =fopen ("out.txt", "r");
			out_otherfile = fopen("o.txt","a+");
			//fscanf (out_a, "%d", &i);
			while (!feof (source))
			{
			fscanf(source,"%d",&ch);

			if(ch%2!=0){
				fprintf(out_otherfile,"%d\n",ch*4);
			}
			else{
				fprintf(out_otherfile,"%d\n",ch);}
			}
			printf("Файл скопирован!");
			fclose (source);
			fclose(out_otherfile);
}

void n7(){
	prestart();
			int i=0;
				source =fopen ("out.txt", "r");
				out_otherfile = fopen("o.txt","a+");
				//fscanf (out_a, "%d", &i);
				while (!feof (source))
				{
					fscanf(source,"%d",&ch);
				i+=ch;
				}
				fprintf(out_otherfile,"%d\n",i);
				printf("Файл скопирован!");
				fclose (source);
				fclose(out_otherfile);
}

void n9(){
	prestart();
	int i=1000;
					source =fopen ("out.txt", "r");
					out_otherfile = fopen("o.txt","a+");
					//fscanf (out_a, "%d", &i);
					while (!feof (source))
					{
						fscanf(source,"%d",&ch);
						fprintf(out_otherfile,"%d\n",i-ch);
					}

					printf("Файл скопирован!");
					fclose (source);
					fclose(out_otherfile);
}

void n11(){
	//prestart();
		int i=0;
		int s=0;
			source =fopen ("out.txt", "r");
			out_otherfile = fopen("o.txt","w");
			while (!feof(source))
			{
			fscanf(source,"%d",&ch);

			if(i==2){
				fprintf(out_otherfile,"%d\n",s/2);
				s=0;
				i=1;
			}else{
				s+=ch;
				++i;
			}
			}
			printf("Файл скопирован!");
			fclose (source);
			fclose(out_otherfile);
}

void n13(){
int c,c2,p2,pol=0xEDB88320;
	int n,k;
						source =fopen ("out.txt", "r");
						out_otherfile = fopen("o.txt","a+");
						//fscanf (out_a, "%d", &i);
						while (!feof (source))
						{
							fscanf(source,"%d",&n);
							fscanf(source,"%d",&k);
							n=(n-k)<<3;
							fscanf(source,"%x",&c);
							fscanf(source,"%x",&c2);
							c ^=c2;
							p2 = (pol <<1)|1;
							while(n--) if(c&0x80000000) c = (c<<1)^p2; else c<<=1;
							fprintf(out_otherfile,"XOR masks: %02X %02X %02X %02X\n", c&0xff, (c>>8)&0xff, (c>>16)&0xff, c>>24);
						}

						printf("Файл скопирован!");
						fclose (source);
						fclose(out_otherfile);


}

void n15(){
	int i=0;
				source =fopen ("out.txt", "r");
				out_otherfile = fopen("o.txt","w");
				while (!feof(source))
				{
				fscanf(source,"%d",&ch);
                    ++i;
					fprintf(out_otherfile,"%d, порядковый номер %d\n",ch,i);


				}
				printf("Файл скопирован!");
				fclose (source);
				fclose(out_otherfile);
}

void n17(){
	//prestart();
			int i=1;
			int s=0;
				source =fopen ("out.txt", "r");
				out_otherfile = fopen("o.txt","w");
				while (!feof(source))
				{
				fscanf(source,"%d",&ch);

				if(i==4){
					fprintf(out_otherfile,"%d\n",ch/2);
					i=1;
				}else{
					++i;
				}
				}
				printf("Файл скопирован!");
				fclose (source);
				fclose(out_otherfile);

}

void n20(){
	//prestart();

					source =fopen ("out.txt", "r");
					out_otherfile = fopen("o.txt","w");
					while (!feof(source)){
					fscanf(source,"%d",&ch);
					if(ch==0){
						fprintf(out_otherfile,"%d\n",1);
					}else if(ch==1){
						fprintf(out_otherfile,"%d\n",0);
					}else{
						fprintf(out_otherfile,"%d\n",ch);
					}}
					printf("Файл скопирован!");
					fclose (source);
					fclose(out_otherfile);
}

void n22(){
	//prestart();

						source =fopen ("out.txt", "r");
						out_otherfile = fopen("o.txt","w");
						while (!feof(source)){
						fscanf(source,"%d",&ch);
						if(ch<0){
							fprintf(out_otherfile,"%s\n","Положительное");
						}else{
							fprintf(out_otherfile,"%s\n","Отрицательное");
						}}
						printf("Файл скопирован!");
						fclose (source);
						fclose(out_otherfile);
}

void n24(){
	//prestart
	int s=0;
		source =fopen ("out.txt", "r");
		out_otherfile = fopen("o.txt","w");
		while (!feof(source))
		{
		fscanf(source,"%d",&ch);
		scanf("%d",&s);
		s+=ch;
			fprintf(out_otherfile,"%d\n",s);
			s=0;


		}
		printf("Файл скопирован!");
		fclose (source);
		fclose(out_otherfile);
}




int main(int argc, char **argv){
//n1();
//n3();
//n5();
//n7();
  //n9();
  //n11();
	//n13();
   //n15();
	//n17();
	//n20();
	//n22();
	//n24();
	//Творческое задание
	 DIR *dfd;
	    struct dirent *dp;
	    char filename[NAME_MAX];

	    if ( argc < 2 )
	        strcpy(filename, ".");
	    else
	        strcpy(filename, argv[1]);

	    printf("%s\n\n", filename);
	    dfd=opendir(filename);

	    while( (dp=readdir(dfd)) != NULL )
	            printf("%s\n", dp->d_name);

	    closedir(dfd);
	    return 0;

}
