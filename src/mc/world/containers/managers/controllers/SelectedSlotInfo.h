#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SelectedSlotInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke3e446;
    ::ll::UntypedStorage<4, 4> mUnk6a6eed;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectedSlotInfo& operator=(SelectedSlotInfo const&);
    SelectedSlotInfo(SelectedSlotInfo const&);
    SelectedSlotInfo();
};
