void TMR_Init(const TMR_ConfigType * ConfigPtr);
void TMR_StartTimer(TMR_ChannelType channelId, TMR_ValueType TimerVale);
void TMR_StopTimer(TMR_ChannelType channelId);
 
extern const TMR_ConfigType TMRConfig[TMR_MAX_CH_NO];
extern const TMRCallbackNotificationPtr TMRCallbackNotifications[12];