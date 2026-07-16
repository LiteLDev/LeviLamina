#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct Hitbox;
struct HitboxJson;
// clang-format on

class HitboxDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Hitbox>> mHitboxes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAABB(::HitboxJson const& aabb);
    // NOLINTEND
};
