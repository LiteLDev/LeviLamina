#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/ChestBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Player;
// clang-format on

class BarrelBlockActor : public ::ChestBlockActor {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 26
    virtual ::std::string getName() const /*override*/;

    // vIndex: 11
    virtual void onPlace(::BlockSource& region) /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player& player) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 49
    virtual void playOpenSound(::BlockSource& region) /*override*/;

    // vIndex: 50
    virtual void playCloseSound(::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~BarrelBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BarrelBlockActor(::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getName() const;

    MCFOLD void $onPlace(::BlockSource& region);

    MCAPI void $startOpen(::Player& player);

    MCAPI void $stopOpen(::Player& player);

    MCAPI void $playOpenSound(::BlockSource& region);

    MCAPI void $playCloseSound(::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForRandomizableBlockActorContainerBase();

    MCAPI static void** $vftableForFillingContainer();
    // NOLINTEND
};
