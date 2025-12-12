#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class ContainerScreenContext;
class ItemStack;
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
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelContainerManagerModel() /*override*/;

    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    virtual void setSlot(int slot, ::ItemStack const& item, bool) /*override*/;

    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    virtual void setData(int id, int value) /*override*/;

    virtual void broadcastChanges() /*override*/;

    virtual bool isValid(float pickRange) /*override*/;

    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockActor* _getBlockEntity();
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

    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool);

    MCAPI ::ItemStack const& $getSlot(int slot) const;

    MCFOLD void $setData(int id, int value);

    MCAPI void $broadcastChanges();

    MCAPI bool $isValid(float pickRange);

    MCAPI ::ContainerScreenContext $_postInit();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
