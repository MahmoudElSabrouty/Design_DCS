void 	BCM_Init(CANTransvConfig* ConfigPtr);
StdType BCM_Send(msgType* msdId, dataHandler*  HandleId, uint8* data);
StdType BCM_Receive(msgType* msdId, dataHandler* HandleId, uint8* data);

extern const BCM_ConfigType CANTransvConfig[CANTransv_MAX_NO];
