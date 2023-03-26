#ifndef INCLUDE_HotDrink_H
#define INCLUDE_HotDrink_H

class HotDrink {
 public:
  void boilDrink();
  virtual void brew() = 0;
  void pour();
  virtual void addCondiments() = 0;
  void makeDrink();
};

class Tea : public HotDrink {
 public:
  virtual void brew();
  virtual void addCondiments();
};

class Coffee : public HotDrink {
 public:
  virtual void brew();
  virtual void addCondiments();
};

class HotChocolate : public HotDrink {
 public:
  virtual void brew();
  virtual void addCondiments();
};

#endif  // /*INCLUDE_HotDrink_H*/