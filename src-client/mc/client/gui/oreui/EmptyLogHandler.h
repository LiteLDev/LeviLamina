#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/ILogHandler.h"
#include "mc/deps/cohtml/Severity.h"

namespace OreUI {

class EmptyLogHandler : public ::cohtml::Logging::ILogHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmptyLogHandler() /*override*/ = default;

    virtual void WriteLog(::cohtml::Logging::Severity severity, char const* message, uint64 length) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $WriteLog(::cohtml::Logging::Severity severity, char const* message, uint64 length);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
