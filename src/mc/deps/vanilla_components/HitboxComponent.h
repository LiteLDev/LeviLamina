#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HitboxComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc65898;
    // NOLINTEND

public:
    // prevent constructor by default
    HitboxComponent& operator=(HitboxComponent const&);
    HitboxComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HitboxComponent(::HitboxComponent const& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HitboxComponent const& rhs);
    // NOLINTEND
};
