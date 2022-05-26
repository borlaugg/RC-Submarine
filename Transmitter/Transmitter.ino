#include <ezButton.h> // library implements debounce implicitly

ezButton FwdBtn(13);
ezButton BwdBtn(12);
ezButton LeftBtn(11);
ezButton RightBtn(10);
ezButton HeaveUpBtn(9);
ezButton HeaveDownBtn(8);

const int Fwd = 7;
const int Bwd = 6;
const int Left = 5;
const int Right = 4;
const int HeaveUp = 3;
const int HeaveDown = 2;

void setup() {
  FwdBtn.setDebounceTime(50);
  BwdBtn.setDebounceTime(50);
  LeftBtn.setDebounceTime(50);
  RightBtn.setDebounceTime(50);
  HeaveUpBtn.setDebounceTime(50);
  HeaveDownBtn.setDebounceTime(50);
  pinMode(Fwd, OUTPUT);
  pinMode(Bwd, OUTPUT);
  pinMode(Left, OUTPUT);
  pinMode(Right, OUTPUT);
  pinMode(HeaveUp, OUTPUT);
  pinMode(HeaveDown, OUTPUT);
}

void loop() {
  digitalWrite(Fwd,LOW);
  digitalWrite(Bwd,LOW);
  digitalWrite(Left,LOW);
  digitalWrite(Right,LOW);
  digitalWrite(HeaveUp,LOW);
  digitalWrite(HeaveDown,LOW);
  while (FwdBtn.isPressed())
  {
    digitalWrite(Fwd,HIGH);
  }
  while (BwdBtn.isPressed())
  {
    digitalWrite(Bwd,HIGH);
  }
  while (LeftBtn.isPressed())
  {
    digitalWrite(Left,HIGH);
  }
  while (RightBtn.isPressed())
  {
    digitalWrite(Right,HIGH);
  }
  while (HeaveUpBtn.isPressed())
  {
    digitalWrite(HeaveUp,HIGH);
  }
  
  while (HeaveDownBtn.isPressed())
  {
    digitalWrite(HeaveDown,HIGH);
  }
  
}
