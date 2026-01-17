#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renoir/Severity.h"

namespace renoir::Logging {

class ILogHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILogHandler() = default;

    virtual void WriteLog(::renoir::Logging::Severity, char const*, uint64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace renoir::Logging
