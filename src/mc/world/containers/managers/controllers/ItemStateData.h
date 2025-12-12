#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnke5af18;
    ::ll::UntypedStorage<8, 32>  mUnkdd6986;
    ::ll::UntypedStorage<4, 4>   mUnk143794;
    ::ll::UntypedStorage<1, 1>   mUnk115f53;
    ::ll::UntypedStorage<1, 1>   mUnkb0fcb5;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStateData& operator=(ItemStateData const&);
    ItemStateData(ItemStateData const&);
    ItemStateData();
};
