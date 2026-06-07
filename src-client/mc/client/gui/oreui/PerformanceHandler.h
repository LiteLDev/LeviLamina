#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/IPerformanceHandler.h"

namespace OreUI {

class PerformanceHandler : public ::cohtml::Profile::IPerformanceHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void WriteLog(char const*, uint64) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $WriteLog(char const*, uint64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
