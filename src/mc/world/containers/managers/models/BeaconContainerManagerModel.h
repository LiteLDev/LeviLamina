#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ContainerScreenContext;
class ItemStack;
// clang-format on

class BeaconContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ContainerModel>> mPaymentContainerModel;
    ::ll::TypedStorage<4, 4, int>                                mPrimaryEffectPreviousId;
    ::ll::TypedStorage<4, 4, int>                                mSecondaryEffectPreviousId;
    ::ll::TypedStorage<4, 4, int>                                mSelectedPrimaryEffectId;
    ::ll::TypedStorage<4, 4, int>                                mSelectedSecondaryEffectId;
    ::ll::TypedStorage<1, 1, bool>                               mEffectSelectionsChanged;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BeaconContainerManagerModel() /*override*/ = default;

    virtual void setSlot(int slot, ::ItemStack const& item, bool fromNetwork) /*override*/;

    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void confirmTransaction(bool isPaymentConfirmed);

    MCNAPI ::std::string getEffectHoverName(int iSlot, bool bSecondaryEffect);

    MCNAPI bool isPaymentAvailable() const;

    MCNAPI bool isSelected(int iSlot, bool isSecondary);

    MCNAPI bool isTierAvailable(int iTier);

    MCNAPI void selectEffect(int iSlot, bool bSecondaryEffect);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setSlot(int slot, ::ItemStack const& item, bool fromNetwork);

    MCNAPI ::ItemStack const& $getSlot(int slot) const;

    MCNAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCNAPI ::ContainerScreenContext $_postInit();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
