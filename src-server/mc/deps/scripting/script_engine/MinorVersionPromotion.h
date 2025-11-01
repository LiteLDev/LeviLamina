#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct MinorVersionPromotion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnka26ca1;
    ::ll::UntypedStorage<8, 96> mUnk3c4dad;
    ::ll::UntypedStorage<8, 40> mUnk762736;
    ::ll::UntypedStorage<8, 40> mUnk21cc95;
    // NOLINTEND

public:
    // prevent constructor by default
    MinorVersionPromotion& operator=(MinorVersionPromotion const&);
    MinorVersionPromotion(MinorVersionPromotion const&);
    MinorVersionPromotion();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinorVersionPromotion(::Scripting::MinorVersionPromotion&&);

    MCNAPI ~MinorVersionPromotion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::MinorVersionPromotion&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
