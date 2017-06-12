// Initializing the pins for OUTPUTS, defining variables

int dix = 3;
int stex = 4;
int diy = 5;
int stey = 6;
int dir = 7;
int ster = 8; 
int sped ; 
int x ; 
int y ;
int r ;
int sten ;
int gcsx;
int gcsy ;
// vector fail lol
// Initiating variables, output pins.

void setup() {
  // put your setup code here, to run once:
  pinMode(dix, OUTPUT);
  pinMode(stex, OUTPUT);
  pinMode(diy, OUTPUT);
  pinMode(stey, OUTPUT);
  pinMode(dir, OUTPUT);
  pinMode(ster, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
}

  void xrun(int stexn) {
    if ( 0 < x){
    digitalWrite(dix, HIGH); 
    } else {
       digitalWrite(dix, LOW);
      }
    for (x++; 0 < x < stexn;){
      digitalWrite(stex, HIGH); 
      delay(sped);
      digitalWrite(stex, LOW);
      delay(sped);
    }
    
}

 void yrun(int steyn) {
    if ( 0 < x){
    digitalWrite(diy, HIGH); 
    } else {
       digitalWrite(diy, LOW);
      }
    for (x++; 0 < x < steyn;){
      digitalWrite(stey, HIGH); 
      delay(sped);
      digitalWrite(stey, LOW);
      delay(sped);
    }
    
}

void rrun(int stern) {
    if ( 0 < x){
    digitalWrite(dir, HIGH); 
    } else {
       digitalWrite(dir, LOW);
      }
    for (x++; 0 < x < stern;){
      digitalWrite(ster, HIGH); 
      delay(sped);
      digitalWrite(ster, LOW);
      delay(sped);
    }
    
}

  void rectangle(int x, int y, int sped) {
    xrun(x);
    yrun(y);
    xrun(-x);
    yrun(-y);
}

  void line(int x, int y, int sped) { 
    int rat = x / (y + 1);

    for (int lin; lin < rat; lin++){
      xrun(rat);
      yrun(1);
    }
    gcsx += x;
    gcsy += y;
  }
// meh, idk how it works when the rat is not an integer
// should have a microstepping mode

 void circle(int r, int sped) { 
  int ang = gcsx; 
  int rat = gcsy / sqrt (1 - sq(gcsx));
 }

