#include<stdio.h>
#include <unistd.h> //for sleep function 

//function to pause the program for a specified number of seconds 
void pause(int seconds){
    sleep(seconds);
}

//function to introduce the meditation
void introduction(){
    printf("Welcome to your guided meditation session.\n");
    printf("Find a comfortable position, close your eyes, and prepare to relax.\n");
    pause(3);
}

//function for breathing exercise
void breathingExercise(){
    printf("Let's begin breathing exercise.\n");
    printf("Inhale deeply through your nose for 4 seconds...\n");
    pause(4);
    printf("Hold your breath for 4 seconds.\n");
    pause(4);
    printf("Exhale slowly through your mouth for 4 seconds...\n");
    pause(4);
    printf("Hold for 4 seconds...\n");
    pause(4);
    printf("Repeat this cycle three times.\n");
}

//function for mindfulness reminders
void mindfulnessReminders(){
    printf("Now, let's focus on being present.\n");
    printf("Notice your thoughts, but let them pass without judgement.\n");
    pause(5);
    printf("Feel your body. Notice where you are holding tension.\n");
    pause(5);
}

    //function to conclude the session 
    void conclusion (){
        printf("Thank you for joining this meditation session.\n");
        printf("Slowly bring your awareness back to the room.\n");
        printf("When you are ready, open your eyes.\n");
    }

    int main(){
        //starting the medidation guide
        introduction();
        breathingExercise();
        mindfulnessReminders();
        conclusion();
        return 0;
    }

