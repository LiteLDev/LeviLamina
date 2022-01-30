#include <HookAPI.h>
#include <LoggerAPI.h>
#include <seh_exception/seh_exception.hpp>
#include <dbghelp/dbghelp.h>
#include <Utils/DbgSymbolHelper.h>
#include <Utils/WinHelper.h>
#include <Utils/StringHelper.h>
#include <sstream>
#include <string>
#include <set>
using namespace std;
extern Logger logger;

#define MACHINE_TYPE IMAGE_FILE_MACHINE_AMD64

void PrintTraceBack(PEXCEPTION_POINTERS e = nullptr)
{
	HANDLE hProcess = GetCurrentProcess();

	logger.error("[Traceback]");
	if (e)
	{
		logger.error("-- Unhandled Exception in -> {}\n", wstr2str(MapModuleFromAddr(hProcess, e->ExceptionRecord->ExceptionAddress)).c_str());
		logger.error("-- Exception Code: 0x%X\n", e->ExceptionRecord->ExceptionCode);
	}

	LoadSymbols();

	PCONTEXT pContext;
	CONTEXT context;
	if (e)
		pContext = e->ContextRecord;
	else
	{
		if (!GetCurrentContext(context))
			return;
		pContext = &context;
	}

	STACKFRAME64 stackFrame = { 0 };
	stackFrame.AddrPC.Mode = AddrModeFlat;
	stackFrame.AddrPC.Offset = pContext->Rip;
	stackFrame.AddrStack.Mode = AddrModeFlat;
	stackFrame.AddrStack.Offset = pContext->Rsp;
	stackFrame.AddrFrame.Mode = AddrModeFlat;
	stackFrame.AddrFrame.Offset = pContext->Rbp;

	while (StackWalk64(MACHINE_TYPE, hProcess, GetCurrentThread(), &stackFrame, pContext, NULL, SymFunctionTableAccess64, SymGetModuleBase64, NULL))
	{
		DWORD64 address = stackFrame.AddrPC.Offset;

		//Function
		PSYMBOL_INFOW info;
		if (info = GetSymbolInfo(hProcess, (void*)stackFrame.AddrPC.Offset))
		{
			std::ostringstream addrHex;
			addrHex << std::hex << info->Address;

			logger.error("[TraceBack] Function {} at {}  [{}]\n",
				wstr2str(info->Name), addrHex.str(), wstr2str(MapModuleFromAddr(hProcess, (void*)address).c_str()));

			//Line
			DWORD displacement = 0;
			IMAGEHLP_LINEW64 line;
			line.SizeOfStruct = sizeof(IMAGEHLP_LINEW64);

			if (SymGetLineFromAddrW64(hProcess, address, &displacement, &line))
				logger.error("-- At File {} : Line {} \n", wstr2str(line.FileName), line.LineNumber);
		}
		else
			logger.error("[TraceBack] Function ???????? at 0x????????\n");
	}
	CleanupSymbols();
}

THook(void, "?tick@Level@@UEAAXXZ",
    void* _this)
{
    try
    {
        original(_this);
    }
    catch (const seh_exception& e)
    {
        logger.error("Uncaught SEH Exception Detected in Level::tick!");
        logger.error("Exception: {}",e.what());
		PrintTraceBack(e.info());
    }
    catch (...)
    {
		logger.error("Uncaught Exception Detected in Level::tick!");
		PrintTraceBack();
    }
}

THook(void, "?update@Minecraft@@QEAA_NXZ",
	void* _this)
{
	try
	{
		original(_this);
	}
	catch (const seh_exception& e)
	{
		logger.error("Uncaught SEH Exception Detected in Minecraft::update!");
		logger.error("Exception: {}", e.what());
		PrintTraceBack(e.info());
	}
	catch (...)
	{
		logger.error("Uncaught Exception Detected in Minecraft::update!");
		PrintTraceBack();
	}
}