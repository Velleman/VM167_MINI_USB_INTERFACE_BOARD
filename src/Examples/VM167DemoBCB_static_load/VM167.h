#ifdef __cplusplus
extern "C" {
#endif

#define FUNCTION __declspec(dllimport)

FUNCTION int __stdcall OpenDevices();
FUNCTION void __stdcall CloseDevices();
FUNCTION int __stdcall ReadAnalogChannel(int CardAddress, int Channel);
FUNCTION void __stdcall ReadAllAnalog(int CardAddress, int *Buffer);
FUNCTION void __stdcall SetPWM(int CardAddress, int Channel, int Data, int Freq);
FUNCTION void __stdcall OutputAllPWM(int CardAddress, int Data1, int Data2);
FUNCTION void __stdcall OutputAllDigital(int CardAddress, int Data);
FUNCTION void __stdcall ClearDigitalChannel(int CardAddress, int Channel);
FUNCTION void __stdcall ClearAllDigital(int CardAddress);
FUNCTION void __stdcall SetDigitalChannel(int CardAddress, int Channel);
FUNCTION void __stdcall SetAllDigital(int CardAddress);
FUNCTION bool __stdcall ReadDigitalChannel(int CardAddress, int Channel);
FUNCTION int __stdcall ReadAllDigital(int CardAddress);
FUNCTION void __stdcall InOutMode(int CardAddress, int HighNibble, int LowNibble);
FUNCTION unsigned int __stdcall ReadCounter(int CardAddress);
FUNCTION void __stdcall ResetCounter(int CardAddress);
FUNCTION int __stdcall Connected();
FUNCTION int __stdcall VersionFirmware(int CardAddress);
FUNCTION int __stdcall VersionDLL();
FUNCTION void __stdcall ReadBackPWMOut(int CardAddress, int *Buffer);
FUNCTION int __stdcall ReadBackInOutMode(int CardAddress);

#ifdef __cplusplus
}
#endif