#ifndef __CONSTANTS_INC__
#define __CONSTANTS_INC__

/* 
 *  This file containts all the packet types, commands
 *  and status constants
 *  
 */

// Packet types
typedef enum
{
  PACKET_TYPE_COMMAND = 0,
  PACKET_TYPE_RESPONSE = 1,
  PACKET_TYPE_ERROR = 2,
  PACKET_TYPE_MESSAGE = 3,
  PACKET_TYPE_HELLO = 4
} TPacketType;

// Response types. This goes into the command field
typedef enum
{
  RESP_OK = 0,
  RESP_STATUS=1,
  RESP_BAD_PACKET = 2,
  RESP_BAD_CHECKSUM = 3,
  RESP_BAD_COMMAND = 4,
  RESP_BAD_RESPONSE = 5 
} TResponseType;


// Commands
// For direction commands, param[0] = distance in cm to move
// param[1] = speed
typedef enum
{
  COMMAND_FORWARD_S = 0,
  COMMAND_REVERSE_S = 1,
  COMMAND_TURN_LEFT_S = 2,
  COMMAND_TURN_RIGHT_S = 3,
  COMMAND_FORWARD_L = 4,
  COMMAND_REVERSE_L = 5,
  COMMAND_TURN_LEFT_L = 6,
  COMMAND_TURN_RIGHT_L = 7,
  COMMAND_STOP = 8,
  COMMAND_GET_STATS = 9,
  COMMAND_CLEAR_STATS = 10
} TCommandType;
#endif

