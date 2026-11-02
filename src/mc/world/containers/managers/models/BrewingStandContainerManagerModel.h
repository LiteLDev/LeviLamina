#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemInstance;
class ItemStack;
// clang-format on

class BrewingStandContainerManagerModel : public ::ContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    ::ll::TypedStorage<4, 4, int>         mLastTickCount;
    ::ll::TypedStorage<4, 4, int>         mLastFuelAmount;
    ::ll::TypedStorage<4, 4, int>         mLastFuelTotal;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BrewingStandContainerManagerModel() /*override*/ = default;

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
#ifdef LL_PLAT_C
    MCNAPI void fireItemAcquiredEvent(::ItemInstance const& item, int count);

    MCNAPI int getBrewProgress(int max);

    MCNAPI int getBubbleProgress(int);

    MCNAPI int getFuelProgress(int max);

    MCNAPI bool isFinished(int& outputId, int& outputAuxValue, int outputSlot);
#endif
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
