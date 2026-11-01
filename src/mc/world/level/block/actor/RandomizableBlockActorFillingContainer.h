#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/inventory/FillingContainer.h"
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

class RandomizableBlockActorFillingContainer : public ::RandomizableBlockActorContainerBase, public ::FillingContainer {
public:
    // prevent constructor by default
    RandomizableBlockActorFillingContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomizableBlockActorFillingContainer() /*override*/ = default;

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
    MCNAPI RandomizableBlockActorFillingContainer(
        ::BlockActorType                     blockEntityType,
        ::BlockPos const&                    pos,
        int                                  numTotalSlots,
        ::SharedTypes::Legacy::ContainerType containerType,
        ::BlockActorRendererId               rendererId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::BlockActorType                     blockEntityType,
        ::BlockPos const&                    pos,
        int                                  numTotalSlots,
        ::SharedTypes::Legacy::ContainerType containerType,
        ::BlockActorRendererId               rendererId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setContainerChanged(int slot);

    MCNAPI void $startOpen(::Actor& actor);

    MCNAPI void $dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot);

    MCNAPI void $dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop);

    MCNAPI void $onRemoved(::BlockSource& region);

    MCNAPI void $initializeContainerContents(::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();
    // NOLINTEND
};
