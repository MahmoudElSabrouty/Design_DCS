void PWM_Init(const PWM_ConfigType * ConfigPtr);
void PWM_Start(PWM_ChannelType channelId);
void PWM_Stop(PWM_ChannelType channelId);
 
extern const PWM_ConfigType PWMConfig[PWM_MAX_CH_NO];
