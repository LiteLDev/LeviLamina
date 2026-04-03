#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/network/realms/World.h"

// auto generated forward declare list
// clang-format off
class PlayScreenModel;
namespace OreUI { struct RealmSlot; }
// clang-format on

namespace OreUI {

class RealmSlotsFacet : public ::OreUI::FacetBase<::OreUI::RealmSlotsFacet> {
public:
    // RealmSlotsFacet inner types define
    enum class FacetStatus : uchar {
        Idle                              = 0,
        LoadingSelectedRealmDetails       = 1,
        FailedToQuerySelectedRealmDetails = 2,
        LoadingActivatingSlot             = 3,
        FailedToActivateSlot              = 4,
        SlotSelected                      = 5,
        ShowingConfirmationModal          = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>> mPlayScreenModel;
    ::ll::TypedStorage<4, 4, int>                                   mSelectedRealmIndex;
    ::ll::TypedStorage<8, 8, ::Realms::RealmId>                     mSelectedRealmId;
    ::ll::TypedStorage<8, 32, ::std::string>                        mSelectedRealmName;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RealmSlot>>    mRealmSlots;
    ::ll::TypedStorage<4, 4, int>                                   mActiveSlotIndex;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>              isAlive;
    ::ll::TypedStorage<8, 656, ::Realms::World>                     mCachedWorld;
    ::ll::TypedStorage<1, 1, ::OreUI::RealmSlotsFacet::FacetStatus> mStatus;
    ::ll::TypedStorage<1, 1, ::OreUI::RealmSlotsFacet::FacetStatus> mCurrentStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmSlotsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~RealmSlotsFacet() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmSlotsFacet(::std::shared_ptr<::PlayScreenModel> playScreenModel);

    MCAPI void activateSlot(int index);

    MCAPI void confirm();

    MCAPI bool didFailToActivateSlot() const;

    MCAPI bool didFailToQuerySelectedRealmDetails() const;

    MCFOLD ::std::vector<::OreUI::RealmSlot> const& getRealmSlots() const;

    MCAPI void getSelectedRealmDetails(::std::string const& realmId);

    MCAPI bool isLoading() const;

    MCAPI bool isShowingConfirmationModal() const;

    MCAPI bool isSlotSelected() const;

    MCAPI void reset();

    MCAPI void selectSlot(int index);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::PlayScreenModel> playScreenModel);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
