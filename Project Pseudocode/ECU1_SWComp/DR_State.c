void DR_Stat_Init(const DR_ConfigType * ConfigPtr);
void DR_UpdateStat(enum DR_List DR_Id);
DR_StatType DR_GetStat(DR_Id)
{
    /* Read Door State periodically Through DIO port*/
}

const DR_ConfigType DRConfig[DR_MAX_NO];
static DR_ConfigType DRConfig[DR_MAX_NO];