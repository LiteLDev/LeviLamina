#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/Severity.h"

namespace cohtml::Logging {

class ILogHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILogHandler() = default;

    virtual void WriteLog(::cohtml::Logging::Severity, char const*, uint64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml::Logging
