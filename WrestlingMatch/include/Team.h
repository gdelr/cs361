#ifndef TEAM_H
#define TEAM_H

#include <queue>
#include <list>
#include <vector>
#include "Wrestler.h"


class comparator{
public:
  bool operator()(const Wrestler* lhs, const Wrestler* rhs){
    return ((lhs->getAbilityScore())<(rhs->getAbilityScore()));
  }
};

class Team {
  std::list<std::priority_queue<Wrestler* , std::vector<Wrestler*>, comparator >> school;
  std::list<std::priority_queue<Wrestler* , std::vector<Wrestler*>, comparator >>::iterator it;

  int teamSize;
  int teamId;
  int numWins=0;
  int numLoss=0;
  int teamScore=0;
public:
  Team();
  Team(int i);

  void setTeamId(int i){teamId=i;}
  void setNumWins(int w){numWins=w;}
  void setNumLoss(int l){numLoss=l;}
  void setTeamScore(int s){teamScore=s;}

  int getTeamId(){return teamId;}
  int getNumWins(){return numWins;}
  int getNumLoss(){return numLoss;}
  int getTeamScore(){return teamScore;}

  void display();
  void addWrestler(Wrestler* wr);
  Wrestler* getWrestler(int wc);
  void match( Team& rhs);

  };

#endif 
