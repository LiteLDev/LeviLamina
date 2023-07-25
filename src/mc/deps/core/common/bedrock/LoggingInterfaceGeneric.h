#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class LoggingInterfaceGeneric {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_LOGGINGINTERFACEGENERIC
public:
    LoggingInterfaceGeneric& operator=(LoggingInterfaceGeneric const&) = delete;
    LoggingInterfaceGeneric(LoggingInterfaceGeneric const&)            = delete;
    LoggingInterfaceGeneric()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?threadId\@LoggingInterfaceGeneric\@Http\@Bedrock\@\@UEAA_KXZ
     */
    virtual unsigned __int64 threadId();
    /**
     * @vftbl 2
     * @symbol ?writeToDebugger\@LoggingInterfaceGeneric\@Http\@Bedrock\@\@UEAAXPEBDW4HCTraceLevel\@\@0\@Z
     */
    virtual void writeToDebugger(char const*, enum class HCTraceLevel, char const*);
};

}; // namespace Bedrock::Http
