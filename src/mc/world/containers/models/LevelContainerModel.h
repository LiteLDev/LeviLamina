#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ContainerModel.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerWeakRef;
class ItemStack;
class Player;
// clang-format on

class LevelContainerModel : public ::ContainerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                        mPlayer;
    ::ll::TypedStorage<4, 12, ::BlockPos>                      mBlockPos;
    ::ll::TypedStorage<4, 4, ::BlockActorType>                 mBlockEntityType;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                  mEntityUniqueId;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mContainerRemovedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelContainerModel& operator=(LevelContainerModel const&);
    LevelContainerModel(LevelContainerModel const&);
    LevelContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~LevelContainerModel() /*override*/ = default;

    // vIndex: 3
    virtual void releaseResources() /*override*/;

    // vIndex: 0
    virtual void containerContentChanged(int slot) /*override*/;

    // vIndex: 14
    virtual bool isValid() /*override*/;

    // vIndex: 7
    virtual ::ContainerWeakRef getContainerWeakRef() const /*override*/;

    // vIndex: 2
    virtual void postInit() /*override*/;

    // vIndex: 20
    virtual bool isSlotDisabled(int slot) const /*override*/;

    // vIndex: 22
    virtual int _getContainerOffset() const /*override*/;

    // vIndex: 24
    virtual void _onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem) /*override*/;

    // vIndex: 21
    virtual ::Container* _getContainer() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelContainerModel(
        ::ContainerEnumName containerName,
        int                 containerSize,
        ::Player&           player,
        ::ActorUniqueID     entityId,
        ::ContainerCategory category
    );

    MCAPI LevelContainerModel(
        ::ContainerEnumName containerName,
        int                 containerSize,
        ::Player&           player,
        ::BlockActorType    type,
        ::BlockPos const&   blockPos,
        ::ContainerCategory category
    );

    MCAPI void _refreshSlot(int modelSlot);

    MCAPI void containerRemoved();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ContainerEnumName containerName,
        int                 containerSize,
        ::Player&           player,
        ::ActorUniqueID     entityId,
        ::ContainerCategory category
    );

    MCAPI void* $ctor(
        ::ContainerEnumName containerName,
        int                 containerSize,
        ::Player&           player,
        ::BlockActorType    type,
        ::BlockPos const&   blockPos,
        ::ContainerCategory category
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $releaseResources();

    MCAPI void $containerContentChanged(int slot);

    MCAPI bool $isValid();

    MCAPI ::ContainerWeakRef $getContainerWeakRef() const;

    MCAPI void $postInit();

    MCAPI bool $isSlotDisabled(int slot) const;

    MCAPI int $_getContainerOffset() const;

    MCFOLD void $_onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCAPI ::Container* $_getContainer() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
