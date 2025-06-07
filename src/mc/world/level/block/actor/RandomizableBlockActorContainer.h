#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainerBase.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Player;
class Vec3;
// clang-format on

class RandomizableBlockActorContainer : public ::RandomizableBlockActorContainerBase, public ::Container {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomizableBlockActorContainer() /*override*/;

    // vIndex: 34
    virtual void setContainerChanged(int slot) /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player& player) /*override*/;

    // vIndex: 18
    virtual void dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot) /*override*/;

    // vIndex: 19
    virtual void dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop) /*override*/;

    // vIndex: 14
    virtual void onRemoved(::BlockSource&) /*override*/;

    // vIndex: 41
    virtual void initializeContainerContents(::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $setContainerChanged(int slot);

    MCFOLD void $startOpen(::Player& player);

    MCFOLD void $dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot);

    MCFOLD void $dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop);

    MCFOLD void $onRemoved(::BlockSource&);

    MCFOLD void $initializeContainerContents(::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRandomizableBlockActorContainerBase();

    MCNAPI static void** $vftableForContainer();
    // NOLINTEND
};
