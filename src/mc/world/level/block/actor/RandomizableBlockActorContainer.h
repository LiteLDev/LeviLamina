#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainerBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Vec3;
// clang-format on

class RandomizableBlockActorContainer : public ::RandomizableBlockActorContainerBase, public ::Container {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomizableBlockActorContainer() /*override*/;

    virtual void setContainerChanged(int slot) /*override*/;

    virtual void startOpen(::Actor& actor) /*override*/;

    virtual void dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot) /*override*/;

    virtual void dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop) /*override*/;

    virtual void onRemoved(::BlockSource&) /*override*/;

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
    MCAPI void $setContainerChanged(int slot);

    MCFOLD void $startOpen(::Actor& actor);

    MCFOLD void $dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot);

    MCFOLD void $dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop);

    MCFOLD void $onRemoved(::BlockSource&);

    MCAPI void $initializeContainerContents(::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForRandomizableBlockActorContainerBase();

    MCAPI static void** $vftableForContainer();
    // NOLINTEND
};
