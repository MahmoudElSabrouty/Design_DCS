void DIO_Init(const DIO_ConfigType * ConfigPtr);
			
StdType Dio_ReadChannel(channelId);
StdType Dio_WriteChannel(channelId, State);


const DR_ConfigType DIOConfig[DIO_MAX_CH_NO];