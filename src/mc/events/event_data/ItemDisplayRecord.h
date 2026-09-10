#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct ItemDisplayRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf0a695;
    ::ll::UntypedStorage<8, 32> mUnk7b47b2;
    ::ll::UntypedStorage<1, 1>  mUnkda2605;
    ::ll::UntypedStorage<1, 1>  mUnkb36690;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemDisplayRecord& operator=(ItemDisplayRecord const&);
    ItemDisplayRecord(ItemDisplayRecord const&);
    ItemDisplayRecord();
};

} // namespace Social::Events
