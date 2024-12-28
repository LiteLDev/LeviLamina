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

class InLava : public ::br::spawn::PlacementType {
public:
    // prevent constructor by default
    InLava& operator=(InLava const&);
    InLava(InLava const&);
    InLava();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isSpawnPositionOk(::BlockSource&, ::BlockPos, ::br::spawn::EntityType const&) const /*override*/;

    // vIndex: 0
    virtual ~InLava() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isSpawnPositionOk(::BlockSource&, ::BlockPos, ::br::spawn::EntityType const&) const;
    // NOLINTEND
};

} // namespace br::spawn
