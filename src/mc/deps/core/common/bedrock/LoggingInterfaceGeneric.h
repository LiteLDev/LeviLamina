#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/LoggingInterface.h"

// auto generated forward declare list
// clang-format off
enum class HCTraceLevel;
// clang-format on

namespace Bedrock::Http {

class LoggingInterfaceGeneric : public ::Bedrock::Http::LoggingInterface {

public:
    // prevent constructor by default
    LoggingInterfaceGeneric& operator=(LoggingInterfaceGeneric const&) = delete;
    LoggingInterfaceGeneric(LoggingInterfaceGeneric const&)            = delete;
    LoggingInterfaceGeneric()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?threadId\@LoggingInterfaceGeneric\@Http\@Bedrock\@\@UEAA_KXZ
     */
    virtual uint64_t threadId();
    /**
     * @vftbl 2
     * @symbol ?writeToDebugger\@LoggingInterfaceGeneric\@Http\@Bedrock\@\@UEAAXPEBDW4HCTraceLevel\@\@0\@Z
     */
    virtual void writeToDebugger(char const*, enum class HCTraceLevel, char const*);
    // NOLINTEND
};

}; // namespace Bedrock::Http
