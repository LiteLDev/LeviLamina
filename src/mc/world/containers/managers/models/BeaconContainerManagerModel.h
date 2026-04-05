#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
class BeaconBlockActor;
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
    MCAPI void _sendBeaconPaymentPacket(::BeaconBlockActor& beacon);

    MCAPI void confirmTransaction(bool isPaymentConfirmed);

    MCAPI ::std::string getEffectHoverName(int iSlot, bool bSecondaryEffect);

    MCAPI void selectEffect(int iSlot, bool bSecondaryEffect);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool fromNetwork);

    MCAPI ::ItemStack const& $getSlot(int slot) const;

    MCAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCAPI ::ContainerScreenContext $_postInit();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
