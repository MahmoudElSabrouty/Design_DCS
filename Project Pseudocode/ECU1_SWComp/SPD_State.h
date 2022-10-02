void SPD_Stat_Init(const SPD_ConfigType * ConfigPtr);
void SPD_UpdateStat(enum SPD_List SPD_Id);

void SPD_TickHandler(void);
void SPD_TimerHandler(void);
const SPD_ConfigType SPDConfig[SPD_MAX_NO];