



const TMR_ConfigType TMRConfig[TMR_MAX_CH_NO]=
{
    TMR_ID,
    MAX_COUNT_MS,
    INCR,
}
const TMRCallbackNotificationPtr TMRCallbackNotifications[12]
{   
    &SPD_TimerHandler,
    NULL_PTR,
    NULL_PTR,
    NULL_PTR,
    NULL_PTR,
    NULL_PTR,
}