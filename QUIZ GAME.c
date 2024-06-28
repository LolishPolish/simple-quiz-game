#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][150] = {"1.who is the mc of one piece?: ",
                           "2.junji ito is known for makin wat genre of manga?: ",
                           "3. who is the mangaka of berserk?: ",
                           "4. IS THAT A JOJO REFRENCE?: ",
                           "5. best waifu?; "};
    char options[][150] = {"A.Naruto","B.Luffy","C.Dio","D.ur mom",
                           "A.comedy","B.moe","C.horror","D.action",
                           "A.Eiichiro Oda","B.Hirihiko Araki","C.Kentaro Miura","D.Tatsuki Fujimoto",
                           "A.Yes","B.Yes","C.Yes","D.Yes",
                           "A.Speedowagon","B.Megumin","C.Rias","D.Emilia"};

    char answers[100] = {'B','C','C','A','A'};
    
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score;

    printf("QUIZ GAME\n");

    for(int i=0; i<numberOfQuestions; i++)
    {
        printf("%s\n",questions[i]);

        for(int j = (i * 4); j<(i * 4)+4; j++)
        {
            printf("%s\n", options[j]);
        }

        printf("guess: ");
        scanf("%c", &guess);
        scanf("%c"); //clear \n from input buffer

        guess = toupper(guess);

        if(guess == answers[i])
        {
          printf("yay noice correct\n");
          score++ ; 
        }
         else if (i==3)
        {
         printf("yay noice correct\n");
         score++ ;
        }   
        else
        {
            printf("lol cring wrong\n");
        }
        

    }

    printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);


    return 0;
}
