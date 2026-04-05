#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/IPerformanceHandler.h"

namespace OreUI {

class PerformanceHandler : public ::cohtml::Profile::IPerformanceHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void WriteLog(char const* message, uint64 length) /*override*/;

    virtual ~PerformanceHandler() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $WriteLog(char const* message, uint64 length);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
