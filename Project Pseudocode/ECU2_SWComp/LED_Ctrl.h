void LED_Ctrl_Init(const LED_ConfigType * ConfigPtr);
void LED_StatUpdate(enum LED_List LED_Id, ledState state);

const LED_ConfigType LEDConfig[LED_MAX_NO];