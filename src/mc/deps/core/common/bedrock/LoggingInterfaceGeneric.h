#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/LoggingInterface.h"
#include "mc/network/HCTraceLevel.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class LoggingInterface; }
// clang-format on

namespace Bedrock::Http {

class LoggingInterfaceGeneric : public ::Bedrock::Http::LoggingInterface {
public:
    // prevent constructor by default
    LoggingInterfaceGeneric& operator=(LoggingInterfaceGeneric const&);
    LoggingInterfaceGeneric(LoggingInterfaceGeneric const&);
    LoggingInterfaceGeneric();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LoggingInterfaceGeneric@Http@Bedrock@@UEAA@XZ
    virtual ~LoggingInterfaceGeneric() = default;

    // vIndex: 1, symbol: ?threadId@LoggingInterfaceGeneric@Http@Bedrock@@UEAA_KXZ
    virtual uint64 threadId();

    // vIndex: 2, symbol: ?writeToDebugger@LoggingInterfaceGeneric@Http@Bedrock@@UEAAXPEBDW4HCTraceLevel@@0@Z
    virtual void writeToDebugger(char const* area, ::HCTraceLevel level, char const* message);

    // NOLINTEND
};

}; // namespace Bedrock::Http
