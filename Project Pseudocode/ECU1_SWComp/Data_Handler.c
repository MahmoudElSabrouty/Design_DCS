void Data_Handler_Init(void)
{
	DataHandlerState = DH_INIT;
}
void Data_Update(void);
void Data_Send(void)
{
	
	/*DCS_SW_003	Door state message will be sent every 10ms to ECU 2*/
	
	
	/*DCS_SW_004	Light switch state message will be sent every 20ms to ECU 2*/
}
 
static void StatesHandler(void); 
static DataHandlerState = DH_INIT;
 
void main (void)
{
	 
	Mcal_Init();
	StartOs();
}



static void StatesHandler()
{
	
	
	switch(DH_INIT)
	{
		case DH_INIT:
		
		break;

		case DH_DataUpdate:
		
		break;

		case DH_DataSend:
		
		break;
		
	}
} 

void Mcal_Init(void)
{
	 DIO_Init(&DIOConfig);
	PORT_Init(&PORTConfig);
}