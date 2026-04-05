#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct Hitbox;
// clang-format on

class HitboxComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Hitbox>> mHitboxes;
    // NOLINTEND

public:
    // prevent constructor by default
    HitboxComponent& operator=(HitboxComponent const&);
    HitboxComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HitboxComponent(::HitboxComponent const& rhs);

#ifdef LL_PLAT_C
    MCAPI ::HitboxComponent& operator=(::HitboxComponent&&);

    MCAPI ~HitboxComponent();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HitboxComponent const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};
