#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/HCTraceLevel.h"

namespace Bedrock::Http {

class LoggingInterface : public ::Bedrock::ImplBase<::Bedrock::Http::LoggingInterface> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LoggingInterface() /*override*/ = default;

    virtual uint64 threadId() = 0;

    virtual void writeToDebugger(char const* area, ::HCTraceLevel level, char const* message) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Http
