#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class Container;
class ContainerScreenContext;
class ItemStack;
class Player;
// clang-format on

class LevelContainerManagerModel : public ::ContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>      mBlockPos;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>  mEntityUniqueID;
    ::ll::TypedStorage<1, 1, ::BlockActorType> mBlockActorType;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelContainerManagerModel() /*override*/;

    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    virtual void setSlot(int slot, ::ItemStack const& item, bool fromNetwork) /*override*/;

    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    virtual void setData(int, int) /*override*/;

    virtual void broadcastChanges() /*override*/;

    virtual bool isValid(float pickRange) /*override*/;

    virtual ::ContainerScreenContext _postInit() /*override*/;

    virtual void _onDynamicContainerContentsChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelContainerManagerModel(::ContainerID containerId, ::Player& player, ::ActorUniqueID uniqueID);

    MCAPI LevelContainerManagerModel(
        ::ContainerID     containerId,
        ::Player&         player,
        ::BlockPos const& pos,
        ::BlockActorType  blockEntityType
    );

    MCAPI ::BlockActor* _getBlockEntity();

    MCAPI ::Container* _getRawContainer();

    MCFOLD ::BlockPos const& getBlockPos() const;

    MCAPI ::ActorUniqueID getEntityUniqueID() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player, ::ActorUniqueID uniqueID);

    MCAPI void*
    $ctor(::ContainerID containerId, ::Player& player, ::BlockPos const& pos, ::BlockActorType blockEntityType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool fromNetwork);

    MCAPI ::ItemStack const& $getSlot(int slot) const;

    MCFOLD void $setData(int, int);

    MCAPI void $broadcastChanges();

    MCAPI bool $isValid(float pickRange);

    MCAPI ::ContainerScreenContext $_postInit();

    MCAPI void $_onDynamicContainerContentsChanged();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
