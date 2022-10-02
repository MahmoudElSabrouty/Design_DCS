static void StatesHandler(void); 
static void Data_Update(void);

void Data_Handler_Init(void)
{
	DataHandlerState = DH_INIT;
}
static void Data_Update(void);
static void Data_Send(void)
{
	/*DCS_SW_003	Door state message will be sent every 10ms to ECU 2*/
	/*DCS_SW_004	Light switch state message will be sent every 20ms to ECU 2*/
}
 
enum
{	DH_INIT,
	DH_SW,
	DH_DR,
	DH_SPD,
}DataHandlerStatesType;
static DataHandlerStatesType DataHandlerState = DH_INIT;
 
void main (void)
{ 
	Mcal_Init();
	StartOs();
}



void StatesHandler()
{
	
	
	switch(DataHandlerState)
	{
		case DH_INIT:
			DataHandlerState  = DH_IDLE;

		break;

		case DH_SW:
			SW_UpdateStat(SW_Id);
			data[0] = SW_GetStat(SW_Id);
			BCM_Send(&SW_MsgId, &SW_HandleId, &data);

			DataHandlerState  = DH_IDLE;
		break;

		case DH_DR:
			DR_UpdateStat(DR_Id);
			data[0] = DR_GetStat(DR_Id);
			BCM_Send(&DR_MsgId, &DR_HandleId, &data);		
			DataHandlerState  = DH_IDLE;
		break;

		case DH_SPD:
			SPD_UpdateStat(SPD_Id);		
			data[0] = SPD_GetStat(SPD_Id);
			BCM_Send(&SPD_MsgId, &SPD_HandleId, &data);
			DataHandlerState  = DH_IDLE;
		break;

		case DH_IDLE:
		break;
	}
} 

void Mcal_Init(void)
{
	DIO_Init(&DIOConfig);
	PORT_Init(&PORTConfig);
}


void DataHandler_DR(void)
{	
	DataHandlerState  = DH_DR;
	StatesHandler();
}
void DataHandler_SPD(void)
{
	DataHandlerState  = DH_DR;
	StatesHandler();
}
void DataHandler_SW(void)
{
	DataHandlerState  = DH_DR;
	StatesHandler();
}