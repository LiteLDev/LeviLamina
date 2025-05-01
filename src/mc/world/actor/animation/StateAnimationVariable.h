#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
// clang-format on

class StateAnimationVariable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56>  mUnkb84225;
    ::ll::UntypedStorage<8, 216> mUnkf7008c;
    ::ll::UntypedStorage<8, 24>  mUnkdc5884;
    // NOLINTEND

public:
    // prevent constructor by default
    StateAnimationVariable& operator=(StateAnimationVariable const&);
    StateAnimationVariable();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StateAnimationVariable(::StateAnimationVariable const&);

    MCNAPI void setVariable(::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StateAnimationVariable const&);
    // NOLINTEND
};
