#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickDeathSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnke4d6ab;
    // NOLINTEND

public:
    // prevent constructor by default
    TickDeathSettings& operator=(TickDeathSettings const&);
    TickDeathSettings(TickDeathSettings const&);
    TickDeathSettings();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::TickDeathSettings const& DEFAULT();
    // NOLINTEND

};
