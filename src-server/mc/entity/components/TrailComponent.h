#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockType;
// clang-format on

struct TrailComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockType const*> mBlockType;
    ::ll::TypedStorage<4, 12, ::Vec3> mSpawnOffset;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initFromDefinition(::Actor const& actor);
    // NOLINTEND

};
