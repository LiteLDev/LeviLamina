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
    // vIndex: 0, symbol: ??1LoggingInterfaceGeneric@Http@@@UEAA@XZ
    virtual ~LoggingInterfaceGeneric();

    // vIndex: 1, symbol: ?threadId@LoggingInterfaceGeneric@Http@Bedrock@@UEAA_KXZ
    virtual uint64 threadId();

    // vIndex: 2, symbol: ?writeToDebugger@LoggingInterfaceGeneric@Http@Bedrock@@UEAAXPEBDW4HCTraceLevel@@0@Z
    virtual void writeToDebugger(char const*, ::HCTraceLevel, char const*);

    // NOLINTEND
};

}; // namespace Bedrock::Http
