#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/HCTraceLevel.h"

namespace Bedrock::Http {

class LoggingInterface : public ::Bedrock::ImplBase<::Bedrock::Http::LoggingInterface> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoggingInterface() /*override*/ = default;

    // vIndex: 1
    virtual uint64 threadId() = 0;

    // vIndex: 2
    virtual void writeToDebugger(char const*, ::HCTraceLevel, char const*) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Http
