#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ContainerScreenContext;
class FurnaceBlockActor;
class HashedString;
class ItemStack;
class Player;
// clang-format on

class FurnaceContainerManagerModel : public ::ContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk420209;
    ::ll::UntypedStorage<4, 4>  mUnk346601;
    ::ll::UntypedStorage<4, 4>  mUnkf1b243;
    ::ll::UntypedStorage<4, 4>  mUnk628aee;
    ::ll::UntypedStorage<4, 4>  mUnkd60ec5;
    ::ll::UntypedStorage<4, 4>  mUnk96aaa6;
    ::ll::UntypedStorage<4, 4>  mUnk3d7132;
    ::ll::UntypedStorage<8, 32> mUnkc67781;
    ::ll::UntypedStorage<4, 4>  mUnkcc9a84;
    ::ll::UntypedStorage<4, 4>  mUnk726d31;
    ::ll::UntypedStorage<1, 1>  mUnk4eae60;
    ::ll::UntypedStorage<8, 48> mUnk2497a7;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceContainerManagerModel& operator=(FurnaceContainerManagerModel const&);
    FurnaceContainerManagerModel(FurnaceContainerManagerModel const&);
    FurnaceContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FurnaceContainerManagerModel() /*override*/;

    // vIndex: 7
    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    // vIndex: 8
    virtual void setSlot(int slot, ::ItemStack const& item, bool fromNetwork) /*override*/;

    // vIndex: 9
    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    // vIndex: 10
    virtual void setData(int id, int value) /*override*/;

    // vIndex: 19
    virtual bool isValid(float pickRange) /*override*/;

    // vIndex: 13
    virtual void broadcastChanges() /*override*/;

    // vIndex: 20
    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FurnaceContainerManagerModel(
        ::HashedString const&                recipeTag,
        ::SharedTypes::Legacy::ContainerType containerType,
        ::BlockActorType                     blockActorType,
        ::ContainerID                        containerId,
        ::Player&                            player,
        ::BlockPos const&                    blockPos
    );

    MCAPI ::FurnaceBlockActor* _getFurnaceEntity();

    MCAPI void _updateResultSlotInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::HashedString const&                recipeTag,
        ::SharedTypes::Legacy::ContainerType containerType,
        ::BlockActorType                     blockActorType,
        ::ContainerID                        containerId,
        ::Player&                            player,
        ::BlockPos const&                    blockPos
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
    MCAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool fromNetwork);

    MCAPI ::ItemStack const& $getSlot(int slot) const;

    MCAPI void $setData(int id, int value);

    MCAPI bool $isValid(float pickRange);

    MCAPI void $broadcastChanges();

    MCAPI ::ContainerScreenContext $_postInit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
