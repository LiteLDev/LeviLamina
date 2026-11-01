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
    MCNAPI bool getDoNotAddonStackingWarning() const;

    MCNAPI bool getDoNotShowAlternativeStorageHasWorlds() const;

    MCNAPI bool getDoNotShowEntitlementWarning() const;

    MCNAPI bool getDoNotShowExperimentalWorldWarning(::std::string const& worldID) const;

    MCNAPI bool getDoNotShowFriendsListFTUE() const;

    MCNAPI bool getDoNotShowHardcoreModeWarning() const;

    MCNAPI bool getDoNotShowHardcoreModeWarningThisJoin() const;

    MCNAPI bool getDoNotShowHiddenAlternativeStorageWorldsWarning() const;

    MCNAPI bool getDoNotShowHiddenLocalWorldsWarning() const;

    MCNAPI bool getDoNotShowManageShowcaseClearWarning() const;

    MCNAPI bool getDoNotShowManageShowcaseReplaceWarning() const;

    MCNAPI bool getDoNotShowMarioMashUpWarning() const;

    MCNAPI bool getDoNotShowMultiplayerIpSafetyWarning() const;

    MCNAPI bool getDoNotShowMultiplayerOnlineSafetyWarning() const;

    MCNAPI bool getDoNotShowNonPublicServerWarning() const;

    MCNAPI bool getDoNotShowNotFollowingPartyWarning() const;

    MCNAPI bool getDoNotShowOldWorldsWarning() const;

    MCNAPI bool getDoNotShowPartiesNotSupportedWarning() const;

    MCNAPI bool getDoNotShowPartyAddMembersToRealmModal() const;

    MCNAPI bool getDoNotShowPartyPermissionRequiredRealmsWarning() const;

    MCNAPI bool getDoNotShowPartyTabFTUE() const;

    MCNAPI bool getDoNotShowPartyWorldCapacityRealmsWarning() const;

    MCNAPI bool getDoNotShowStorageLowWarning() const;

    MCNAPI bool getDoNotShowUnavailableDependenciesBeta() const;

    MCNAPI bool getDoNotShowUsingExternalStorageWarning() const;

    MCNAPI bool getdoNotShowManageFeedDeleteWarning() const;

    MCNAPI void resetPartyJoinRealmsWarnings();

    MCNAPI void setDoNotAddonStackingWarning(bool newValue);

    MCNAPI void setDoNotShowAlternativeStorageHasWorlds(bool newValue);

    MCNAPI void setDoNotShowEntitlementWarning(bool newValue);

    MCNAPI void setDoNotShowExperimentalWorldWarning(::std::string const& worldID, bool const shouldNotShow);

    MCNAPI void setDoNotShowFriendsListFTUE(bool newValue);

    MCNAPI void setDoNotShowHardcoreModeWarning(bool newValue);

    MCNAPI void setDoNotShowHardcoreModeWarningThisJoin(bool newValue);

    MCNAPI void setDoNotShowHiddenAlternativeStorageWorldsWarning(bool newValue);

    MCNAPI void setDoNotShowHiddenLocalWorldsWarning(bool newValue);

    MCNAPI void setDoNotShowManageShowcaseClearWarning(bool newValue);

    MCNAPI void setDoNotShowManageShowcaseReplaceWarning(bool newValue);

    MCNAPI void setDoNotShowMarioMashUpWarning(bool newValue);

    MCNAPI void setDoNotShowMultiplayerIpSafetyWarning(bool newValue);

    MCNAPI void setDoNotShowMultiplayerOnlineSafetyWarning(bool newValue);

    MCNAPI void setDoNotShowNonPublicServerWarning(bool newValue);

    MCNAPI void setDoNotShowNotFollowingPartyWarning(bool newValue);

    MCNAPI void setDoNotShowOldWorldsWarning(bool newValue);

    MCNAPI void setDoNotShowPartiesNotSupportedWarning(bool newValue);

    MCNAPI void setDoNotShowPartyAddMembersToRealmModal(bool newValue);

    MCNAPI void setDoNotShowPartyPermissionRequiredRealmsWarning(bool newValue);

    MCNAPI void setDoNotShowPartyTabFTUE(bool newValue);

    MCNAPI void setDoNotShowPartyWorldCapacityRealmsWarning(bool newValue);

    MCNAPI void setDoNotShowStorageLowWarning(bool newValue);

    MCNAPI void setDoNotShowUnavailableDependenciesBeta(bool newValue);

    MCNAPI void setDoNotShowUsingExternalStorageWarning(bool newValue);

    MCNAPI void setdoNotShowManageFeedDeleteWarning(bool newValue);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
