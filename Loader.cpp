#include "pch.h"
typedef unsigned long long hash_t;
hash_t BKDR(const char* _ch, size_t sz) {
	unsigned char* ch = (unsigned char*)_ch;
	hash_t rv = 0;
	for (int i = 0; i < sz; ++i) {
		rv = rv * 127 - 36 + ch[i];
	}
	return rv;
}
struct hashval {
	string key;
	hash_t hash;
	string data;
	hashval() { hash = 0; }
	hashval(string&& a, hash_t b, string&& c) : key(forward<string>(a)), hash(b), data(forward<string>(c)) {}
};
struct RoDB_R {
	ifstream fp;
	unsigned int cnt_bucket;
	unsigned int bucket[4096]; //offset
	unsigned int data_off;
	RoDB_R(const char* path) {
		fp.open(path, ios::binary);
#define ppch(x) ((char*)&x)
		fp.read(ppch(cnt_bucket), 4);
		fp.read(ppch(data_off), 4);
		fp.read(ppch(bucket[0]), 4 * (size_t)cnt_bucket);
	}
	void read(void* buf, unsigned int off, size_t sz) {
		fp.seekg(streampos(off));
		fp.read((char*)buf, sz);
	}
	void getstr(string& buf, unsigned int off) {
		if (off != 0) {
			fp.seekg(streampos(off));
		}
		char ch;
		while ((ch = fp.get()) != 0)
			buf.append(1, ch);
	}
	string val2key(unsigned int rva) {
		fp.seekg(streampos(data_off));
		string name;
		name.reserve(8192);
		while (!fp.eof()) {
			int ch = fp.get();
			if (ch == 0) {
				unsigned int dst;
				fp.read((char*)&dst, 4);
				if (dst == rva) {
					return name;
				}
				else {
					name.clear();
				}
			}
			else {
				name.push_back(ch);
			}
		}
		return "(nil)";
	}
	bool _cmp(string_view key) {
		for (uint32_t i = 0; i < key.size(); ++i) {
			int ch = fp.get();
			if (ch != key[i]) {
				return false;
			}
		}
		return fp.get() == 0;
	}
	unsigned int get(string_view key) { //return file offset
		auto hash = BKDR(key.data(), key.size());
		auto bkoff = bucket[hash % cnt_bucket];
		fp.seekg(streampos(bkoff));
		vector<unsigned int> tolookup;
		tolookup.reserve(512);
		while (1) {
			hash_t hs;
			unsigned int off;
			fp.read(ppch(hs), 8);
			fp.read(ppch(off), 4);
			if (off == 0xffffffff)
				break;
			if (hs == hash)
				tolookup.push_back(off + data_off);
			/*
			if (hs == hash) {
				off += data_off;
				auto pos = fp.tellg();
				string key_now;
				getstr(key_now, off);
				if (key == key_now) {
					return off + (unsigned int)key.size() + 1;
				}
				fp.seekg(pos);
			}*/
		}
		for (auto off : tolookup) {
			fp.seekg({ off });
			if (_cmp(key)) {
				return off + (uint32_t)key.size() + 1;
			}
		}
		return 0;
	}
};
static RoDB_R* pdb = new RoDB_R("bedrock_server.symdb");
static uintptr_t BaseAdr = (uintptr_t)GetModuleHandle(0);
string ptr2name(void* ptr) {
	unsigned int va = uint32_t(((uintptr_t)ptr - BaseAdr));
	return pdb->val2key(va);
}
void* GetServerSymbol(const char* x) {
	auto rv = pdb->get(x);
	if (!rv)
		return nullptr;
	unsigned int rva;
	pdb->read(&rva, rv, 4);
	return (void*)(BaseAdr + rva);
}
int HookFunction(void* oldfunc, void** poutold, void* newfunc) {
	static unordered_map<void*, void**> pool;
	auto& it = pool[oldfunc];
	if (it) {
		*poutold = *it;
		*it = newfunc;
	}
	else {
		void* target = oldfunc;
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		int rv = DetourAttach(&target, newfunc);
		DetourTransactionCommit();
		*poutold = target;
		if (rv != 0)
			return rv;
		it = poutold;
	}
	return 0;
}
int WINAPI DllMain(HMODULE hModule, DWORD res, LPVOID lpReserved) {
	if (res == 1) {
		if (!filesystem::exists("bedrock_server.symdb")) {
			puts("SymDB not found\ntry to run RoDB.exe");
			exit(1);
		}
		ios::sync_with_stdio(false);
		system("chcp 65001");
		filesystem::create_directory("plugins");
		filesystem::directory_iterator ent("plugins");
		for (auto& i : ent) {
			auto path = i.path();
			if (i.is_regular_file() && path.extension() == ".dll") {
				auto lib = LoadLibrary(path.c_str());
				if (lib) {
					cout << "Loading " << path << endl;
				}
				else {
					cout << "Error when loading " << path << endl;
				}
			}
		}
	}
	return TRUE;
}
// clang-format off
#pragma comment(linker, "/export:JsAddRef=ChakraCore.JsAddRef")
#pragma comment(linker, "/export:JsBooleanToBool=ChakraCore.JsBooleanToBool")
#pragma comment(linker, "/export:JsBoolToBoolean=ChakraCore.JsBoolToBoolean")
#pragma comment(linker, "/export:JsCallFunction=ChakraCore.JsCallFunction")
#pragma comment(linker, "/export:JsCollectGarbage=ChakraCore.JsCollectGarbage")
#pragma comment(linker, "/export:JsConstructObject=ChakraCore.JsConstructObject")
#pragma comment(linker, "/export:JsConvertValueToBoolean=ChakraCore.JsConvertValueToBoolean")
#pragma comment(linker, "/export:JsConvertValueToNumber=ChakraCore.JsConvertValueToNumber")
#pragma comment(linker, "/export:JsConvertValueToObject=ChakraCore.JsConvertValueToObject")
#pragma comment(linker, "/export:JsConvertValueToString=ChakraCore.JsConvertValueToString")
#pragma comment(linker, "/export:JsCopyPropertyId=ChakraCore.JsCopyPropertyId")
#pragma comment(linker, "/export:JsCopyString=ChakraCore.JsCopyString")
#pragma comment(linker, "/export:JsCopyStringOneByte=ChakraCore.JsCopyStringOneByte")
#pragma comment(linker, "/export:JsCopyStringUtf16=ChakraCore.JsCopyStringUtf16")
#pragma comment(linker, "/export:JsCreateArray=ChakraCore.JsCreateArray")
#pragma comment(linker, "/export:JsCreateArrayBuffer=ChakraCore.JsCreateArrayBuffer")
#pragma comment(linker, "/export:JsCreateContext=ChakraCore.JsCreateContext")
#pragma comment(linker, "/export:JsCreateDataView=ChakraCore.JsCreateDataView")
#pragma comment(linker, "/export:JsCreateEnhancedFunction=ChakraCore.JsCreateEnhancedFunction")
#pragma comment(linker, "/export:JsCreateError=ChakraCore.JsCreateError")
#pragma comment(linker, "/export:JsCreateExternalArrayBuffer=ChakraCore.JsCreateExternalArrayBuffer")
#pragma comment(linker, "/export:JsCreateExternalObject=ChakraCore.JsCreateExternalObject")
#pragma comment(linker, "/export:JsCreateExternalObjectWithPrototype=ChakraCore.JsCreateExternalObjectWithPrototype")
#pragma comment(linker, "/export:JsCreateFunction=ChakraCore.JsCreateFunction")
#pragma comment(linker, "/export:JsCreateNamedFunction=ChakraCore.JsCreateNamedFunction")
#pragma comment(linker, "/export:JsCreateObject=ChakraCore.JsCreateObject")
#pragma comment(linker, "/export:JsCreatePromise=ChakraCore.JsCreatePromise")
#pragma comment(linker, "/export:JsCreatePropertyId=ChakraCore.JsCreatePropertyId")
#pragma comment(linker, "/export:JsCreateRangeError=ChakraCore.JsCreateRangeError")
#pragma comment(linker, "/export:JsCreateReferenceError=ChakraCore.JsCreateReferenceError")
#pragma comment(linker, "/export:JsCreateRuntime=ChakraCore.JsCreateRuntime")
#pragma comment(linker, "/export:JsCreateSharedArrayBufferWithSharedContent=ChakraCore.JsCreateSharedArrayBufferWithSharedContent")
#pragma comment(linker, "/export:JsCreateString=ChakraCore.JsCreateString")
#pragma comment(linker, "/export:JsCreateStringUtf16=ChakraCore.JsCreateStringUtf16")
#pragma comment(linker, "/export:JsCreateSymbol=ChakraCore.JsCreateSymbol")
#pragma comment(linker, "/export:JsCreateSyntaxError=ChakraCore.JsCreateSyntaxError")
#pragma comment(linker, "/export:JsCreateTypedArray=ChakraCore.JsCreateTypedArray")
#pragma comment(linker, "/export:JsCreateTypeError=ChakraCore.JsCreateTypeError")
#pragma comment(linker, "/export:JsCreateURIError=ChakraCore.JsCreateURIError")
#pragma comment(linker, "/export:JsCreateWeakReference=ChakraCore.JsCreateWeakReference")
#pragma comment(linker, "/export:JsDefineProperty=ChakraCore.JsDefineProperty")
#pragma comment(linker, "/export:JsDeleteIndexedProperty=ChakraCore.JsDeleteIndexedProperty")
#pragma comment(linker, "/export:JsDeleteProperty=ChakraCore.JsDeleteProperty")
#pragma comment(linker, "/export:JsDiagEvaluate=ChakraCore.JsDiagEvaluate")
#pragma comment(linker, "/export:JsDiagGetBreakOnException=ChakraCore.JsDiagGetBreakOnException")
#pragma comment(linker, "/export:JsDiagGetBreakpoints=ChakraCore.JsDiagGetBreakpoints")
#pragma comment(linker, "/export:JsDiagGetFunctionPosition=ChakraCore.JsDiagGetFunctionPosition")
#pragma comment(linker, "/export:JsDiagGetObjectFromHandle=ChakraCore.JsDiagGetObjectFromHandle")
#pragma comment(linker, "/export:JsDiagGetProperties=ChakraCore.JsDiagGetProperties")
#pragma comment(linker, "/export:JsDiagGetScripts=ChakraCore.JsDiagGetScripts")
#pragma comment(linker, "/export:JsDiagGetSource=ChakraCore.JsDiagGetSource")
#pragma comment(linker, "/export:JsDiagGetStackProperties=ChakraCore.JsDiagGetStackProperties")
#pragma comment(linker, "/export:JsDiagGetStackTrace=ChakraCore.JsDiagGetStackTrace")
#pragma comment(linker, "/export:JsDiagRemoveBreakpoint=ChakraCore.JsDiagRemoveBreakpoint")
#pragma comment(linker, "/export:JsDiagRequestAsyncBreak=ChakraCore.JsDiagRequestAsyncBreak")
#pragma comment(linker, "/export:JsDiagSetBreakOnException=ChakraCore.JsDiagSetBreakOnException")
#pragma comment(linker, "/export:JsDiagSetBreakpoint=ChakraCore.JsDiagSetBreakpoint")
#pragma comment(linker, "/export:JsDiagSetStepType=ChakraCore.JsDiagSetStepType")
#pragma comment(linker, "/export:JsDiagStartDebugging=ChakraCore.JsDiagStartDebugging")
#pragma comment(linker, "/export:JsStartDebugging=ChakraCore.JsDiagStartDebugging")
#pragma comment(linker, "/export:JsDiagStopDebugging=ChakraCore.JsDiagStopDebugging")
#pragma comment(linker, "/export:JsDisableRuntimeExecution=ChakraCore.JsDisableRuntimeExecution")
#pragma comment(linker, "/export:JsDisposeRuntime=ChakraCore.JsDisposeRuntime")
#pragma comment(linker, "/export:JsDoubleToNumber=ChakraCore.JsDoubleToNumber")
#pragma comment(linker, "/export:JsEnableRuntimeExecution=ChakraCore.JsEnableRuntimeExecution")
#pragma comment(linker, "/export:JsEquals=ChakraCore.JsEquals")
#pragma comment(linker, "/export:JsGetAndClearException=ChakraCore.JsGetAndClearException")
#pragma comment(linker, "/export:JsGetAndClearExceptionWithMetadata=ChakraCore.JsGetAndClearExceptionWithMetadata")
#pragma comment(linker, "/export:JsGetArrayBufferStorage=ChakraCore.JsGetArrayBufferStorage")
#pragma comment(linker, "/export:JsGetContextData=ChakraCore.JsGetContextData")
#pragma comment(linker, "/export:JsGetContextOfObject=ChakraCore.JsGetContextOfObject")
#pragma comment(linker, "/export:JsGetCurrentContext=ChakraCore.JsGetCurrentContext")
#pragma comment(linker, "/export:JsGetDataViewInfo=ChakraCore.JsGetDataViewInfo")
#pragma comment(linker, "/export:JsGetDataViewStorage=ChakraCore.JsGetDataViewStorage")
#pragma comment(linker, "/export:JsGetExtensionAllowed=ChakraCore.JsGetExtensionAllowed")
#pragma comment(linker, "/export:JsGetExternalData=ChakraCore.JsGetExternalData")
#pragma comment(linker, "/export:JsGetFalseValue=ChakraCore.JsGetFalseValue")
#pragma comment(linker, "/export:JsGetGlobalObject=ChakraCore.JsGetGlobalObject")
#pragma comment(linker, "/export:JsGetIndexedPropertiesExternalData=ChakraCore.JsGetIndexedPropertiesExternalData")
#pragma comment(linker, "/export:JsGetIndexedProperty=ChakraCore.JsGetIndexedProperty")
#pragma comment(linker, "/export:JsGetModuleHostInfo=ChakraCore.JsGetModuleHostInfo")
#pragma comment(linker, "/export:JsGetModuleNamespace=ChakraCore.JsGetModuleNamespace")
#pragma comment(linker, "/export:JsGetNullValue=ChakraCore.JsGetNullValue")
#pragma comment(linker, "/export:JsGetOwnPropertyDescriptor=ChakraCore.JsGetOwnPropertyDescriptor")
#pragma comment(linker, "/export:JsGetOwnPropertyNames=ChakraCore.JsGetOwnPropertyNames")
#pragma comment(linker, "/export:JsGetOwnPropertySymbols=ChakraCore.JsGetOwnPropertySymbols")
#pragma comment(linker, "/export:JsGetPromiseResult=ChakraCore.JsGetPromiseResult")
#pragma comment(linker, "/export:JsGetPromiseState=ChakraCore.JsGetPromiseState")
#pragma comment(linker, "/export:JsGetProperty=ChakraCore.JsGetProperty")
#pragma comment(linker, "/export:JsGetPropertyIdFromName=ChakraCore.JsGetPropertyIdFromName")
#pragma comment(linker, "/export:JsGetPropertyIdFromSymbol=ChakraCore.JsGetPropertyIdFromSymbol")
#pragma comment(linker, "/export:JsGetPropertyIdType=ChakraCore.JsGetPropertyIdType")
#pragma comment(linker, "/export:JsGetPropertyNameFromId=ChakraCore.JsGetPropertyNameFromId")
#pragma comment(linker, "/export:JsGetPrototype=ChakraCore.JsGetPrototype")
#pragma comment(linker, "/export:JsGetProxyProperties=ChakraCore.JsGetProxyProperties")
#pragma comment(linker, "/export:JsGetRuntime=ChakraCore.JsGetRuntime")
#pragma comment(linker, "/export:JsGetRuntimeMemoryLimit=ChakraCore.JsGetRuntimeMemoryLimit")
#pragma comment(linker, "/export:JsGetRuntimeMemoryUsage=ChakraCore.JsGetRuntimeMemoryUsage")
#pragma comment(linker, "/export:JsGetSharedArrayBufferContent=ChakraCore.JsGetSharedArrayBufferContent")
#pragma comment(linker, "/export:JsGetStringLength=ChakraCore.JsGetStringLength")
#pragma comment(linker, "/export:JsGetSymbolFromPropertyId=ChakraCore.JsGetSymbolFromPropertyId")
#pragma comment(linker, "/export:JsGetTrueValue=ChakraCore.JsGetTrueValue")
#pragma comment(linker, "/export:JsGetTypedArrayInfo=ChakraCore.JsGetTypedArrayInfo")
#pragma comment(linker, "/export:JsGetTypedArrayStorage=ChakraCore.JsGetTypedArrayStorage")
#pragma comment(linker, "/export:JsGetUndefinedValue=ChakraCore.JsGetUndefinedValue")
#pragma comment(linker, "/export:JsGetValueType=ChakraCore.JsGetValueType")
#pragma comment(linker, "/export:JsGetWeakReferenceValue=ChakraCore.JsGetWeakReferenceValue")
#pragma comment(linker, "/export:JsHasException=ChakraCore.JsHasException")
#pragma comment(linker, "/export:JsHasExternalData=ChakraCore.JsHasExternalData")
#pragma comment(linker, "/export:JsHasIndexedPropertiesExternalData=ChakraCore.JsHasIndexedPropertiesExternalData")
#pragma comment(linker, "/export:JsHasIndexedProperty=ChakraCore.JsHasIndexedProperty")
#pragma comment(linker, "/export:JsHasOwnProperty=ChakraCore.JsHasOwnProperty")
#pragma comment(linker, "/export:JsHasProperty=ChakraCore.JsHasProperty")
#pragma comment(linker, "/export:JsIdle=ChakraCore.JsIdle")
#pragma comment(linker, "/export:JsInitializeJITServer=ChakraCore.JsInitializeJITServer")
#pragma comment(linker, "/export:JsInitializeModuleRecord=ChakraCore.JsInitializeModuleRecord")
#pragma comment(linker, "/export:JsInstanceOf=ChakraCore.JsInstanceOf")
#pragma comment(linker, "/export:JsIntToNumber=ChakraCore.JsIntToNumber")
#pragma comment(linker, "/export:JsIsRuntimeExecutionDisabled=ChakraCore.JsIsRuntimeExecutionDisabled")
#pragma comment(linker, "/export:JsLessThan=ChakraCore.JsLessThan")
#pragma comment(linker, "/export:JsLessThanOrEqual=ChakraCore.JsLessThanOrEqual")
#pragma comment(linker, "/export:JsModuleEvaluation=ChakraCore.JsModuleEvaluation")
#pragma comment(linker, "/export:JsNumberToDouble=ChakraCore.JsNumberToDouble")
#pragma comment(linker, "/export:JsNumberToInt=ChakraCore.JsNumberToInt")
#pragma comment(linker, "/export:JsObjectDefineProperty=ChakraCore.JsObjectDefineProperty")
#pragma comment(linker, "/export:JsObjectDeleteProperty=ChakraCore.JsObjectDeleteProperty")
#pragma comment(linker, "/export:JsObjectGetOwnPropertyDescriptor=ChakraCore.JsObjectGetOwnPropertyDescriptor")
#pragma comment(linker, "/export:JsObjectGetProperty=ChakraCore.JsObjectGetProperty")
#pragma comment(linker, "/export:JsObjectHasOwnProperty=ChakraCore.JsObjectHasOwnProperty")
#pragma comment(linker, "/export:JsObjectHasProperty=ChakraCore.JsObjectHasProperty")
#pragma comment(linker, "/export:JsObjectSetProperty=ChakraCore.JsObjectSetProperty")
#pragma comment(linker, "/export:JsParse=ChakraCore.JsParse")
#pragma comment(linker, "/export:JsParseModuleSource=ChakraCore.JsParseModuleSource")
#pragma comment(linker, "/export:JsParseScript=ChakraCore.JsParseScript")
#pragma comment(linker, "/export:JsParseScriptWithAttributes=ChakraCore.JsParseScriptWithAttributes")
#pragma comment(linker, "/export:JsParseSerialized=ChakraCore.JsParseSerialized")
#pragma comment(linker, "/export:JsParseSerializedScript=ChakraCore.JsParseSerializedScript")
#pragma comment(linker, "/export:JsParseSerializedScriptWithCallback=ChakraCore.JsParseSerializedScriptWithCallback")
#pragma comment(linker, "/export:JsPointerToString=ChakraCore.JsPointerToString")
#pragma comment(linker, "/export:JsPreventExtension=ChakraCore.JsPreventExtension")
#pragma comment(linker, "/export:JsRelease=ChakraCore.JsRelease")
#pragma comment(linker, "/export:JsReleaseSharedArrayBufferContentHandle=ChakraCore.JsReleaseSharedArrayBufferContentHandle")
#pragma comment(linker, "/export:JsRun=ChakraCore.JsRun")
#pragma comment(linker, "/export:JsRunScript=ChakraCore.JsRunScript")
#pragma comment(linker, "/export:JsRunScriptWithParserState=ChakraCore.JsRunScriptWithParserState")
#pragma comment(linker, "/export:JsRunSerialized=ChakraCore.JsRunSerialized")
#pragma comment(linker, "/export:JsRunSerializedScript=ChakraCore.JsRunSerializedScript")
#pragma comment(linker, "/export:JsRunSerializedScriptWithCallback=ChakraCore.JsRunSerializedScriptWithCallback")
#pragma comment(linker, "/export:JsSerialize=ChakraCore.JsSerialize")
#pragma comment(linker, "/export:JsSerializeParserState=ChakraCore.JsSerializeParserState")
#pragma comment(linker, "/export:JsSerializeScript=ChakraCore.JsSerializeScript")
#pragma comment(linker, "/export:JsSetContextData=ChakraCore.JsSetContextData")
#pragma comment(linker, "/export:JsSetCurrentContext=ChakraCore.JsSetCurrentContext")
#pragma comment(linker, "/export:JsSetException=ChakraCore.JsSetException")
#pragma comment(linker, "/export:JsSetExternalData=ChakraCore.JsSetExternalData")
#pragma comment(linker, "/export:JsSetHostPromiseRejectionTracker=ChakraCore.JsSetHostPromiseRejectionTracker")
#pragma comment(linker, "/export:JsSetIndexedPropertiesToExternalData=ChakraCore.JsSetIndexedPropertiesToExternalData")
#pragma comment(linker, "/export:JsSetIndexedProperty=ChakraCore.JsSetIndexedProperty")
#pragma comment(linker, "/export:JsSetModuleHostInfo=ChakraCore.JsSetModuleHostInfo")
#pragma comment(linker, "/export:JsSetObjectBeforeCollectCallback=ChakraCore.JsSetObjectBeforeCollectCallback")
#pragma comment(linker, "/export:JsSetPromiseContinuationCallback=ChakraCore.JsSetPromiseContinuationCallback")
#pragma comment(linker, "/export:JsSetProperty=ChakraCore.JsSetProperty")
#pragma comment(linker, "/export:JsSetPrototype=ChakraCore.JsSetPrototype")
#pragma comment(linker, "/export:JsSetRuntimeBeforeCollectCallback=ChakraCore.JsSetRuntimeBeforeCollectCallback")
#pragma comment(linker, "/export:JsSetRuntimeMemoryAllocationCallback=ChakraCore.JsSetRuntimeMemoryAllocationCallback")
#pragma comment(linker, "/export:JsSetRuntimeMemoryLimit=ChakraCore.JsSetRuntimeMemoryLimit")
#pragma comment(linker, "/export:JsStrictEquals=ChakraCore.JsStrictEquals")
#pragma comment(linker, "/export:JsStringToPointer=ChakraCore.JsStringToPointer")
#pragma comment(linker, "/export:JsTTDCheckAndAssertIfTTDRunning=ChakraCore.JsTTDCheckAndAssertIfTTDRunning")
#pragma comment(linker, "/export:JsTTDCreateContext=ChakraCore.JsTTDCreateContext")
#pragma comment(linker, "/export:JsTTDCreateRecordRuntime=ChakraCore.JsTTDCreateRecordRuntime")
#pragma comment(linker, "/export:JsTTDCreateReplayRuntime=ChakraCore.JsTTDCreateReplayRuntime")
#pragma comment(linker, "/export:JsTTDDiagSetAutoTraceStatus=ChakraCore.JsTTDDiagSetAutoTraceStatus")
#pragma comment(linker, "/export:JsTTDDiagWriteLog=ChakraCore.JsTTDDiagWriteLog")
#pragma comment(linker, "/export:JsTTDGetPreviousSnapshotInterval=ChakraCore.JsTTDGetPreviousSnapshotInterval")
#pragma comment(linker, "/export:JsTTDGetSnapShotBoundInterval=ChakraCore.JsTTDGetSnapShotBoundInterval")
#pragma comment(linker, "/export:JsTTDGetSnapTimeTopLevelEventMove=ChakraCore.JsTTDGetSnapTimeTopLevelEventMove")
#pragma comment(linker, "/export:JsTTDHostExit=ChakraCore.JsTTDHostExit")
#pragma comment(linker, "/export:JsTTDMoveToTopLevelEvent=ChakraCore.JsTTDMoveToTopLevelEvent")
#pragma comment(linker, "/export:JsTTDNotifyContextDestroy=ChakraCore.JsTTDNotifyContextDestroy")
#pragma comment(linker, "/export:JsTTDNotifyLongLivedReferenceAdd=ChakraCore.JsTTDNotifyLongLivedReferenceAdd")
#pragma comment(linker, "/export:JsTTDNotifyYield=ChakraCore.JsTTDNotifyYield")
#pragma comment(linker, "/export:JsTTDPauseTimeTravelBeforeRuntimeOperation=ChakraCore.JsTTDPauseTimeTravelBeforeRuntimeOperation")
#pragma comment(linker, "/export:JsTTDPreExecuteSnapShotInterval=ChakraCore.JsTTDPreExecuteSnapShotInterval")
#pragma comment(linker, "/export:JsTTDRawBufferAsyncModificationRegister=ChakraCore.JsTTDRawBufferAsyncModificationRegister")
#pragma comment(linker, "/export:JsTTDRawBufferAsyncModifyComplete=ChakraCore.JsTTDRawBufferAsyncModifyComplete")
#pragma comment(linker, "/export:JsTTDRawBufferCopySyncIndirect=ChakraCore.JsTTDRawBufferCopySyncIndirect")
#pragma comment(linker, "/export:JsTTDRawBufferModifySyncIndirect=ChakraCore.JsTTDRawBufferModifySyncIndirect")
#pragma comment(linker, "/export:JsTTDReplayExecution=ChakraCore.JsTTDReplayExecution")
#pragma comment(linker, "/export:JsTTDReStartTimeTravelAfterRuntimeOperation=ChakraCore.JsTTDReStartTimeTravelAfterRuntimeOperation")
#pragma comment(linker, "/export:JsTTDStart=ChakraCore.JsTTDStart")
#pragma comment(linker, "/export:JsTTDStop=ChakraCore.JsTTDStop")
// clang-format on