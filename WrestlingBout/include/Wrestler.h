#ifndef WRESTLER_H
#define WRESTLER_H

class Wrestler {
  
  int weight;
  int id;
  double abilityScore;
public:
  Wrestler();

  int getWeight();
  int getId();
  double getAbilityScore();

  void setWeight(int w);
  void setId(int i);
  void setAbilityScore(double a);


  double bout(const Wrestler& rhs);
  };

#endif 
