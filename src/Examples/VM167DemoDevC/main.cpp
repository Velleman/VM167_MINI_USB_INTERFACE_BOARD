#include <cstdlib>
#include <windows.h>
#include <iostream>

using namespace std;

typedef int (__stdcall *VOID2INT)(void);
typedef int (__stdcall *INT2INT)(int);
typedef unsigned int (__stdcall *INT2UINT)(int);
typedef int (__stdcall *INTINT2INT)(int, int);
typedef bool (__stdcall *INT2BOOL)(int);
typedef bool (__stdcall *INTINT2BOOL)(int, int);
typedef void (__stdcall *VOID2VOID)(void);
typedef void (__stdcall *INT2VOID)(int);
typedef void (__stdcall *INTINTP2VOID)(int, int *);
typedef void (__stdcall *INTINT2VOID)(int, int);
typedef void (__stdcall *INTINTINT2VOID)(int, int, int);
typedef void (__stdcall *INTINTINTINT2VOID)(int, int, int, int);

VOID2INT OpenDevices;
VOID2VOID CloseDevices;
INTINT2INT ReadAnalogChannel;
INTINTP2VOID ReadAllAnalog;
INTINTINTINT2VOID SetPWM;
INTINTINT2VOID OutputAllPWM;
INTINT2VOID OutputAllDigital;
INTINT2VOID ClearDigitalChannel;
INT2VOID ClearAllDigital;
INTINT2VOID SetDigitalChannel;
INT2VOID SetAllDigital;
INTINT2BOOL ReadDigitalChannel;
INT2INT ReadAllDigital;
INTINTINT2VOID InOutMode;
INT2UINT ReadCounter;
INT2VOID ResetCounter;
VOID2INT Connected;
VOID2INT VersionDLL;
INT2INT VersionFirmware;
INTINTP2VOID ReadBackPWMOut;
INT2INT ReadBackInOutMode;

HINSTANCE hDLL;
int CardAddress;
int foundDLL = 0;

int init();

int main(void)
{
    int dataIn[8];
    int h;
    h = init();
	if (!h)
	{
		cout << "VM167.DLL found" << endl;
		foundDLL = 1;
	}
	else
	{
		cout << "VM167.DLL not found" << endl;	
        cout << "Press Enter to exit." << endl;
        cin.get();
	}
	if (foundDLL)
	{
		h = OpenDevices();
        switch (h)
        {
                case 0:
                        cout << "Card open error." << endl;
                        break;
                case 1:
                        cout << "Card 0 connected." << endl;
                        CardAddress = 0;
                        break;
                case 2:
                        cout << "Card 1 connected." << endl;
                        CardAddress = 1;
                        break;
                case 3:
                        cout << "Cards 0 and 1 connected." << endl;
                        CardAddress = 0;
                        break;
                case -1:
                        cout << "Card not found." << endl;
                        break;
        }
	}
	if (foundDLL)
	{     
        cout << "Press Enter to \"SetAllDigital\"" << endl;
        cin.get();
        InOutMode(CardAddress, 0, 0);        
        SetAllDigital(CardAddress);
        
        cout << "Press Enter to \"OutputAllDigital 0x55\"" << endl;
        cin.get();
        OutputAllDigital(CardAddress, 0x55);
        
        cout << "Press Enter to \"ClearAllDigital\"" << endl;
        cin.get();        
        ClearAllDigital(CardAddress);
        
        cout << "Press Enter to \"ReadAllDigital\"" << endl;
        cin.get();
        InOutMode(CardAddress, 1, 1); 
        int i = ReadAllDigital(CardAddress);
        cout << i << endl;        

        cout << "Press Enter to \"OutputAllPWM 255, 255\"" << endl;
        cin.get();
        OutputAllPWM(CardAddress, 255, 255);   
             
        cout << "Press Enter to \"ReadAllAnalog dataIn\"" << endl;
        cin.get();
        ReadAllAnalog(CardAddress, dataIn);        
        for (int i = 0; i < 5; i++)
        {
            cout << "dataIn[" << i << "] = " << dataIn[i] << endl;
        }
        
        cout << "Press Enter to \"CloseDevices\" and to \"FreeLibrary\"" << endl;
        cin.get();          	
        CloseDevices();
        FreeLibrary(hDLL);
    }
    return EXIT_SUCCESS;    
}

int init()
{
  hDLL = LoadLibrary("VM167.dll");
   if (hDLL == NULL)
   {
        return -1;
   }
   else
   {
        OpenDevices = (VOID2INT) GetProcAddress(hDLL, "OpenDevices");
        CloseDevices = (VOID2VOID) GetProcAddress(hDLL, "CloseDevices");
        ReadAnalogChannel = (INTINT2INT) GetProcAddress(hDLL, "ReadAnalogChannel");
        ReadAllAnalog = (INTINTP2VOID) GetProcAddress(hDLL, "ReadAllAnalog");
        SetPWM = (INTINTINTINT2VOID) GetProcAddress(hDLL, "SetPWM");
        OutputAllPWM = (INTINTINT2VOID) GetProcAddress(hDLL, "OutputAllPWM");
        OutputAllDigital = (INTINT2VOID) GetProcAddress(hDLL, "OutputAllDigital");
        ClearDigitalChannel = (INTINT2VOID) GetProcAddress(hDLL, "ClearDigitalChannel");
        ClearAllDigital = (INT2VOID) GetProcAddress(hDLL, "ClearAllDigital");
        SetDigitalChannel = (INTINT2VOID) GetProcAddress(hDLL, "SetDigitalChannel");
        SetAllDigital = (INT2VOID) GetProcAddress(hDLL, "SetAllDigital");
        ReadDigitalChannel = (INTINT2BOOL) GetProcAddress(hDLL, "ReadDigitalChannel");
        ReadAllDigital = (INT2INT) GetProcAddress(hDLL, "ReadAllDigital");
        InOutMode = (INTINTINT2VOID) GetProcAddress(hDLL, "InOutMode");
        ReadCounter = (INT2UINT) GetProcAddress(hDLL, "ReadCounter");
        ResetCounter = (INT2VOID) GetProcAddress(hDLL, "ResetCounter");
        Connected = (VOID2INT) GetProcAddress(hDLL, "Connected");
        VersionDLL = (VOID2INT) GetProcAddress(hDLL, "VersionDLL");
        VersionFirmware = (INT2INT) GetProcAddress(hDLL, "VersionFirmware");
        ReadBackPWMOut = (INTINTP2VOID) GetProcAddress(hDLL, "ReadBackPWMOut");
        ReadBackInOutMode = (INT2INT) GetProcAddress(hDLL, "ReadBackInOutMode");

     if (!OpenDevices || !CloseDevices || !ReadAnalogChannel || !ReadAllAnalog
          || !SetPWM || !OutputAllPWM || !OutputAllDigital || !ClearDigitalChannel
          || !ClearAllDigital || !SetDigitalChannel || !SetAllDigital || !ReadDigitalChannel
          || !ReadAllDigital || !InOutMode || !ReadCounter || !ResetCounter || !Connected
          || !VersionDLL || !VersionFirmware || !ReadBackPWMOut || !ReadBackInOutMode)
        {
                FreeLibrary(hDLL);
                return -1;
        }
        return 0;   
   }
}
