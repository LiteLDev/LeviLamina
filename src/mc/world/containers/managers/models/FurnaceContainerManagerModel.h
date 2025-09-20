#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class FurnaceBlockActor;
class ItemStack;
class Player;
// clang-format on

class FurnaceContainerManagerModel : public ::ContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>               mBlockPos;
    ::ll::TypedStorage<4, 4, int>                       mLastTickCount;
    ::ll::TypedStorage<4, 4, int>                       mLastLitTime;
    ::ll::TypedStorage<4, 4, int>                       mLastLitDuration;
    ::ll::TypedStorage<4, 4, int>                       mLastStoredXP;
    ::ll::TypedStorage<4, 4, int>                       mLastInputId;
    ::ll::TypedStorage<4, 4, int>                       mLastInputAux;
    ::ll::TypedStorage<8, 32, ::std::string>            mLastOutputName;
    ::ll::TypedStorage<4, 4, int>                       mLastResultDisplayId;
    ::ll::TypedStorage<1, 1, ::BlockActorType const>    mBlockActorType;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName const> mIngredientContainerName;
    ::ll::TypedStorage<8, 48, ::HashedString const>     mRecipeTag;
    // NOLINTEND

public:
    // prevent constructor by default
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
    MCNAPI FurnaceContainerManagerModel(
        ::HashedString const&                recipeTag,
        ::SharedTypes::Legacy::ContainerType containerType,
        ::BlockActorType                     blockActorType,
        ::ContainerID                        containerId,
        ::Player&                            player,
        ::BlockPos const&                    blockPos
    );

    MCNAPI ::FurnaceBlockActor* _getFurnaceEntity();

    MCNAPI void _updateResultSlotInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCNAPI void $setSlot(int slot, ::ItemStack const& item, bool fromNetwork);

    MCNAPI ::ItemStack const& $getSlot(int slot) const;

    MCNAPI void $setData(int id, int value);

    MCNAPI bool $isValid(float pickRange);

    MCNAPI void $broadcastChanges();

    MCNAPI ::ContainerScreenContext $_postInit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
