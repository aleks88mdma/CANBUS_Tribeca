#include <SPI.h>
#include "src/mcp2515/mcp2515.h"

MCP2515 mcp2515(10);

struct can_frame canMsg;

void setup()
{
  
	Serial.begin(115200);
  
  mcp2515.reset();
  mcp2515.setBitrate(CAN_125KBPS, MCP_8MHZ);
  mcp2515.setNormalMode();
  
//  Serial.println("------- CAN Read ----------");
//  Serial.println("ID DLC DATA");
  
}


void loop()
{
  if (mcp2515.readMessage(&canMsg) == MCP2515::ERROR_OK) 
  {
    
// send to serial start
      Serial.print("ID:");
      Serial.print((canMsg.can_id & 0x1FFFFFFF), HEX);
      Serial.print(" L:");
      Serial.print(canMsg.can_dlc, HEX);
      Serial.print(" DATA:");
      
      for (int i = 0; i<canMsg.can_dlc; i++) {
        Serial.print(canMsg.data[i], HEX);
        Serial.print(" ");
      
      }
      Serial.println();
// send to serial end
  }
}
