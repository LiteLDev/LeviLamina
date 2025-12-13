#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/LoggingInterface.h"
#include "mc/external/lib_http_client/HCTraceLevel.h"

namespace Bedrock::Http {

class LoggingInterfaceGeneric : public ::Bedrock::Http::LoggingInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LoggingInterfaceGeneric() /*override*/ = default;

    virtual uint64 threadId() /*override*/;

    virtual void writeToDebugger(char const* area, ::HCTraceLevel level, char const* message) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint64 $threadId();

    MCNAPI void $writeToDebugger(char const* area, ::HCTraceLevel level, char const* message);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
