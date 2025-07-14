#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/FillingContainer.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainerBase.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Player;
class Vec3;
// clang-format on

class RandomizableBlockActorFillingContainer : public ::RandomizableBlockActorContainerBase, public ::FillingContainer {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomizableBlockActorFillingContainer() /*override*/;

    // vIndex: 34
    virtual void setContainerChanged(int slot) /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player& player) /*override*/;

    // vIndex: 18
    virtual void dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot) /*override*/;

    // vIndex: 19
    virtual void dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop) /*override*/;

    // vIndex: 15
    virtual void onRemoved(::BlockSource&) /*override*/;

    // vIndex: 41
    virtual void initializeContainerContents(::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setContainerChanged(int slot);

    MCNAPI void $startOpen(::Player& player);

    MCNAPI void $dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot);

    MCNAPI void $dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop);

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI void $initializeContainerContents(::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForFillingContainer();

    MCNAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
