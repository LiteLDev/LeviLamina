#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct User; }
// clang-format on

namespace OreUI {

class PrivacyAndOnlineSafetyFacet : public ::OreUI::FacetBase<::OreUI::PrivacyAndOnlineSafetyFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Social::User>> mUser;
    ::ll::TypedStorage<1, 1, bool>                             mDirty;
    ::ll::TypedStorage<1, 1, bool const>                       mStatus_DEPRECATED;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~PrivacyAndOnlineSafetyFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void doPermissionCheck();

    MCAPI bool getAllowCapturesResult() const;

    MCAPI bool getClubCheckResult() const;

    MCAPI bool getMultiplayerCheckResult() const;
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
