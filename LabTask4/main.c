Last login: Tue Nov 21 20:39:32 on ttys000
Shreeyas-MBP:~ shreeyamishra$ ls
Applications		Library			eclipse-workspace
Box Sync		Makefile		ibt_application.log
Creative Cloud Files	Movies			ibtsa.log
Desktop			Music			oasys.log
Documents		Pictures		summary.txt
Downloads		Public			test
Jts			eclipse
Shreeyas-MBP:~ shreeyamishra$ ssh lee3
shmi322@lee.cs.miami.edu's password: 
Last login: Sat Nov 18 00:19:25 2017 from 108-209-168-107.lightspeed.miamfl.sbcglobal.net
[shmi322@lee ~]$ ls
bash       FileCopy.c        HelloWorld  LabTask4  perl5
#.bashrc#  gettingStarted    LabTask1    LabTask5  public_html
fi         gettingStarted.c  LabTask2    LabTask6  swap
FileCopy   GrepExUM.txt      LabTask3    LabTask7
[shmi322@lee ~]$ cd LabTask1
[shmi322@lee LabTask1]$ ls
disk.sh          Explanation.txt  #GetMyStuff.sh#  #MyPipe.txt#  MyStuff.txt
environment.txt  file1.txt        GetMyStuff.sh    MyPipe.txt
[shmi322@lee LabTask1]$ vim disk.sh 



[shmi322@lee LabTask1]$ vim env
[shmi322@lee LabTask1]$ ls
disk.sh          Explanation.txt  #GetMyStuff.sh#  #MyPipe.txt#  MyStuff.txt
environment.txt  file1.txt        GetMyStuff.sh    MyPipe.txt
[shmi322@lee LabTask1]$ vim environment.txt 
[shmi322@lee LabTask1]$ vim Explanation.txt 
[shmi322@lee LabTask1]$ vim GetMyStuff.sh 
[shmi322@lee LabTask1]$ vim My
MyPipe.txt   MyStuff.txt  
[shmi322@lee LabTask1]$ vim MyPipe.txt 
[shmi322@lee LabTask1]$ vim My
MyPipe.txt   MyStuff.txt  
[shmi322@lee LabTask1]$ vim MyStuff.txt 
[shmi322@lee LabTask1]$ ls
disk.sh          Explanation.txt  #GetMyStuff.sh#  #MyPipe.txt#  MyStuff.txt
environment.txt  file1.txt        GetMyStuff.sh    MyPipe.txt
[shmi322@lee LabTask1]$ cd ..
[shmi322@lee ~]$ ls
bash       FileCopy        gettingStarted.c  LabTask1  LabTask4  LabTask7     swap
#.bashrc#  FileCopy.c      GrepExUM.txt      LabTask2  LabTask5  perl5
fi         gettingStarted  HelloWorld        LabTask3  LabTask6  public_html
[shmi322@lee ~]$ cd LabTask2
[shmi322@lee LabTask2]$ ls
Compile.txt   GrepExInts.txt  MakingLinks.txt  rename.sh     Ticker.c
CSCCodes.txt  grep.txt        nohup.out        shreeya.text  Ticker.txt
Eureka.txt    IveGotRights    Originals        test.text     txt.test
file.txt      Links           Permissions.txt  Ticker
[shmi322@lee LabTask2]$ vim Compile.txt 
[shmi322@lee LabTask2]$ vim CSCCodes.txt 
[shmi322@lee LabTask2]$ vim file.txt 
[shmi322@lee LabTask2]$ vim CSCCodes.txt 
[shmi322@lee LabTask2]$ vim file.txt 
[shmi322@lee LabTask2]$ ls
Compile.txt   GrepExInts.txt  MakingLinks.txt  rename.sh     Ticker.c
CSCCodes.txt  grep.txt        nohup.out        shreeya.text  Ticker.txt
Eureka.txt    IveGotRights    Originals        test.text     txt.test
file.txt      Links           Permissions.txt  Ticker
[shmi322@lee LabTask2]$ vim Eureka.txt 
[shmi322@lee LabTask2]$ vim grep.txt 
[shmi322@lee LabTask2]$ vim GrepExInts.txt 
[shmi322@lee LabTask2]$ vim Ticker.c
[shmi322@lee LabTask2]$ vim Ticker.txt
[shmi322@lee LabTask2]$ vim Permissions.txt 
[shmi322@lee LabTask2]$ vim MakingLinks.txt 
[shmi322@lee LabTask2]$ ls
Compile.txt   GrepExInts.txt  MakingLinks.txt  rename.sh     Ticker.c
CSCCodes.txt  grep.txt        nohup.out        shreeya.text  Ticker.txt
Eureka.txt    IveGotRights    Originals        test.text     txt.test
file.txt      Links           Permissions.txt  Ticker
[shmi322@lee LabTask2]$ cd ..
[shmi322@lee ~]$ ls
bash       FileCopy        gettingStarted.c  LabTask1  LabTask4  LabTask7     swap
#.bashrc#  FileCopy.c      GrepExUM.txt      LabTask2  LabTask5  perl5
fi         gettingStarted  HelloWorld        LabTask3  LabTask6  public_html
[shmi322@lee ~]$ cd LabTask3
[shmi322@lee LabTask3]$ ls
kangaroos  kangaroos.c  scuba  scuba.c
[shmi322@lee LabTask3]$ vim kangaroos.c
[shmi322@lee LabTask3]$ vim scuba.c
[shmi322@lee LabTask3]$ ls
kangaroos  kangaroos.c  scuba  scuba.c
[shmi322@lee LabTask3]$ cd ..
[shmi322@lee ~]$ cd LabTask4
[shmi322@lee LabTask4]$ ls
main  main2  main2.c  main.c  swap  swap.c
[shmi322@lee LabTask4]$ vim main.c
[shmi322@lee LabTask4]$ vim main2.c
[shmi322@lee LabTask4]$ vim main.c

#include <stdio.h>
#include <stdlib.h>

void input(float* income, float* deduction){
    float test = 0.0;
    do{
        printf("Enter next amount : ");
        scanf("%f", &test);
        if(test > 0.0){
          *income += test;
        }
        if(test < 0.0){
          *deduction+= ((-1) * test);
        }
    }
    while(test != 0);

}
float Income(float income, float deduction){
    float taxableIncome = 0.0;
    if(income >= deduction)
      taxableIncome = income - deduction;
    else
      taxableIncome = 0.0;
    return taxableIncome;
}
char taxGroup(float taxableIncome){
    char group = 'Z';
    if(taxableIncome >= 500000)
         group = 'S';
    else if(taxableIncome >= 200000)
         group = 'Q';
    else if(taxableIncome >= 100000)
         group = 'M';
    else if(taxableIncome >=50000)
         group = 'A';
    else if(taxableIncome >= 20000)
         group = 'R';
    else
        group = 'P';
    return group;
}
float tax(float taxableIncome, char group){
    float owed = 0.0;
    if(group = 'S' || group == 'Q')
owed = (.25 * taxableIncome);
    if(group = 'M')
         owed = (.1 * taxableIncome);
    if(group = 'A' || group == 'R')
         owed = (.03 * taxableIncome);
    if(group = 'P')
         owed = 0.0;
    else
     printf("Error!");
    if(taxableIncome > 50000)
     owed = 50000;
    return owed;
}
void display(float income, float deduction, float taxableIncome, char group, float owed){
    printf("Income         = $%.2f", income);
    printf("\n");

    printf("Deductions     = $%.2f", deduction);
    printf("\n");

    printf("Taxable Income = $%.2f", taxableIncome);
    printf("\n");

    printf("Tax group      = %c", group);
    printf("\n");

    printf("Tax owed       = $ %.2f", owed);
    printf("\n");

}
int main(int argc, char **argv){
    float income = 0.0;
    float deduction = 0.0;
    float taxableIncome = 0.0;
    char group = 'Z';
    float owed = 0.0;
     input(&income, &deduction);
     taxableIncome = Income(income, deduction);
     group = taxGroup(taxableIncome);
     owed = tax(taxableIncome, group);
     display(income, deduction, taxableIncome, group, owed);
        return EXIT_SUCCESS;
}

