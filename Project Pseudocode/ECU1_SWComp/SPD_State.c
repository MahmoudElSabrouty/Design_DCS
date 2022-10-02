void SPD_Stat_Init(const SPD_ConfigType * ConfigPtr);
void SPD_UpdateStat(enum SPD_List SPD_Id)
{
    /* Read SPD State on call */
}
SPD_StatType SPD_GetStat(SPD_Id);

void SPD_TickHandler(void)
{

    SPDTickCout++;
}
void SPD_TimerHandler(void)
{
    /*  - Calculate SPD based on SPDTickCout
        - Reset SPDTickCout
        - update SPD Stat*/
}

const SPD_ConfigType SPDConfig[SPD_MAX_NO];
static SPD_StatType SPDtates[SPD_MAX_NO];