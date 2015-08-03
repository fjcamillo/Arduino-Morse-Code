int key = 12;
String x;
void setup(){
  Serial.begin(9600);
  pinMode(key, OUTPUT);
}
void loop(){
  Serial.println("Start");
  delay(1000);
  x = Serial.readString();
  
  //Checking for Letter A
  //Letter A is equivalent to --> short long
  if(x == "a"){
    Serial.println("Print Letter A");
    digitalWrite(key, HIGH);
    delay(500);
    digitalWrite(key, LOW);
    delay(500);
    digitalWrite(key, HIGH);
    delay(1500);
    digitalWrite(key, LOW);
    delay(500);
    Serial.println("End");
  }
  
  //Checking for Letter B
  //Letter B is equivalent  to --> long short short short
  else if(x == "b"){
    digitalWrite(key, HIGH);
    delay(1500);
    digitalWrite(key, LOW);
    delay(500);
    digitalWrite(key, HIGH);
    delay(500);
    digitalWrite(key, LOW);
    delay(500);
    digitalWrite(key, HIGH);
    delay(500);
    digitalWrite(key, LOW);
    delay(500);
    digitalWrite(key, HIGH);
    delay(500);
    digitalWrite(key, LOW);
    delay(500);
    Serial.println("End");
  }
  
  //Checking for Letter C
  //Letter C is equivalent --> long short long short
  else if(x == "c"){
    digitalWrite(key, HIGH);
    delay(1500);
    digitalWrite(key, LOW);
    delay(500);
    digitalWrite(key, HIGH);
    delay(500);
    digitalWrite(key, LOW);
    delay(500);
    digitalWrite(key, HIGH);
    delay(1500);
    digitalWrite(key, LOW);
    delay(500);
    digitalWrite(key, HIGH);
    delay(1500);
    digitalWrite(key, LOW);
    delay(500);
    Serial.println("END");
  }
  
  //Checking for Letter D
  //Letter D is equivalent --> long short short
  else if(x == "d"){
    digitalWrite(key, HIGH);
    delay(1500);
    digitalWrite(key, LOW);
    delay(500);
    digitalWrite(key, HIGH);
    delay(500);
    digitalWrite(key, LOW);
    delay(500);
    digitalWrite(key, HIGH);
    delay(500);
    digitalWrite(key, LOW);
    delay(500);
  }
  
  //Checking for letter E
  //Letter E is equivalent to --> short  
  else if(x == "e"){
    digitalWrite(key, HIGH);
    delay(500);
    digitalWrite(key, LOW);
    delay(500);
  }
  
  //Checking for Letter F
  //Letter F is equivalent to --> short short long short
  else if(x == "f"){
    digitalWrite(key, HIGH);
    delay(500);
    digitalWrite(key, LOW);
    delay(500);
    digitalWrite(key, HIGH);
    delay(500);
    digitalWrite(key, LOW);
    delay(500);
    digitalWrite(key, HIGH);
    delay(1500);
    digitalWrite(key, LOW);
    delay(500);
    digitalWrite(key, HIGH);
    delay(500);
    digitalWrite(key, LOW);
    delay(500);
  }
  
  //Checking of Letter G
  //Letter G is equivalent to --> long long short
  else if(x == "g"){
    digitalWrite(key, HIGH);
    delay(1500);
    digitalWrite(key, LOW);
    delay(500);
    digitalWrite(key, HIGH);
    delay(1500);
    digitalWrite(key, LOW);
    delay(500);
    digitalWrite(key, HIGH);
    delay(500);
  }
  
  //Checking for Letter H
  //Letter H is equivalent to --> short short short short
  else if(x == "h"){
    shortBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
  }
  
  //Checking for Letter I
  //Letter I is equivalent to --> short short
  else if(x == "i"){
    shortBeep();
    space();
    shortBeep();
    space();
  }
  
  //Checking for Letter J
  //Letter J is equivalent to --> short long long
  else if(x == "j"){
    shortBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
  }
  
  //Checking for Letter K
  //Letter K is equivalent to --> long short long
  else if(x == "k"){
    longBeep();
    space();
    shortBeep();
    space();
    longBeep();
    space();
  }
  
  //Checking for Letter L
  //Letter L is equivalent to --> short long short long
  else if(x == "l"){
    shortBeep();
    space();
    longBeep();
    space();
    shortBeep();
    space();
    longBeep();
    space();
  }
  
  //Checking for Letter M
  //Letter M is equivalent to --> long long
  else if(x == "m"){
    longBeep();
    space();
    longBeep();
    space();
  }
  
  //Checking for Letter N
  //Letter N is equivalent to --> long short
  else if(x == "n"){
    longBeep();
    space();
    shortBeep();
    space();
  }
  
  //Checking for Letter O
  //Letter O is equivalent to --> long long long
  else if(x == "o"){
    longBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
  }
  
  //Checking for Letter P
  //Letter P is equivalent to --> short long long short
  else if(x == "p"){
    shortBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
    shortBeep();
    space();
  }
  
  //Checking for Letter Q
  //Letter Q is equivalent to --> long long short long
  else if(x == "q"){
    longBeep();
    space();
    longBeep();
    space();
    shortBeep();
    space();
    longBeep();
    space();
  }
  
  //Checking for Letter R
  //Letter R is equivalent to --> short long short
  else if(x == "r"){
    shortBeep();
    space();
    longBeep();
    space();
    shortBeep();
  }
  
  //Checking for Letter S
  //Letter S is equivalent to --> short short short
  else if(x == "s"){
    shortBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
  }
  
  //Checking for Letter T
  //Letter T is equivalent to --> long
  else if(x == "t"){
    longBeep();
    space();
  }
  
  //Checking for Letter U
  //Letter U is equivalent to --> short short long
  else if(x == "u"){
    shortBeep();
    space();
    shortBeep();
    space();
    longBeep();
    space();
  }
  
  //Checking for Letter V
  //Letter V is equivalent to --> short short short long
  else if(x == "v"){
    shortBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
    longBeep();
    space();
  }
  
  //Checking for Letter W
  //Letter W is equivalent to --> short long long
  else if(x == "w"){
    shortBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
  }
  
  //Checking for Letter X
  //Letter X is equivalent to --> long short long short
  else if(x == "x"){
    longBeep();
    space();
    shortBeep();
    space();
    longBeep();
    space();
    shortBeep();
    space();
  }
  
  //Checking for Letter Y
  //Letter Y is equivalent to --> long short long long
  else if(x == "y"){
    longBeep();
    space();
    shortBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
  }
  
  //Checking for Letter Z
  //Letter Z is equivalent to --> long long short short
  else if(x == "z"){
    longBeep();
    space();
    longBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
  }
  
  //Checking for Number 1
  //Number 1 is equivalent to --> short long long long long
  else if(x == "1"){
    shortBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
  }
  
  //Checking for Number 2
  //Number 2 is equivalent to --> shrot short long long long
  else if(x == "2"){
    shortBeep();
    space();
    shortBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
  }
  
  //Checking for Number 3
  //Number 3 is equivalent to --> short short short long long
  else if(x == "3"){
    shortBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
  }
  
  //Checking for Number 4
  //Number 4 is equivalent to --> short short short short long
  else if(x == "4"){
    shortBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
    longBeep();
    space();
  }
  
  //Checking for Number 5
  //Number 5 is equivalent to --> short short short short short
  else if(x == "5"){
    shortBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
  }
  
  //Checking for Number 6
  //Number 6 is equivalent to --> long short short short short
  else if(x == "6"){
    longBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
  }
  
  //Checking for Number 7
  //Number 7 is equivalent to --> long long short short short
  else if(x == "7"){
    longBeep();
    space();
    longBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
  }
  
  //Checking for Number 8
  //Number 8 is equivalent to --> long long long short short
  else if(x == "8"){
    longBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
    shortBeep();
    space();
    shortBeep();
    space();
  }
  
  //Checking for Number 9
  //Number 9 is equivalent to --> long long long long short
  else if(x == "9"){
    longBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
    shortBeep();
    space();
  }
  
  //Checking for Number 0
  //Number 0 is equivalent to --> long long long long long
  else if(x == "0"){
    longBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
    longBeep();
    space();
  }
  else if(x == " "){
    digitalWrite(key, LOW);
  }
  
}

void shortBeep(){
  digitalWrite(key, HIGH);
  delay(500);
}
void longBeep(){
  digitalWrite(key, HIGH);
  delay(1500);
}
void space(){
  digitalWrite(key, LOW);
  delay(500);
}
