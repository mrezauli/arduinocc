int a, b;
int c, d;
char def;
int upTo;

int sum(int firstNumber, int secondNumber){
  int sum;
  sum = firstNumber + secondNumber;

  return sum;
 }

int sub(int firstNumber, int secondNumber){
  int sub;
  sub = firstNumber - secondNumber;

  return sub;
 }

int mul(int firstNumber, int secondNumber){
  int mul;
  mul = firstNumber * secondNumber;

  return mul;
 }

int division(int firstNumber, int secondNumber){
  int division;
  division = firstNumber / secondNumber;

  return division;
 }

int remainder(int firstNumber, int secondNumber){
  int remainder;
  remainder = firstNumber % secondNumber;

  return remainder;
 }

bool comparison(int firstNumber, int secondNumber){
  int equal, lessThan, greaterThan;

  equal = firstNumber == secondNumber;
  lessThan = firstNumber < secondNumber;
  greaterThan = firstNumber > secondNumber;

  return equal, lessThan, greaterThan;
}

bool andOrNot(int firstNumber, int secondNumber, int thirdNumber){
  int strng;

  if((firstNumber > secondNumber) && (firstNumber > thirdNumber)){
    strng = "firstNumber is geatest";
    }
  if((firstNumber > secondNumber) && (firstNumber > thirdNumber)){
    strng = "firstNumber is geatest";
    }

  return strng;
}

char switchCase(int firstChar){
  int strng;
  switch (firstChar) {
    case 'A':
      strng =  "do something when var equals A";
      break;
    case 'B':
      strng =  "do something when var equals B";
      break;
     case 'C':
      strng =  "do something when var equals C";
      break;
    default:
      strng = "if nothing else matches, do the default default is optional";
      break;
  }
}

int doWhileLoop(int upTo){
  int a = 0;
  
  do {
    a += 5;
    upTo++;
   }
  while (upTo < 15);

    return a;
  }

int pyramid(int upToLineNumber){
  int x, y;
  for(x = 1; x < upTo; x++){
    for(y = 1; y < x; y++){
      Serial.print("*");
      }
      Serial.print("\n");
    }
}
 
void setup() {
  // put your setup code here, to run once:
  a = 10;
  b = 20;
  c = 50;
  d = 100;
  def = "A";
  upTo = 10;
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.print(sum(a, b));
  //Serial.print(sub(a, b));
  //Serial.print(mul(a, b));
  //Serial.print(division(a, b));
  //Serial.print(remainder(a, b));

  //Serial.print(comparison(c, d));
  //Serial.print(switchCase(def));
  //Serial.print(doWhileLoop(upTo));
  Serial.print(pyramid(upTo));
  delay(10000);
  

}
