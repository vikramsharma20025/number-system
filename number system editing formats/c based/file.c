#include <stdio.h>

//decimal to binary
int decimal_binary(int num){
    int num;
    int newnum[32],finalarray[32];
    scanf("%d",&num);
    int i = 0;
    while (num>0)
    {
        newnum[i]=num%2;
        num=num/2;
        i++;
    }
    for (int m = i-1; m >= 0; m--)
    {
        finalarray[m]=newnum[m];
    }
    return finalarray[32];
    
    
}
//decimal to hexadecimal
int decimal_hexadecimal(int num){
    int num;
    int newnum[32],finalarray[32];
    scanf("%d",&num);
    int i = 0;
    while (num>0)
    {
        newnum[i]=num%8;
        num=num/8;
        
        if (newnum[i]==10)
        {
            newnum[i]="A";
        }else if (newnum[i]==11)
        {
            newnum[i]="B";
        }else if (newnum[i]==12)
        {
            newnum[i]="C";
        }else if (newnum[i]==13)
        {
            newnum[i]="D";
        }else if (newnum[i]==14)
        {
            newnum[i]="E";
        }else if (newnum[i]==15)
        {
            newnum[i]="F";
        }
        i++;
    }
    for (int m = i-1; m >= 0; m--)
    {
        finalarray[m]=newnum[m];
    }
    
    return finalarray[32];
    
}
//decimal to octal
int decimal_octal(int num){
    int num;
    int newnum[32],finalarray[32];
    scanf("%d",&num);
    int i = 0;
    while (num>0)
    {
        newnum[i]=num%16;
        num=num/16;
        i++;
    }
    for (int m = i-1; m >= 0; m--)
    {
        finalarray[m]=newnum[m];
    }

    return finalarray[32];
}
//binary to decimal
int binary_decimal(int num){
    int dec_value=0;
    int base=1;
    int temp=num;
    while (temp)
    {
        int last_digit = temp%10;
        temp = temp / 10;
        dec_value+=last_digit * base;
        base = base*2;
    }
    return dec_value;
}

//function to create map between binary
void createmap(unordered_map<string, char> *um){
    (*um)["000"] = '0';
    (*um)["000"] = '0';
    (*um)["000"] = '0';
    (*um)["000"] = '0';
    (*um)["000"] = '0';
    (*um)["000"] = '0';
    (*um)["000"] = '0';
    (*um)["000"] = '0';

}

//binary to octal
int binary_octal(int num){
    int l = num.size();
    int t =num.find_first_of('.');
    int len_left = t != -1 ? t :1;
    for (int i = 1; i <= (3 - len_left % 3) % 3; i++)
    {
        bin ='0'+bin;
    }
    if (t != -1)
    {
        int len_right = 1 - len_left - 1;
        for (int i = 1; i <= (3 - len_right % 3) % 3; i++)
        {
            bin=bin+'0';
        }
        
    }
    unordered_map<string , char>bin_oct_map;
    createmap(&bin_oct_map);
    int i = 0;
    string octal = "";
    while (1)
    {
        octal +=bin_oct_map[bin.substr(i,3)];
        i += 3;
        if (i == bin.size())
            break;
        if (bin.at(i) == '.')
        {
            octal += '.';
            i++;
        }
        
        
    }
    return octal;
}

void createMaphexadecimal(unordered_map<string, char> *um) 
{ 
    (*um)["0000"] = '0'; 
    (*um)["0001"] = '1';
    (*um)["0010"] = '2'; 
    (*um)["0011"] = '3'; 
    (*um)["0100"] = '4'; 
    (*um)["0101"] = '5'; 
    (*um)["0110"] = '6'; 
    (*um)["0111"] = '7'; 
    (*um)["1000"] = '8'; 
    (*um)["1001"] = '9'; 
    (*um)["1010"] = 'A'; 
    (*um)["1011"] = 'B'; 
    (*um)["1100"] = 'C'; 
    (*um)["1101"] = 'D'; 
    (*um)["1110"] = 'E'; 
    (*um)["1111"] = 'F'; 
} 

//binary to hexadecimal

int binary_hexadecimal(int num){
    int l = bin.size();
    int t = bin.find_first_of('.');
    int len_left = t != -1 ? t:1;
    for (int i = 0; i < count; i++)
    {
        bin = '0' + bin;
    }
    if (t !=-1)
    {
        int len_right=1 - len_left - 1;
        for (int i = 0; i <= (4 - len_right % 4) % 4; i++)
        {
            bin=bin+'0';
        }
        
    }
    unordered_map<string, char>bin_hex_map;
    createmap(&bin_hex_map);
    int i = 0;
    string hex = "";
    while (1)
    {
        hex += bin_hex_map[bin.substr(i,4)];
        i += 4;
        if (bin.at(i) == '.')
        {
            hex += '.';
            i++;
        }
        
    }
    
    return hex;
}
//octal to binary
int octal_binary(int num){

}
//octal to decimal
int octal_decimal(int num){

}
//octal to hexadecimal
int octal_hexadecimal(int num){

}
//hexadecimal to binary
int hexadecimal_binary(char num){

}
//hexadecimal to octal
int hexadecimal_octal(char num){

}
//hexadecimal to decimal
int hexadecimal_decimal(char num){

}
//addition of two numbers
void addition(int num1;int num2){
    
}
//subtraction of two numbers
void subtraction(int num1,int num2){

}
//division of two numbers
void division(int num1,int num2){

}
//multiplication of two numbers
void multiplication(int num1,int num2){

}
//show options 
void show_options(){
    printf("Enter Number According For Type Choice\n");
    printf("1. for decimal \n");
    printf("2. for hexadecimal\n");
    printf("3. for octal \n");
    printf("4. for binary\n");
}
//show task to be done
void show_task_to_be_done(){
    printf("1. for addition\n");
    printf("2. for subtraction\n");
    printf("3. for divison\n");
    printf("4. for multiplication\n");
    printf("5. for conversion\n");
}
int type_decimal_checking_and_converting(int type){
    if (type==1)
    {
        return 0;
    }else if (type==2)
    {
        return hexadecimal_decimal(&hexadecimalvalue);

    }else if (type==3)
    {
        return octal_decimal(&value);
    }else if (type==4)
    {
        return binary_decimal(&value);
    }
}
int output_type_converting(int type){
    if (type==1)
    {
        return 0;
    }else if (type==2)
    {
        return decimal_hexadecimal(&result);

    }else if (type==3)
    {
        return decimal_octal(&result);
    }else if (type==4)
    {
        return decimal_binary(&result);
    }
}
void getting_values_conversion(int *typea,int *typeb){
    switch (typea)
    {
    case 1:
        switch (typeb)
        {
        case 1:
            return *value;
            break;
        case 2:
            return decimal_hexadecimal(&value);
            break;
        case 3:
            return decimal_octal(&value);
            break;
        case 4:
            return decimal_binary(&value);
            break;
        default:
            printf("Enter valid type");
            main();
            break;
        }
        break;
    case 2:
        switch (typeb)
        {
        case 1:
            return hexadecimal_decimal(&hexadecimal_value);
            break;
        case 2:
            return *value;
            break;
        case 3:
            return hexadecimal_octal(&value);
            break;
        case 4:
            return hexadecimal_binary(&value);
            break;
        default:
            printf("Enter valid type");
            main();
            break;
        }
        break;
    case 3:
        switch (typeb)
        {
        case 1:
            return octal_decimal(&value);
            break;
        case 2:
            return octal_hexadecimal(&value);
            break;
        case 3:
            return *value;
            break;
        case 4:
            return octal_binary(&value);
            break;
        default:
            printf("Enter valid type");
            main();
            break;
        }
        break;
    case 4:
        switch (typeb)
        {
        case 1:
            return binary_decimal(&value);
            break;
        case 2:
            return binary_hexadecimal(&value);
            break;
        case 3:
            return binary_octal(&value);
            break;
        case 4:
            return *value;
            break;
        default:
            printf("Enter valid type");
            main();
            break;
        }
        break;
    default:
        printf("Enter valid type");
        main();
        break;
    }
    
}

int main(){
    char *task;
    int *type1,*type2,*output_type;
    int user_choice;
    char *hexadecimalvalue;
    int *value;

    show_task_to_be_done();
    scanf("%d",&user_choice);
    switch (user_choice)
    {
    case 1:
        printf("Enter types one by one\n");
        show_options();
        scanf("%d",&type1);
        show_options();
        scanf("%d",&type2);
        printf("Enter first value");
        if (type1!=2)
        {
            scanf("%d",&value);
        }else
        {
            scanf("%c",&hexadecimalvalue);
        }
        printf("Enter second value");
        if (type1!=2)
            scanf("%d",&value);
        {
        }else
        {
            scanf("%c",&hexadecimalvalue);
        }
        
        
        int decimal_value1=type_decimal_checking_and_converting(&type2);
        int decimal_value2=type_decimal_checking_and_converting(&type2);
        int result=decimal_value1+decimal_value2;
        printf("note:chosse output type\n");
        show_options();
        scanf("%d",&output_type);
        result=output_type_converting(&output_type);
        printf("%d",result);
        break;
    case 2:
        printf("Enter types one by one\n");
        show_options();
        scanf("%d",&type1);
        show_options();
        scanf("%d",&type2);
        printf("Enter first value");
        if (type1!=2)
        {
            scanf("%d",&value);
        }else
        {
            scanf("%c",&hexadecimalvalue);
        }
        printf("Enter second value");
        if (type1!=2)
        {
            scanf("%d",&value);
        }else
        {
            scanf("%c",&hexadecimalvalue);
        }
        int decimal_value1=type_decimal_checking_and_converting(&type2);
        int decimal_value2=type_decimal_checking_and_converting(&type2);
        int result=decimal_value1-decimal_value2;
        printf("note:chosse output type\n");
        show_options();
        scanf("%d",&output_type);
        result=output_type_converting(&output_type);
        printf("%d",result);
        break;
    case 3:
        printf("Enter types one by one\n");
        show_options();
        scanf("%d",&type1);
        show_options();
        scanf("%d",&type2);
        printf("Enter first value");
        if (type1!=2)
        {
            scanf("%d",&value);
        }else
        {
            scanf("%c",&hexadecimalvalue);
        }
        printf("Enter second value");
        if (type1!=2)
        {
            scanf("%d",&value);
        }else
        {
            scanf("%c",&hexadecimalvalue);
        }
        int decimal_value1=type_decimal_checking_and_converting(&type2);
        int decimal_value2=type_decimal_checking_and_converting(&type2);
        int result=decimal_value1/decimal_value2;
        printf("note:chosse output type\n");
        show_options();
        scanf("%d",&output_type);
        result=output_type_converting(&output_type);
        printf("%d",result);
        break;
    case 4:
        printf("Enter types one by one\n");
        show_options();
        scanf("%d",&type1);
        show_options();
        scanf("%d",&type2);
        printf("Enter first value");
        if (type1!=2)
        {
            scanf("%d",&value);
        }else
        {
            scanf("%c",&hexadecimalvalue);
        }
        printf("Enter second value");
        if (type1!=2)
        {
            scanf("%d",&value);
        }else
        {
            scanf("%c",&hexadecimalvalue);
        }
        int decimal_value1=type_decimal_checking_and_converting(&type2);
        int decimal_value2=type_decimal_checking_and_converting(&type2);
        int result=decimal_value1*decimal_value2;
        printf("note:chosse output type\n");
        show_options();
        scanf("%d",&output_type);
        result=output_type_converting(&output_type);
        printf("%d",result);
        break;
    
    case 5:
        show_options();
        scanf("%d",&type1);
        printf("note:chosse output type");
        show_options();
        scanf("%d",&type2);
        printf("Enter value");
        if (type1!=2)
        {
            scanf("%d",&value);
        }else
        {
            scanf("%c",&hexadecimalvalue);
        }
        int decimal_value1=getting_values_conversion();
        int result;
        printf("%d",result);
        break;
    
    default:
        break;
    }
    return 0;
}
