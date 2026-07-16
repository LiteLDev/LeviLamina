#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/ILogHandler.h"
#include "mc/external/gameface/cohtml/Severity.h"

namespace OreUI {

class EmptyLogHandler : public ::cohtml::Logging::ILogHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmptyLogHandler() /*override*/ = default;

    virtual void WriteLog(::cohtml::Logging::Severity, char const*, uint64) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
