#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

namespace OreUI {

class NotificationOptionsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::NotificationOptionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&> mOptions;
    ::ll::TypedStorage<1, 1, bool>               mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    NotificationOptionsFacet& operator=(NotificationOptionsFacet const&);
    NotificationOptionsFacet(NotificationOptionsFacet const&);
    NotificationOptionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool getDoNotAddonStackingWarning() const;

    MCAPI bool getDoNotShowAlternativeStorageHasWorlds() const;

    MCAPI bool getDoNotShowEntitlementWarning() const;

    MCAPI bool getDoNotShowExperimentalWorldWarning(::std::string const& worldID) const;

    MCAPI bool getDoNotShowFriendsListFTUE() const;

    MCAPI bool getDoNotShowHardcoreModeWarning() const;

    MCAPI bool getDoNotShowHiddenAlternativeStorageWorldsWarning() const;

    MCAPI bool getDoNotShowHiddenLocalWorldsWarning() const;

    MCAPI bool getDoNotShowManageShowcaseClearWarning() const;

    MCAPI bool getDoNotShowManageShowcaseReplaceWarning() const;

    MCAPI bool getDoNotShowMultiplayerIpSafetyWarning() const;

    MCAPI bool getDoNotShowMultiplayerOnlineSafetyWarning() const;

    MCAPI bool getDoNotShowNotFollowingPartyWarning() const;

    MCAPI bool getDoNotShowOldWorldsWarning() const;

    MCAPI bool getDoNotShowPartiesNotSupportedWarning() const;

    MCAPI bool getDoNotShowPartyAddMembersToRealmModal() const;

    MCAPI bool getDoNotShowPartyPermissionRequiredRealmsWarning() const;

    MCAPI bool getDoNotShowPartyTabFTUE() const;

    MCAPI bool getDoNotShowPartyWorldCapacityRealmsWarning() const;

    MCAPI bool getDoNotShowStorageLowWarning() const;

    MCAPI bool getDoNotShowUsingExternalStorageWarning() const;

    MCAPI bool getdoNotShowManageFeedDeleteWarning() const;

    MCAPI void resetPartyJoinRealmsWarnings();

    MCAPI void setDisableHardcoreModeWarningOnce(bool newValue);

    MCAPI void setDoNotAddonStackingWarning(bool newValue);

    MCAPI void setDoNotShowAlternativeStorageHasWorlds(bool newValue);

    MCAPI void setDoNotShowEntitlementWarning(bool newValue);

    MCAPI void setDoNotShowExperimentalWorldWarning(::std::string const& worldID, bool const shouldNotShow);

    MCAPI void setDoNotShowFriendsListFTUE(bool newValue);

    MCAPI void setDoNotShowHardcoreModeWarning(bool newValue);

    MCAPI void setDoNotShowHiddenAlternativeStorageWorldsWarning(bool newValue);

    MCAPI void setDoNotShowHiddenLocalWorldsWarning(bool newValue);

    MCAPI void setDoNotShowManageShowcaseClearWarning(bool newValue);

    MCAPI void setDoNotShowManageShowcaseReplaceWarning(bool newValue);

    MCAPI void setDoNotShowMultiplayerIpSafetyWarning(bool newValue);

    MCAPI void setDoNotShowMultiplayerOnlineSafetyWarning(bool newValue);

    MCAPI void setDoNotShowNotFollowingPartyWarning(bool newValue);

    MCAPI void setDoNotShowOldWorldsWarning(bool newValue);

    MCAPI void setDoNotShowPartiesNotSupportedWarning(bool newValue);

    MCAPI void setDoNotShowPartyAddMembersToRealmModal(bool newValue);

    MCAPI void setDoNotShowPartyPermissionRequiredRealmsWarning(bool newValue);

    MCAPI void setDoNotShowPartyTabFTUE(bool newValue);

    MCAPI void setDoNotShowPartyWorldCapacityRealmsWarning(bool newValue);

    MCAPI void setDoNotShowStorageLowWarning(bool newValue);

    MCAPI void setDoNotShowUsingExternalStorageWarning(bool newValue);

    MCAPI void setdoNotShowManageFeedDeleteWarning(bool newValue);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
