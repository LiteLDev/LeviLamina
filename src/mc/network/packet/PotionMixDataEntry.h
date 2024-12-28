#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PotionMixDataEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk40300c;
    ::ll::UntypedStorage<4, 4> mUnk45882e;
    ::ll::UntypedStorage<4, 4> mUnkc1ee8b;
    ::ll::UntypedStorage<4, 4> mUnk2c936a;
    ::ll::UntypedStorage<4, 4> mUnke3fc55;
    ::ll::UntypedStorage<4, 4> mUnk7a3e78;
    // NOLINTEND

public:
    // prevent constructor by default
    PotionMixDataEntry& operator=(PotionMixDataEntry const&);
    PotionMixDataEntry(PotionMixDataEntry const&);
    PotionMixDataEntry();
};
