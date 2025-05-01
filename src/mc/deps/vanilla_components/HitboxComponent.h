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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HitboxComponent(::HitboxComponent const& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HitboxComponent const& rhs);
    // NOLINTEND
};
