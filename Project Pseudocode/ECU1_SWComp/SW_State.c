void SW_Stat_Init(const SW_ConfigType * ConfigPtr);
void SW_UpdateStat(enum SW_List SW_Id)
{
    /*SW State periodically Through DIO port*/
}
SW_StatType SW_GetStat(SW_Id);

const SW_ConfigType SWConfig[SW_MAX_NO];
static SW_StatType SWStates[SW_MAX_NO];