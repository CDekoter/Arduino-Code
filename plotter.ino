// Initializing the pins for OUTPUTS, defining variables

int dix = 3;
int stex = 4;
int diy = 5;
int stey = 6;
int dir = 7;
int ster = 8; 
int sped = 1; 
int x = 0 ; 
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
  xrun(8000, 1);
  delay(500);
  xrun(-8000, 1);
  delay(500);
}

  void xrun(int stexn, int ms) {
    if (ms == 1){
      digitalWrite(13, HIGH);
    }
    if ( 0 < stexn){
    digitalWrite(dix, HIGH); 
    } 
    if (0 > stexn){
       digitalWrite(dix, LOW);
      }
    while (x < abs(stexn)){
      digitalWrite(stex, HIGH); 
      delay(sped);
      digitalWrite(stex, LOW);
      delay(sped);
      x++;
    }
    x = 0;
    
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
    xrun(x, 1);
    yrun(y);
    xrun(-x, 1);
    yrun(-y);
}

  void line(int x, int y, int sped) { 
    int rat = x / (y + 1);

    for (int lin; lin < rat; lin++){
      xrun(rat, 1);
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
