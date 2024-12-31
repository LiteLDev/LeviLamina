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
    // prevent constructor by default
    PlacementType& operator=(PlacementType const&);
    PlacementType(PlacementType const&);
    PlacementType();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlacementType() = default;

    // vIndex: 1
    virtual bool isSpawnPositionOk(::BlockSource&, ::BlockPos, ::br::spawn::EntityType const&) const = 0;

    // vIndex: 2
    virtual ::BlockPos adjustSpawnPos(::BlockSource&, ::BlockPos) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace br::spawn
