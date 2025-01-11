#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class Container;
class ContainerScreenContext;
class ItemStack;
class Player;
struct ActorUniqueID;
// clang-format on

class LevelContainerManagerModel : public ::ContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk6fc970;
    ::ll::UntypedStorage<8, 8>  mUnkeb138a;
    ::ll::UntypedStorage<4, 4>  mUnk4952b7;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelContainerManagerModel& operator=(LevelContainerManagerModel const&);
    LevelContainerManagerModel(LevelContainerManagerModel const&);
    LevelContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelContainerManagerModel() /*override*/;

    // vIndex: 7
    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    // vIndex: 8
    virtual void setSlot(int slot, ::ItemStack const& item, bool) /*override*/;

    // vIndex: 9
    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    // vIndex: 10
    virtual void setData(int id, int value) /*override*/;

    // vIndex: 13
    virtual void broadcastChanges() /*override*/;

    // vIndex: 19
    virtual bool isValid(float pickRange) /*override*/;

    // vIndex: 20
    virtual ::ContainerScreenContext _postInit() /*override*/;
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
