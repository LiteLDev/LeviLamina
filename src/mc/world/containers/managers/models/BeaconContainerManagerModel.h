#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
class BeaconBlockActor;
class BlockPos;
class ContainerModel;
class ContainerScreenContext;
class ItemStack;
class Player;
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
    // prevent constructor by default
    BeaconContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BeaconContainerManagerModel() /*override*/ = default;

    virtual void setSlot(int slot, ::ItemStack const& item, bool) /*override*/;

    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BeaconContainerManagerModel(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);

#ifdef LL_PLAT_C
    MCAPI void _sendBeaconPaymentPacket(::BeaconBlockActor& beacon);

    MCAPI void confirmTransaction(bool isPaymentConfirmed);

    MCAPI ::std::string getEffectHoverName(int iSlot, bool bSecondaryEffect);

    MCFOLD ::std::shared_ptr<::ContainerModel> getPaymentContainerModel();

    MCFOLD int getSelectedPrimaryEffectId() const;

    MCAPI int getSelectedSecondaryEffectId() const;

    MCAPI bool hasPrimarySelection() const;

    MCFOLD bool haveEffectsChanged();

    MCAPI bool isAnyEffectValid();

    MCAPI bool isPaymentAvailable() const;

    MCAPI bool isSecondaryEffect(int iSlot);

    MCAPI bool isSelected(int iSlot, bool isSecondary);

    MCAPI bool isTierAvailable(int iTier);

    MCAPI void selectEffect(int iSlot, bool bSecondaryEffect);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool);

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
