//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USERES("krpRegions_C3.res");
USEPACKAGE("vcl35.bpi");
USEUNIT("krpRegionsReg.pas");
USEPACKAGE("vclx35.bpi");
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
//   Package source.
//---------------------------------------------------------------------------
int WINAPI DllEntryPoint(HINSTANCE hinst, unsigned long reason, void*)
{
    return 1;
}
//---------------------------------------------------------------------------
