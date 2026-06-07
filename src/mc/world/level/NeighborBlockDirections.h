#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/world/level/block/NeighborDirection.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class NeighborBlockDirections {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::Bedrock::EnumSet<::NeighborDirection, 14>> mDirections;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NeighborBlockDirections();

    MCAPI bool anySet() const;

    MCAPI ::NeighborBlockDirections getFlagIntersection(::NeighborBlockDirections const& other) const;

    MCAPI bool isSet(::NeighborDirection direction) const;

    MCAPI void set(::NeighborDirection direction, bool value);

    MCAPI void setAll(bool value);

    MCAPI void setAllCardinalDirections(bool value);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::NeighborBlockDirections all();

    MCAPI static ::NeighborBlockDirections
    createFromRelativePosition(::BlockPos const& pos, ::BlockPos const& neighborPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};
