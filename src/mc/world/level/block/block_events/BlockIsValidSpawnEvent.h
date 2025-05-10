#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
namespace br::spawn { struct EntityType; }
// clang-format on

namespace BlockEvents {

class BlockIsValidSpawnEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                           canSpawn;
    ::ll::TypedStorage<8, 8, ::BlockSource&>                 mRegion;
    ::ll::TypedStorage<8, 8, ::Block const&>                 mState;
    ::ll::TypedStorage<8, 8, ::br::spawn::EntityType const&> mEntityType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Block const& getBlock() const /*override*/;

    // vIndex: 2
    virtual ::BlockSource const& getBlockSource() const /*override*/;

    // vIndex: 0
    virtual ~BlockIsValidSpawnEvent() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Block const& $getBlock() const;

    MCFOLD ::BlockSource const& $getBlockSource() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
