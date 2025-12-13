#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemEnchantOption;
class ItemStack;
class Player;
// clang-format on

class EnchantingContainerManagerModel : public ::ContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                mBlockPos;
    ::ll::TypedStorage<1, 1, bool>                                                       mShouldBookBeOpen;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemEnchantOption>>                        mEnchantOptions;
    ::ll::TypedStorage<8, 64, ::std::function<void(::EnchantingContainerManagerModel&)>> mOptionsChangedCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    EnchantingContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantingContainerManagerModel() /*override*/ = default;

    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    virtual void setSlot(int slot, ::ItemStack const& item, bool fromNetwork) /*override*/;

    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    virtual void setData(int id, int value) /*override*/;

    virtual bool isValid(float pickRange) /*override*/;

    virtual void broadcastChanges() /*override*/;

    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EnchantingContainerManagerModel(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);

    MCAPI void recalculateOptions();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& NUM_OPTIONS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool fromNetwork);

    MCAPI ::ItemStack const& $getSlot(int slot) const;

    MCFOLD void $setData(int id, int value);

    MCAPI bool $isValid(float pickRange);

    MCFOLD void $broadcastChanges();

    MCAPI ::ContainerScreenContext $_postInit();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
