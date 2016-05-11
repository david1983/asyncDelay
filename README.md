# asyncDelay
An Arduino library to handle delay using millis and callback.

**Example sketch**


    #include "asyncDelay.h"

    int n=0;
    void test(){
	      Serial.print("Number: " + String(n++));
    }

    void setup() {
 	     Serial.begin(115200) ;
    }

    asyncDelay async1000 = asyncDelay(1000);
    void loop() {
	     async1000.runJob(test);
    }


