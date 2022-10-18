
enum
{	SH_INIT,
	SH_DRN_SPMOV,   /*Buzzer ON, Lights OFF*/
	SH_DRN_SPSTP,   /*Buzzer OFF, Lights ON*/
	SH_DRC_LN,   /*Lights are OFF after 3 seconds*/
    SH_SPMOV_SWPRES,   /*Buzzer ON, Lights ON*/
    SH_SPSTP_SWPRES,    /* Buzzer ON, Lights ON*/
}DataHandlerStatesType;
static SW_StatesType SWStateHandler = SH_INIT;







void SW_StateHandler_Init(void)
{
    SWStateHandler = SH_INIT;
}

void SW_StateHandler_StM(void)
{
    if(SW_StateHandler_Transition() == TRUE)
    {
        SW_StateHandler_StateEntry();
    }
    SW_StateHandler_State();

}



static void SW_StateHandler_State(void)
{
    /*Function to implement actions are peiodically executed for each state*/
    switch(SWStateHandler)
    {
        case SH_INIT:
        break;


        case SH_DRN_SPMOV:
            /*Do nothing*/
        break;

        case SH_DRN_SPSTP:
            /*Do nothing*/                    
        break;

        case SH_DRC_LN:
            /* Wait 3 seconds -> Counter Based wait.
               Lights are OFF if counter expired*/
              if (TRUE==WaitTimeout())
              {
                LED_StatUpdate(ledid,LED_OFF);
              }

        break;

        case SH_SPMOV_SWPRES:
            /*Do nothing*/
       
        break;

        case SH_SPSTP_SWPRES:
            /*Do nothing*/
        break;
    }

}









 static boolean SW_StateHandler_Transition(void)
 {
    /*  Function to implement transitions conditions evaluation for State periodically
        return TRUE if any transition from current statue is Valid  */

    /*Reading Different State to Decide the correct condition
     */


    boolean stateUpdate = FALSE;
    static SW_StatType  SWState;
    static DR_StatType  DRState;
    static SPD_StatType SPDState;

    BCMH_Get_SW_State (SWState);		
    BCMH_Get_DR_State (DRState);	
    BCMH_Get_SPD_State(SPDState);


   switch(SWStateHandler)
  {
      case SH_INIT:

      break;
      
      case SH_DRN_SPMOV:
          
          /*Validate State Exit Conditions */
          stateUpdate = TRUE;
      break;
      case SH_DRN_SPSTP:
            /*Validate State Exit Conditions */
         stateUpdate = TRUE;               
      break;
      case SH_DRC_LN:
      
        /*Validate State Exit Conditions */
         stateUpdate = TRUE;
    
      break;
      case SH_SPMOV_SWPRES:
        /*Validate State Exit Conditions */
         stateUpdate = TRUE;
     
      break;

      case SH_SPSTP_SWPRES:
      break;
  }
 
 
 }


static void SW_StateHandler_State(void)
{

}


 
 static void  SW_StateHandler_StateEntry(void)
{
    /*Function to implement entry condition for each State*/    
    
    switch(SWStateHandler)
    {
        case SH_INIT:
        break;


        case SH_DRN_SPMOV:
            /*  DCS_SW_007: Turn Buzzer ON,
                Turn  Lights OFF*/
                BZR_UpdateStat(id,      BZR_ON);
                LED_StatUpdate(ledid,   LED_OFF);
        break;

        case SH_DRN_SPSTP:
            /*  DCS_SW_008: Turn Buzzer OFF,
               Turn Lights ON*/
               BZR_UpdateStat(id,   BZR_OFF);
               LED_StatUpdate(ledid,LED_ON);
        break;

        case SH_DRC_LN:
            /*  DCS_SW_009: At Start Entry Setup delay value 3000 ms*/
            SetWaitTime(3000);      
        break;

        case SH_SPMOV_SWPRES:
            /*DCS_SW_010: Turn Buzzer OFF, 
              Turn Lights ON*/
              BZR_UpdateStat(id,    BZR_OFF);
              LED_StatUpdate(ledid, LED_ON);
        break;

        case SH_SPSTP_SWPRES:
            /*DCS_SW_011: Turn Buzzer ON, 
            Turn Lights ON*/
            BZR_UpdateStat(id,BZR_ON);
            LED_StatUpdate(ledid,LED_ON);
        break;
    }

}




 