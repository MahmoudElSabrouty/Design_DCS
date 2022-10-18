

void Task_Init()
{
    DR_Stat_Init(DRConfig);
    SPD_Stat_Init(SPDConfig);
    SW_Stat_Init(SWConfig);
    Data_Handler_Init();

}

void Task_5ms()
{
    /* DCS_SW_005:	Speed state message will be sent every 5ms to ECU 2*/
    DataHandler_SPD()
}

void Task_20ms()
{
    /* DCS_SW_004:	Light switch state message will be sent every 20ms to ECU 2*/
    DataHandler_SW();

}
 

void Task_10ms()
{
    /*DCS_SW_003: Sent Door State 10ms*/
    DataHandler_DR();
}


