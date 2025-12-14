#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace br::spawn { struct EntityType; }
// clang-format on

namespace br::spawn {

class PlacementType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlacementType() = default;

    virtual bool isSpawnPositionOk(::BlockSource&, ::BlockPos, ::br::spawn::EntityType const&) const = 0;

    virtual ::BlockPos adjustSpawnPos(::BlockSource&, ::BlockPos candidate) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockPos $adjustSpawnPos(::BlockSource&, ::BlockPos candidate) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::spawn
