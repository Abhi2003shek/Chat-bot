#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int i,j=0,ctr=0,s=-1;
char a[50],b[50][50];

  //Function to empty the string arrays.
  void empty()
  {
    j=0;
    ctr=0;
    strcpy(a," ");
    for(i=0;i<=ctr+1;i++){
      strcpy(b[i]," ");
    }
  }

  

 //Function to convert sentences to words.
  void slitter()
  {
   
    gets(a);
    for(i=0;i<=(strlen(a));i++){
      if(a[i]==' '||a[i]=='\0'||a[i]==','||a[i]=='.'){
        b[ctr][j]='\0';
        ctr++;
      }else{
        b[ctr][j]=tolower(a[i]);
        j++;
      }
    }
  }  

 //Function related to admission related inputs.
 void admissions()
 {
    for(i=0;i<ctr;i++){
      if(strcmp(b[i],"management")==0){
        printf("call 0909 for management admissions\n\t\t\t\t\t\t");
      }else if(strcmp(b[i],"cet")==0||strcmp(b[i],"kcet")==0){
        printf("call 01010 for kcet admissions\n\t\t\t\t\t\t");
      }else if(strcmp(b[i],"quota")==0){
        printf("mvj provides both management\nand cet seats for its students\n\t\t\t\t\t\t");
        empty();
        slitter();
        admissions();
      }else{
        printf("Looking for management or cet admissions?\n\t\t\t\t\t\t");
        empty();
        slitter();
        admissions();
      }
    }
  }

  //Function for inputs related to courses.
  void courses()
  {
    printf("Courses/Programmes Offered are:\n");
    printf("\tSchool of Computer Science\n");
    printf("\t\tUG Courses\n");
    printf("\t\t\tComputer Science Engineering\n");
    printf("\t\t\tInformation Science and Engineering\n");
    printf("\t\t\tData Science\n");
    printf("\t\t\tArtificial Intelligence and machine learning\n");
    printf("\t\tPG Courses\n");
    printf("\t\t\tM Tech-Computer Science Engineering\n\n");
  
    printf("\tSchool of Electrical Sciences\n");
    printf("\t\tUG Courses\n");
    printf("\t\t\tElectrical and Electronics Engineering\n");
    printf("\t\t\tElectronics and Communication Engineering\n\n");

    printf("\tSchool of Mechanical Sciences\n");
    printf("\t\tUG Courses\n");
    printf("\t\t\tAerospace Engineering\n");
    printf("\t\t\tAeronautical Engineering\n");
    printf("\t\t\tMechanical Engineering\n");
    printf("\t\t\tChemical Engineering\n");
    printf("\t\t\tCivil Engineering\n");
    printf("\t\tPG Courses\n");
    printf("\t\t\tM tech-Aeronautical Engineering\n");
    printf("\t\t\tM tech-Structural Engineering\n");
    printf("\t\t\tM tech-Transportation Engineering\n\n");

    printf("\tBusiness School\n");
    printf("\t\t\tMaster of Business Administration(MBA)\n\n");
    
    printf("\tBasic Science\n");
    printf("\t\t\tPhysics\n");
    printf("\t\t\tChemistry\n");
    printf("\t\t\tMathematics\n\n");

    printf("For more info any any program,\ntype in the course name");
    empty();
    slitter();
    for(i=0;i<ctr;i++){
      if(strcmp(b[i],"computer")==0||strcmp(b[i],"computerscience")==0)
        system("START https://www.mvjce.edu.in/computer-science-engineering-csc/");
      else if(strcmp(b[i],"information")==0||strcmp(b[i],"informationscience")==0)
        system("START https://www.mvjce.edu.in/information-science-and-engineering/");
      else if(strcmp(b[i],"data")==0||strcmp(b[i],"datascience")==0)
        system("START https://www.mvjce.edu.in/data-science-engineering/");
      else if(strcmp(b[i],"artificial")==0||strcmp(b[i],"machine")==0)
        system("START https://www.mvjce.edu.in/artificial-intelligence-machine-learning-ai-ml/");
      else if(strcmp(b[i],"tech")==0||strcmp(b[i],"mtech")==0&&strcmp(b[i],"computer")==0||strcmp(b[i],"computerscience")==0)
        system("START https://www.mvjce.edu.in/m-tech-computer-science-engineering/");
      else if(strcmp(b[i],"electrical")==0&&strcmp(b[i],"electronics")==0)
        system("START https://www.mvjce.edu.in/electrical-electronics-engineering");
      else if(strcmp(b[i],"electronics")==0&&strcmp(b[i],"communication")==0)
        system("START https://www.mvjce.edu.in/computer-science-engineering-csc/");
      else if(strcmp(b[i],"aerospace")==0)
        system("START https://www.mvjce.edu.in/computer-science-engineering-csc/");
      else if(strcmp(b[i],"aeronautical")==0)
        system("START https://www.mvjce.edu.in/computer-science-engineering-csc/");
      else if(strcmp(b[i],"mechanical")==0)
        system("START https://www.mvjce.edu.in/computer-science-engineering-csc/");
      else if(strcmp(b[i],"chemical")==0)
        system("START https://www.mvjce.edu.in/computer-science-engineering-csc/");
      else if(strcmp(b[i],"civil")==0)
        system("START https://www.mvjce.edu.in/computer-science-engineering-csc/");
      else if(strcmp(b[i],"mba")==0||strcmp(b[i],"business")==0)
        system("START https://www.mvjce.edu.in/computer-science-engineering-csc/");
      else if(strcmp(b[i],"physics")==0)
        system("START https://www.mvjce.edu.in/computer-science-engineering-csc/");
      else if(strcmp(b[i],"chemistry")==0)
        system("START https://www.mvjce.edu.in/computer-science-engineering-csc/");
      else if(strcmp(b[i],"mathematics")==0)
        system("START https://www.mvjce.edu.in/computer-science-engineering-csc/");
      else if((strcmp(b[i],"tech")==0||strcmp(b[i],"mtech")==0)&&(strcmp(b[i],"aeronautical")==0))
        system("START https://www.mvjce.edu.in/computer-science-engineering-csc/");
      else if((strcmp(b[i],"tech")==0||strcmp(b[i],"mtech")==0)&&(strcmp(b[i],"structural")==0))
        system("START https://www.mvjce.edu.in/computer-science-engineering-csc/");
      else if((strcmp(b[i],"tech")==0||strcmp(b[i],"mtech")==0)&&(strcmp(b[i],"transportation")==0))
        system("START https://www.mvjce.edu.in/computer-science-engineering-csc/");
    }
  }

  //Functions for inputs related to placements.
  void placements()
  {
    printf("Hiip\n");
  }

  //Functions for inputs related to notes
  void notes()
  {
    printf("Hiin\n");
  }

  //Functions for inputs related to sports
  void sports()
  {
    printf("Hiis\n");
  }

  //Funtion for inputs related to mvj basics.
  void intro()
  {
    printf("Hiii\n");
  }

  //Function for simple jokes.
  void joke()
  {
    printf("Noting for u :)\n");
    main();
  }

  void option();

  void start(){
    empty();
    slitter();
    option();
  }

  void main()	
  {
    printf("Namaste,\nAdbhut! here\nHow may i help you\n\t\t\t\t\t\t");
    start();
    //system("START www.google.com");
  }

  //Function for selecting the keyword.
  void option(){
    for(i=0;i<ctr;i++){
      if(strcmp(b[i],"admission")==0||strcmp(b[i],"admissions")==0||strcmp(b[i],"adm")==0||strcmp(b[i],"management")==0||strcmp(b[i],"cet")==0||strcmp(b[i],"kcet")==0||strcmp(b[i],"quota")==0){
        admissions();
        start();}
      else if(strcmp(b[i],"course")==0||strcmp(b[i],"courses")==0||strcmp(b[i],"subjects")==0||strcmp(b[i],"subject")==0||strcmp(b[i],"sub")==0)
        courses();
      else if(strcmp(b[i],"placements")==0||strcmp(b[i],"job")==0||strcmp(b[i],"jobs")==0||strcmp(b[i],"salary")==0||strcmp(b[i],"ctc")==0)
        placements();
      else if(strcmp(b[i],"notes")==0||strcmp(b[i],"syllabus")==0||strcmp(b[i],"semester")==0||strcmp(b[i],"question")==0||strcmp(b[i],"paper")==0||strcmp(b[i],"papers")==0||strcmp(b[i],"books")==0||strcmp(b[i],"questionpaper")==0)
        notes();
      else if(strcmp(b[i],"sports")==0||strcmp(b[i],"club")==0||strcmp(b[i],"clubs")==0)
        sports();
      else if(strcmp(b[i],"aboutus")==0||strcmp(b[i],"campus")==0)
        intro();
      else if(strcmp(b[i],"funny")==0||strcmp(b[i],"joke")==0)
        joke();
      else if(strcmp(b[i],"hii")==0||strcmp(b[i],"hey")==0||strcmp(b[i],"namaste")==0||strcmp(b[i],"hello")==0||strcmp(b[i],"hi")==0){
        printf("Namaste\nHow may i help you\n\t\t\t\t\t\t");
        start();
      }
            else if(strcmp(b[i],"exit")==0){
        printf("Thanks for contacting us :)\n");
        exit;
      }
      else
        printf("I am sorry I dont have an answer for this.\nPlease try again with just one keyword\nto see if I can find something\n\t\t\t\t\t\t");
    }
  }


  