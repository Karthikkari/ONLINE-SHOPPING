#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 10
int stack[max];
int top=-1;
int pop(){
    if(top==-1){
        printf("your cart is empty!!");
        return -1;
    }
    else{
        int ele=stack[top];
        top--;
        return ele;
    }
}
int peek(){
    return top;
}
void push(int data){
    if(top==max-1){
        printf("first book these items and shop later!!");
    }
    else{
        top++;
        stack[top]=data;
    }
}
int isempty(){
    if(top==-1){
        return 1;
    }
    return 0;
}
int isfull(){
    if(top==max-1){
        return 1;
    }
    return 0;
}
char name[100],no[10],em[20],p[100],p1[100],no1[10],p2[100],p3[100],np[100],no2[10];
FILE*ptr;
void shop();
int main(){
    int c,d=0,e,f,s,sum=0,w,won,wsa,wrel,wre,wap;
    ptr=fopen("accountdetails.txt","w");
    printf("click 1 for creating the account : ");
    scanf("%d",&c);
    if(c!=1){
        return 0;
    }
    switch(c){
        case 1:printf("\nenter your name : ");
        scanf("%s",name);
        printf("\nenter your mobile number : ");
        scanf("%s",no);
        printf("\nenter your email address : ");
        scanf("%s",em);
        printf("\nenter a password : ");
        scanf("%s",p);
        printf("\nre-enter the password : ");
        scanf("%s",p1);
        if(strcmp(p,p1)==0){
            printf("\nACCOUNT CREATED SUCCESSFULLY\n");
        }
        else{
            printf("\naccount is not created.please check your password and try again later");
            return 0;
        }
        fprintf(ptr,"name: %s\nmobile no: %s\ne-mail id: %s\npassword: %s\n",name,no,em,p);
        rewind(ptr);
        fclose(ptr);
        case 2:printf("\nLOGIN :\n\nenter your mobile number : ");
        scanf("%s",no1);
        if(strcmp(no,no1)==0){
            d=1;
        }
        else{
            printf("\nplease enter a valid phone number and try again");
            return 0;
        }
        printf("\nenter your password : ");
        scanf("%s",p2);
        if(strcmp(p,p2)==0){
            printf("\nYOUR LOGIN SUCCESSFUL\n");
            break;
        }
        else{
            printf("\nplease enter a valid password");
            scanf("%s",p3);
            if(strcmp(p,p3)==0){
                printf("\nLOGIN SUCCESSFUL\n");
                break;
            }
            else{
                printf("\nplease try after some time");
                return 0;
            }
        }
        break;
        default:printf("\nenter a valid number");
        return 0;
    }
    printf("\nenter 1 for account details | 2 for shopping : ");
    scanf("%d",&e);
    switch(e){
        case 1:printf("ACCOUNT DETAILS :\nNAME : %s\nMOBILE NUMBER : %s\nEMAIL ADD : %s\nPASSWORD : %s\n",name,no,em,p);
        printf("enter 1 for changing details | 2 for shopping : ");
        scanf("%d",&f);
        switch(f){
            case 1:printf("\nenter your new password : ");
            scanf("%s",np);
            strcpy(p,np);
            printf("\nenter your mobile number : ");
            scanf("%s",no2);
            strcpy(no,no2);
            printf("\n\nUPDATED ACCOUNT DETAILS:\nNAME : %s\nMOBILE NUMBER : %s\nEMAIL ADD : %s\nPASSWORD : %s\n",name,no,em,p);
            break;
            case 2:shop();
            break;
            default:printf("\nenter a valid number and try again");
            return 0;
        }
        break;
        case 2:shop();
        break;
        default:printf("\nenter a valid number\n");
        return 0;
    }
    printf("\nenter 1 for shopping | 2 for payment : ");
    scanf("%d",&s);
    switch(s){
        case 1:
            printf("\nenter 1 for mobiles | 2 for watches | 3 for earbuds : ");
            int mo,mo1,ap,sa,re1,rel,on;
            scanf("%d",&mo);
            switch(mo){
                case 1:
                    printf("\nMOBILES : \nenter\nApple : 1\nSamsung : 2\nRedmi : 3\nRealmi : 4\nOneplus : 5\nnumber : ");
                    scanf("%d",&mo1);
                    switch(mo1){
                        case 1:
                            printf("\nApple\nModel : iphone\nStorage : 128gb\nRam : 4gb\nColour : White\nPrice : Rs45000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&ap);
                            switch(ap){
                                case 1:
                                    push(45000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 2:
                            printf("\nSamsung\nModel : S24\nStorage : 256gb\nRam : 8gb\nColour : White\nPrice : Rs65000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&sa);
                            switch(sa){
                                case 1:
                                    push(65000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 3:
                            printf("\nRedmi\nModel : Note 13\nStorage : 128gb\nRam : 4gb\nColour : Green\nPrice : Rs25000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&re1);
                            switch(re1){
                                case 1:
                                    push(25000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 4:
                            printf("\nRealme\nModel : Narzo\nStorage : 256gb\nRam : 8gb\nColour : Blue\nPrice : Rs35000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&rel);
                            switch(rel){
                                case 1:
                                    push(35000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 5:
                            printf("\nOne plus\nModel : 12R\nStorage : 256gb\nRam : 16gb\nColour : Sky blue\nPrice : Rs65000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&on);
                            switch(on){
                                case 1:
                                    push(65000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        default:
                            break;
                    }
                    break;
                case 2:
                    printf("\nWATCHES : \nenter\nOnePlus : 1\nApple : 2\nSamsung : 3\nRedmi : 4\nnumber : ");
                    int w,won,wap,wsa,wre,wrel;
                    scanf("%d",&w);
                    switch(w){
                        case 1:
                            printf("\nOne plus\nModel : Nord Watch\nColour : Sky blue\nPrice : Rs10000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&won);
                            switch(won){
                                case 1:
                                    push(10000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 2:
                            printf("\nApple\nModel : iWatch\nColour : White\nPrice : Rs54000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&wap);
                            switch(wap){
                                case 1:
                                    push(54000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 3:
                            printf("\nSamsung\nModel : Galaxy Smart  Watch\nColour : Black\nPrice : Rs12000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&wsa);
                            switch(wsa){
                                case 1:
                                    push(12000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 4:
                            printf("\nRedmi\nModel : Band 6\nColour : Military\nPrice : Rs2500\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&wre);
                            switch(wre){
                                case 1:
                                    push(2500);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 5:
                            printf("\nRealme\nModel : Band\nColour : Sky blue\nPrice : Rs4000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&wrel);
                            switch(wrel){
                                case 1:
                                    push(4000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                    }
                    break;
                case 3:
                    printf("\nEARBUDS : \nenter\nApple : 1\nOnePlus : 2\nSamsung : 3\nRedmi : 4\nRealme : 5\nBoat : 6\nnumber : ");
                    int e,eon,eap,esa,ere,erel,ebo;
                    scanf("%d",&e);
                    switch(e){
                        case 1:
                            printf("\nApple\nModel : Airpods Pro \nColour : white\nPrice : Rs16000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&eap);
                            switch(eap){
                                case 1:
                                    push(16000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 2:
                            printf("\nOneplus\nModel : Nord Buds 2r\nColour : Black\nPrice : Rs2000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&eon);
                            switch(eon){
                                case 1:
                                    push(2000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 3:
                            printf("\nSamsung\nModel : Galaxy Buds\nColour : Black\nPrice : Rs10000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&esa);
                            switch(esa){
                                case 1:
                                    push(10000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 4:
                            printf("\nRedmi\nModel : Buds 4\nColour : Military\nPrice : Rs1000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&ere);
                            switch(ere){
                                case 1:
                                    push(1000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 5:
                            printf("\nRealme\nModel : Buds Air 5\nColour : blue\nPrice : Rs4000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&erel);
                            switch(erel){
                                case 1:
                                    push(4000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 6:printf("\nBoat\nModel : Airdopes 171 TWS\nColour : White\nPrice : Rs1500\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&ebo);
                            switch(ebo){
                                case 1:
                                    push(1500);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                    }
            }
            break;
        break;
        case 2:
            for(int i=top;i>=0;i--){
                sum+=stack[i];
            }
            printf("\nThe total payable amount : Rs %d",sum);
        return 0;
        default:return 0;
    }
    return 0;
}
void shop(){
    int s1,sum1=0,w,won,wap,wsa,wre,wrel;
    printf("\nenter 1 for shopping | 2 for payment: ");
    scanf("%d",&s1);
    switch(s1){
        case 1:
            printf("\nenter 1 for mobiles | 2 for watches | 3 for earbuds : ");
            int mo,mo1,ap,sa,re1,rel,on;
            scanf("%d",&mo);
            switch(mo){
                case 1:
                    printf("\nMOBILES : \nenter\nApple : 1\nSamsung : 2\nRedmi : 3\nRealmi : 4\nOneplus : 5\nnumber : ");
                    scanf("%d",&mo1);
                    switch(mo1){
                        case 1:
                            printf("\nApple\nModel : iphone\nStorage : 128gb\nRam : 4gb\nColour : White\nPrice : Rs45000\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&ap);
                            switch(ap){
                                case 1:
                                    push(45000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 2:
                            printf("\nSamsung\nModel : S24\nStorage : 256gb\nRam : 8gb\nColour : White\nPrice : Rs65000\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&sa);
                            switch(sa){
                                case 1:
                                    push(65000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 3:
                            printf("\nRedmi\nModel : Note 13\nStorage : 128gb\nRam : 4gb\nColour : Green\nPrice : Rs25000\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&re1);
                            switch(re1){
                                case 1:
                                    push(25000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 4:
                            printf("\nRealme\nModel : Narzo\nStorage : 256gb\nRam : 8gb\nColour : Blue\nPrice : Rs35000\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&rel);
                            switch(rel){
                                case 1:
                                    push(35000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 5:
                            printf("\nOne plus\nModel : 12R\nStorage : 256gb\nRam : 16gb\nColour : Sky blue\nPrice : Rs65000\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&on);
                            switch(on){
                                case 1:
                                    push(65000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        default:
                            break;
                    }
                break;
                case 2:
                    printf("\nWATCHES : \nenter\nApple : 1\nOnePlus : 2\nSamsung : 3\nRedmi : 4\nRealme : 5\nnumber : ");
                    int w,won,wap,wsa,wre,wrel;
                    scanf("%d",&w);
                    switch(w){
                        case 1:
                            printf("\nApple\nModel : iWatch\nColour : White\nPrice : Rs54000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&wap);
                            switch(wap){
                                case 1:
                                    push(54000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 2:
                            printf("\nOne plus\nModel : Nord Watch\nColour : Sky blue\nPrice : Rs10000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&won);
                            switch(won){
                                case 1:
                                    push(10000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 3:
                            printf("\nSamsung\nModel : Galaxy Smart  Watch\nColour : Black\nPrice : Rs12000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&wsa);
                            switch(wsa){
                                case 1:
                                    push(12000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 4:
                            printf("\nRedmi\nModel : Band 6\nColour : Military\nPrice : Rs2500\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&wre);
                            switch(wre){
                                case 1:
                                    push(2500);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 5:
                            printf("\nRealme\nModel : Band\nColour : Sky blue\nPrice : Rs4000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&wrel);
                            switch(wrel){
                                case 1:
                                    push(4000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                    }
                break;
                case 3:printf("\nEARBUDS : \nenter\nApple : 1\nOnePlus : 2\nSamsung : 3\nRedmi : 4\nRealme : 5\nBoat : 6\nnumber : ");
                    int e,eon,eap,esa,ere,erel,ebo;
                    scanf("%d",&e);
                    switch(e){
                        case 1:
                            printf("\nApple\nModel : Airpods Pro \nColour : white\nPrice : Rs16000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&eap);
                            switch(eap){
                                case 1:
                                    push(16000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 2:
                            printf("\nOneplus\nModel : Nord Buds 2r\nColour : Black\nPrice : Rs2000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&eon);
                            switch(eon){
                                case 1:
                                    push(2000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 3:
                            printf("\nSamsung\nModel : Galaxy Buds\nColour : Black\nPrice : Rs10000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&esa);
                            switch(esa){
                                case 1:
                                    push(10000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 4:
                            printf("\nRedmi\nModel : Buds 4\nColour : Military\nPrice : Rs1000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&ere);
                            switch(ere){
                                case 1:
                                    push(1000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 5:
                            printf("\nRealme\nModel : Buds Air 5\nColour : blue\nPrice : Rs4000\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&erel);
                            switch(erel){
                                case 1:
                                    push(4000);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 6:printf("\nBoat\nModel : Airdopes 171 TWS\nColour : White\nPrice : Rs1500\n\nenter 1 to add to cart | 2 for shopping : ");
                            scanf("%d",&ebo);
                            switch(ebo){
                                case 1:
                                    push(1500);
                                case 2:
                                    shop();
                                    break;
                                default:
                                    break;
                            }
                            break;
                    }
            }
            break;
        break;
        // case 2:
        //     for(int i=top;i>=0;i--){
        //         sum1+=stack[i];
        //     }
        //     printf("The total payable amount : %d",sum1);
        // break;
        default:break;
    }
}
