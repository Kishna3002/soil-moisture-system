/*
   -- New project --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.8 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.11.1 or later version;
     - for iOS 1.9.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP8266WIFI_LIB_POINT
#include <ESP8266WiFi.h>

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_WIFI_SSID "vivo_1818"
#define REMOTEXY_WIFI_PASSWORD "boss28061998"
#define REMOTEXY_SERVER_PORT 6377


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 61 bytes
  { 255,3,0,0,0,54,0,16,31,1,2,0,22,17,22,11,2,26,31,31,
  79,70,70,0,79,78,0,2,0,21,35,22,11,2,26,31,31,79,70,70,
  0,79,78,0,2,0,22,54,22,11,2,26,31,31,79,70,70,0,79,78,
  0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t switch_1; // =1 if switch ON and =0 if OFF 
  uint8_t switch_2; // =1 if switch ON and =0 if OFF 
  uint8_t switch_3; // =1 if switch ON and =0 if OFF 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

#define PIN_SWITCH_1 D0
#define PIN_SWITCH_2 D1
#define PIN_SWITCH_3 D2


void setup() 
{
  RemoteXY_Init (); 
  
  pinMode (PIN_SWITCH_1, OUTPUT);
  pinMode (PIN_SWITCH_2, OUTPUT);
  pinMode (PIN_SWITCH_3, OUTPUT);
  
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  
   if(RemoteXY.switch_1 == 1)
  {
    digitalWrite(16,1);
  }
  else
  {
    digitalWrite(16,0);
  }
  if(RemoteXY.switch_2 == 1)
  {
    digitalWrite(5,1);
  }
  else
  {
    digitalWrite(5,0);
  }
  if(RemoteXY.switch_3 == 1)
  {
    digitalWrite(4,1);
  }
  else
  {
    digitalWrite(4,0);
  }
}

  
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay() 



