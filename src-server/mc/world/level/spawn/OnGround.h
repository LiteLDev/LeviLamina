#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/spawn/PlacementType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace br::spawn { struct EntityType; }
// clang-format on

namespace br::spawn {

class OnGround : public ::br::spawn::PlacementType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isSpawnPositionOk(::BlockSource& region, ::BlockPos pos, ::br::spawn::EntityType const& type) const
        /*override*/;

    // vIndex: 2
    virtual ::BlockPos adjustSpawnPos(::BlockSource& region, ::BlockPos candidate) const /*override*/;

    // vIndex: 0
    virtual ~OnGround() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isSpawnPositionOk(::BlockSource& region, ::BlockPos pos, ::br::spawn::EntityType const& type) const;

    MCAPI ::BlockPos $adjustSpawnPos(::BlockSource& region, ::BlockPos candidate) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::spawn
