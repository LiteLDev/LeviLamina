#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/PlacementType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace br::spawn { struct EntityType; }
// clang-format on

namespace br::spawn {

class InWater : public ::br::spawn::PlacementType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isSpawnPositionOk(::BlockSource& region, ::BlockPos pos, ::br::spawn::EntityType const&) const
        /*override*/;

    // vIndex: 0
    virtual ~InWater() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isSpawnPositionOk(::BlockSource& region, ::BlockPos pos, ::br::spawn::EntityType const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::spawn
