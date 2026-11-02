#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"
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
    ::ll::TypedStorage<1, 1, ::BlockActorType>                 mBlockEntityType;
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
    virtual ~LevelContainerModel() /*override*/ = default;

    virtual void releaseResources() /*override*/;

    virtual void containerContentChanged(int slot) /*override*/;

    virtual bool isValid() /*override*/;

    virtual ::ContainerWeakRef getContainerWeakRef() const /*override*/;

    virtual void postInit() /*override*/;

    virtual bool isSlotDisabled(int slot) const /*override*/;

    virtual int _getContainerOffset() const /*override*/;

    virtual void _onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem) /*override*/;

    virtual ::Container* _getContainer() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void containerRemoved();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Container* getContainerHelper(::Player& player, ::ActorUniqueID const& actorUniqueId);

    MCNAPI static ::Container*
    getContainerHelper(::Player& player, ::BlockActorType blockActorType, ::BlockPos const& blockPos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $releaseResources();

    MCNAPI void $containerContentChanged(int slot);

    MCNAPI bool $isValid();

    MCNAPI ::ContainerWeakRef $getContainerWeakRef() const;

    MCNAPI void $postInit();

    MCNAPI bool $isSlotDisabled(int slot) const;

    MCNAPI int $_getContainerOffset() const;

    MCAPI void $_onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCNAPI ::Container* $_getContainer() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
