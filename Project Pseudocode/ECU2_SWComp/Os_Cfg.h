


void Task_Init()
{
    LED_Ctrl_Init(LEDConfig);
    BZR_Ctrl_Init(BZRConfig);

}
 

void Task_5ms(void){
    /* DCS_SW_005:	Speed state message will be sent every 5ms to ECU 2*/
    BCMH_Update_SPD_State();
} 

void Task_10ms(void){
    /*DCS_SW_003: Sent Door State 10ms*/
    BCMH_Update_DR_State();
    SW_StateHandler_StM();
} 


void Task_20ms(void)
{
    /* DCS_SW_004:	Light switch state message will be sent every 20ms to ECU 2*/
    BCMH_Update_SW_State();
    
}