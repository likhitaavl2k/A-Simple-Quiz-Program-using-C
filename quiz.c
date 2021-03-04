#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void get_instructions();
void score();

int main(){
	char name[20];
	char choice;
	home:
    printf("\n________________________________");		
	printf("\n    > to start the game enter S");
    printf("\n    > to get help,enter H");
	printf("\n    > to get scores,enter A");
	printf("\n    > to quit the game,enter Q");
	printf("\n________________________________");
	choice=getch();
    if(choice=='A'|| choice=='a')
    {
    score();
    getch();
    goto home;}   
     else if(choice=='H' || choice=='h')
    {
    get_instructions();
    getch();
    goto home;}
    else if(choice=='q' || choice=='Q')
    exit(0);
    else if(choice=='S' || choice=='s')
    {
    printf("\n Enter your name:");
    scanf("%s",name);
    printf("\n\n\t\t\t WELCOME TO MY GAME %s",name);
    printf("\n\n\t\t\t !!!!!ALL THE BEST!!!!!");
	char questions[15][200] = {"who is the father of C?",
	                          "who won the ipl match in 2018?",
	                          "Grand central terminal,Park Avenue,New York is the world's?",
							   "Entomology is the science that studies:",
							   "India's first technicolor film______ in the early 1950s was produced by _____",
							   "India's first satellite is named after",
							   "In a normal human body,the total number of red blood cells is",
							   "How many teeth does a normal adult dog have?",
							   "Which state has been adjusted the best state at 2018 IITF Delhi?",
							   "The Bilateral naval exercise 'Konkan 18' has started between India and which country?",
							   "Who has been elected the first woman president of India?",
							   "What is the middle name of Sachin Tendulkar?",
							   "The National Register of Citizen(NRC)is the list of Indian citizens of which state?",
							   " Which City hosted more than a lakh of people to perform yoga together and  created a Guinness World Record on the occasion of International Day of Yoga, 2018?",
							   " Which of these is a title given to the one who is a highly-skilled person or an expert?"
							   };
	char options[15][200] = {"A. James Gosling \t\t\t B. Dennis Ritchie \n C. Charles Babbage \t\t\t D. Guido van Rossum",
	                        "A. Deccan Chargers \t\t\t B. Chennai Super Kings \n C. Mumbai Indians \t\t\t D. Sunrisers Hyderabad",
							"A. Largest railway station \n B. Highest railway station \n C. Longest railway station \n D. None of the above",
							"A. Behaviour of human beings\t\t\t B. Insects \n C. Scientific terms \t\t\t\t D. Formation of Rocks",
							"A. 'Jhansi ki Rani',Sohrab Modi \n B. 'Jhansi ki Rani',Sir Syed Ahmed \n C. 'Mirza Ghalib',Sohrab Modi \n D. 'Mirza Ghalib',Munshi premchand",
							"A. Aryabhatta \t\t\t B. Bhaskara II \n C. Bhaskara I \t\t\t D. Albert Einstein",
							"A. 15 trillion \t\t\t B. 20 trillion \n C. 25 trillion \t\t\t D. 30 trillion",
							"A. 32 \t\t\t B. 34 \n C. 38 \t\t\t D. 42",
							"A. West Bengal \t\t\t B. Uttarakhand \n C. Jammu & Kashmir \t\t\t D. Himachal Pradesh",
							"A. United Kingdom \t\t\t B. Japan \n C. Indonesia \t\t\t\t D. Singapore",
							"A. Pratibha Devisingh Patil \t\t\t B. Indira Gandhi \n C. Sue Monk Kidd \t\t\t\t D. Salome Zurabishvili",
							"A. Karthik \t\t\t B. Ramesh \n C. Prash \t\t\t D. Ravi",
							"A. Arunachal Pradesh \t\t\t B. Meghalaya \n C. Assam \t\t\t\t D. Sikkim",
							"A. Udaipur \t\t\t B. Jodhpur  \n C. Jaipur  \t\t\t D. Kota",
							"A. Rahbar \t\t\t B. Sahib  \n C. Faiz  \t\t\t D. Ustaad "
							};
	char answers[15] = {'b','b','a','b','a','a','d','d','c','d','a','b','c','d','d'};
	int i=0,count=0;
	char option;
	
	for(i=0;i<15;i++){
		printf("\n %s \n %s",questions[i],options[i]);
		option = getch();
		printf("%c",option);
		getch();
		if(option == answers[i]){
			printf("\n");
			printf("\n Hurray !!! Correct Answer...");
			getch();
			count+=10;
		}
		else{
			printf("\n");
			printf("\n Wrong!!! Correct option is %c",answers[i]);
	        getch();	
		}printf("\n\n");
	}  
	printf("\n\n\n YOUR TOTAL SCORE IS %d", count);
	score(count,name);
	return 0;
  }
}


void score(int count,char *name)
{
    FILE *fp;
    fp=fopen("score.txt","a+");
	fprintf(fp,"\nNAME: %s \t SCORE: %d",name,count);
	fclose(fp);
}

void get_instructions()
{
	printf("\n\t\t\t\t  HELP");
	printf("\n________________________________________________________________________________");
	printf("\n >> You are going to get 15 questions");
	printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> After entering the option,press enter");
    printf("\n >> You will be asked questions continuously if");
	printf("\n    you keep giving the right answer");
    printf("\n >> There is no negative marking for wrong answers");
    printf("\n                !!!!!!!!!!BEST OF LUCK!!!!!!!!!!!");
    printf("\n________________________________________________________________________________ ");
}
