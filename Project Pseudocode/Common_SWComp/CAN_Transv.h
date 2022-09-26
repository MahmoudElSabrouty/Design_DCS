void CANTransv_Init(const CANTransv_ConfigType * ConfigPtr);
StdType CANTransv_Send(uint8* data);
StdType CANTransv_Receive(uint8* data);

extern const CANTransv_ConfigType CANTransvConfig[CANTransv_MAX_NO];
