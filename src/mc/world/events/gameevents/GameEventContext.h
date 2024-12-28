#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameEventContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkb33891;
    ::ll::UntypedStorage<8, 8>  mUnkc3a76c;
    ::ll::UntypedStorage<8, 8>  mUnkd1291f;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEventContext& operator=(GameEventContext const&);
    GameEventContext(GameEventContext const&);
    GameEventContext();
};
