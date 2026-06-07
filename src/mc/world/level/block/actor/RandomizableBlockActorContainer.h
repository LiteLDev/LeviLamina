#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/Container.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainerBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Vec3;
// clang-format on

class RandomizableBlockActorContainer : public ::RandomizableBlockActorContainerBase, public ::Container {
public:
    // prevent constructor by default
    RandomizableBlockActorContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomizableBlockActorContainer() /*override*/;

    virtual void setContainerChanged(int slot) /*override*/;

    virtual void startOpen(::Actor& actor) /*override*/;

    virtual void dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot) /*override*/;

    virtual void dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop) /*override*/;

    virtual void onRemoved(::BlockSource& region) /*override*/;

    virtual void initializeContainerContents(::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RandomizableBlockActorContainer(
        ::BlockActorType  blockEntityType,
        ::BlockPos const& pos,
        ::SharedTypes::Legacy::ContainerType,
        ::BlockActorRendererId rendererId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BlockActorType  blockEntityType,
        ::BlockPos const& pos,
        ::SharedTypes::Legacy::ContainerType,
        ::BlockActorRendererId rendererId
    );
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

    MCAPI void $startOpen(::Actor& actor);

    MCFOLD void $dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot);

    MCFOLD void $dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop);

    MCFOLD void $onRemoved(::BlockSource& region);

    MCFOLD void $initializeContainerContents(::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForRandomizableBlockActorContainerBase();

    MCAPI static void** $vftableForContainer();
    // NOLINTEND
};
