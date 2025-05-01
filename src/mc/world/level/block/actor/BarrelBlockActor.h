#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/ChestBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Player;
// clang-format on

class BarrelBlockActor : public ::ChestBlockActor {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 27
    virtual ::std::string getName() const /*override*/;

    // vIndex: 12
    virtual void onPlace(::BlockSource& region) /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player& player) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 50
    virtual void playOpenSound(::BlockSource& region) /*override*/;

    // vIndex: 51
    virtual void playCloseSound(::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~BarrelBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $getName() const;

    MCNAPI void $onPlace(::BlockSource& region);

    MCNAPI void $startOpen(::Player& player);

    MCNAPI void $stopOpen(::Player& player);

    MCNAPI void $playOpenSound(::BlockSource& region);

    MCNAPI void $playCloseSound(::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRandomizableBlockActorContainerBase();

    MCNAPI static void** $vftableForFillingContainer();
    // NOLINTEND
};
