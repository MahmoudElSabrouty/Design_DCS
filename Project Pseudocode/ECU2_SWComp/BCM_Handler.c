void 	BCM_Handler_Init(void);

static SW_StatType  BCM_SW_State = 0;
static DR_StatType  BCM_DR_State = 0;
static SPD_StatType BCM_SPD_State = 0;




Std_Type BCMH_Update_SW_State (void)	
{
    BCM_Receive(&SW_MsgId, &SW_HandleId, &BCM_SW_State);
    
}	
Std_Type BCMH_Update_DR_State (void)	
{
    BCM_Receive(&DR_MsgId, &DR_HandleId, &BCM_DR_State);		
}
Std_Type BCMH_Update_SPD_State(void){
    BCM_Receive(&SPD_MsgId, &SPD_HandleId, &BCM_SPD_State);
}



