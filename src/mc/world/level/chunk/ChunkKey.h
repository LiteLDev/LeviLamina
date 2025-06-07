#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

class ChunkKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ChunkPos const>      pos;
    ::ll::TypedStorage<4, 4, ::DimensionType const> id;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint64 hashCode() const;
    // NOLINTEND
};
