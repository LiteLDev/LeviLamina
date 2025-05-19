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
    // vIndex: 0
    virtual ~EnchantingContainerManagerModel() /*override*/ = default;

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
    MCNAPI EnchantingContainerManagerModel(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);

    MCNAPI void recalculateOptions();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& NUM_OPTIONS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);
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
