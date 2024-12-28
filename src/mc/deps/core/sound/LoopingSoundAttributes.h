#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LoopingSoundAttributes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3f9e22;
    ::ll::UntypedStorage<4, 4> mUnkf87cd2;
    ::ll::UntypedStorage<4, 4> mUnk877e0c;
    // NOLINTEND

public:
    // prevent constructor by default
    LoopingSoundAttributes& operator=(LoopingSoundAttributes const&);
    LoopingSoundAttributes(LoopingSoundAttributes const&);
    LoopingSoundAttributes();
};
