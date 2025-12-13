#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemBlockActorHelpers {

struct SpriteCalculatorRefs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3139dc;
    ::ll::UntypedStorage<8, 8> mUnk915987;
    ::ll::UntypedStorage<8, 8> mUnk5363ec;
    // NOLINTEND

public:
    // prevent constructor by default
    SpriteCalculatorRefs& operator=(SpriteCalculatorRefs const&);
    SpriteCalculatorRefs(SpriteCalculatorRefs const&);
    SpriteCalculatorRefs();
};

} // namespace ItemBlockActorHelpers
