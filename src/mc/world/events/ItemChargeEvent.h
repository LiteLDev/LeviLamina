#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemChargeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk3b4a58;
    ::ll::UntypedStorage<8, 24>  mUnke3a9aa;
    ::ll::UntypedStorage<4, 4>   mUnkf6f644;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemChargeEvent& operator=(ItemChargeEvent const&);
    ItemChargeEvent(ItemChargeEvent const&);
    ItemChargeEvent();
};
