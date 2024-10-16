#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/LoggingInterface.h"
#include "mc/external/lib_http_client/HCTraceLevel.h"

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
    // vIndex: 0
    virtual ~LoggingInterfaceGeneric() = default;

    // vIndex: 1
    virtual uint64 threadId();

    // vIndex: 2
    virtual void writeToDebugger(char const* area, ::HCTraceLevel level, char const* message);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI uint64 threadId$();

    MCAPI void writeToDebugger$(char const* area, ::HCTraceLevel level, char const* message);

    // NOLINTEND
};

}; // namespace Bedrock::Http
