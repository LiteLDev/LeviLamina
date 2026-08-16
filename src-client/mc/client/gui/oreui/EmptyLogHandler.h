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
    virtual ~EmptyLogHandler() /*override*/;

    virtual void WriteLog(::cohtml::Logging::Severity severity, char const* message, uint64 length) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $WriteLog(::cohtml::Logging::Severity severity, char const* message, uint64 length);
    // NOLINTEND
};

} // namespace OreUI
