#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Declaring the required variables.
   float resource;
   int overs_left, overs_played, wickets_lost, team1_score, team2_score, team1_par_score;
   // Now taking the required inputs from the user.
   printf("Overs played by Team 2 in 50 overs: ");
   scanf("%d", &overs_played);
   overs_left = 50 - overs_played;
   printf("Wickets lost by Team 2 at the stoppage of play: ");
   scanf("%d", &wickets_lost);
   printf("Team 1 innings total: ");
   scanf("%d", &team1_score);
   printf("Team 2 innings total: ");
   scanf("%d", &team2_score);
// Getting the required resource percentage depending on the user input.
   if(overs_left == 50 && wickets_lost == 0){
        resource = 100;
   }
   else if(overs_left == 40 && wickets_lost == 0) {
        resource = 89.3;
   }
   else if(overs_left == 30 && wickets_lost == 0) {
       resource = 75.1;
   }
   else if(overs_left == 25 && wickets_lost == 0) {
       resource = 66.5;
   }
   else if(overs_left == 20 && wickets_lost == 0) {
       resource = 56.6;
   }
   else if(overs_left == 10 && wickets_lost == 0) {
       resource = 32.1;
   }
   else if(overs_left == 5 && wickets_lost == 0) {
       resource = 17.2;
   }
   else if(overs_left == 50 && wickets_lost == 2) {
       resource = 85.1;
   }
   else if(overs_left == 40 && wickets_lost == 2) {
       resource = 77.8;
   }
   else if(overs_left == 30 && wickets_lost == 2) {
       resource = 67.3;
   }
   else if(overs_left == 25 && wickets_lost == 2) {
       resource = 6.5;
   }
   else if(overs_left == 20 && wickets_lost == 2) {
       resource = 52.4;
   }
   else if(overs_left == 10 && wickets_lost == 2) {
       resource = 30.8;
   }
   else if(overs_left == 5 && wickets_lost == 2) {
       resource = 16.8;
   }
   else if(overs_left == 50 && wickets_lost == 5) {
       resource = 49;
   }
   else if(overs_left == 40 && wickets_lost == 5) {
       resource = 47.6;
   }
   else if(overs_left == 30 && wickets_lost == 5) {
       resource = 44.7;
   }
   else if(overs_left == 25 && wickets_lost == 5) {
       resource = 42.2;
   }
   else if(overs_left == 20 && wickets_lost == 5) {
       resource = 38.6;
   }
   else if(overs_left == 10 && wickets_lost == 5) {
       resource = 26.1;
   }
   else if(overs_left == 5 && wickets_lost == 5) {
       resource = 15.4;
   }
   else if(overs_left == 50 && wickets_lost == 7) {
       resource = 22;
   }
   else if(overs_left == 40 && wickets_lost == 7) {
       resource = 22;
   }
   else if(overs_left == 30 && wickets_lost == 7) {
       resource = 21.8;
   }
   else if(overs_left == 25 && wickets_lost == 7) {
       resource = 21.6;
   }
   else if(overs_left == 20 && wickets_lost == 7) {
       resource = 21.2;
   }
   else if(overs_left == 10 && wickets_lost == 7) {
       resource = 17.9;
   }
   else if(overs_left == 5 && wickets_lost == 7) {
       resource = 12.5;
   }
   else if(overs_left == 50 && wickets_lost == 9) {
       resource = 4.7;
   }
   else if(overs_left == 40 && wickets_lost == 9) {
       resource = 4.7;
   }
   else if(overs_left == 30 && wickets_lost == 9) {
       resource = 4.7;
   }
   else if(overs_left == 25 && wickets_lost == 9) {
       resource = 4.7;
   }
   else if(overs_left == 20 && wickets_lost == 9) {
       resource = 4.7;
   }
   else if(overs_left == 10 && wickets_lost == 9) {
       resource = 4.7;
   }
   else if(overs_left == 5 && wickets_lost == 9) {
       resource = 4.6;
   }

// Calculating the Par Score for team 1.
  team1_par_score = team1_score * ((100 - resource) / 100);
 // Comparing scores to decide the winner of the match.
  if(team1_par_score < team2_score){
        printf("Team 2 is the winner");
  }
  else if(team1_par_score > team2_score){
    printf("Team 1 is the winner");
  }
  else if(team1_par_score == team2_score){
    printf("It is a tie");
  }
}

