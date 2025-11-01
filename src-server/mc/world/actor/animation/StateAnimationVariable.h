#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StateAnimationVariable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnkb84225;
    ::ll::UntypedStorage<8, 16> mUnkf7008c;
    ::ll::UntypedStorage<8, 24> mUnkdc5884;
    // NOLINTEND

public:
    // prevent constructor by default
    StateAnimationVariable& operator=(StateAnimationVariable const&);
    StateAnimationVariable(StateAnimationVariable const&);
    StateAnimationVariable();
};
