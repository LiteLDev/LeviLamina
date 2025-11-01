#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct HitboxJson;
// clang-format on

class HitboxDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5e2e52;
    // NOLINTEND

public:
    // prevent constructor by default
    HitboxDefinition& operator=(HitboxDefinition const&);
    HitboxDefinition(HitboxDefinition const&);
    HitboxDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAABB(::HitboxJson const& aabb);
    // NOLINTEND

};
