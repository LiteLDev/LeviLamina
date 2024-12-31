#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/LoggingInterface.h"
#include "mc/external/lib_http_client/HCTraceLevel.h"

namespace Bedrock::Http {

class LoggingInterfaceGeneric : public ::Bedrock::Http::LoggingInterface {
public:
    // prevent constructor by default
    LoggingInterfaceGeneric& operator=(LoggingInterfaceGeneric const&);
    LoggingInterfaceGeneric(LoggingInterfaceGeneric const&);
    LoggingInterfaceGeneric();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoggingInterfaceGeneric() /*override*/ = default;

    // vIndex: 1
    virtual uint64 threadId() /*override*/;

    // vIndex: 2
    virtual void writeToDebugger(char const* area, ::HCTraceLevel level, char const* message) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI uint64 $threadId();

    MCAPI void $writeToDebugger(char const* area, ::HCTraceLevel level, char const* message);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
