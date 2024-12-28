#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkinHash {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk53316a;
    ::ll::UntypedStorage<8, 64> mUnk236293;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinHash& operator=(SkinHash const&);
    SkinHash(SkinHash const&);
    SkinHash();
};
