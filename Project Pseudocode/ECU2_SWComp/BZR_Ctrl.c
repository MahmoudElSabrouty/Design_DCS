void BZR_Ctrl_Init(const BZR_ConfigType * ConfigPtr);
{
    /*  Initialize PWD configuration, 
        Assume Duty Cycle is fixed */
}
void BZR_UpdateStat(BZR_List_Type BZR_Id, BZR_State_Type BZR_Stat)
{
    /*Control Buzzer State using PWM Driver*/
    switch(BZR_Stat)
    {
        case BZR_ON:
            PWM_Start(BZR_Id);
        break;

        case BZR_OFF:
            PWM_Stop(BZR_Id);
        break;
    }

}

const BZR_ConfigType BZRConfig[BZR_MAX_NO];