#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmsRegionSettings; }
// clang-format on

namespace OreUI {

class RealmRegionSettingsCommandsFacet : public ::OreUI::FacetBase<::OreUI::RealmRegionSettingsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::RealmsRegionSettings>> mRealmsRegionSettings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmRegionSettingsCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void fetchRegions();

    MCAPI void resetLowPingWarning();

    MCAPI void resetRegionStatus();

    MCAPI void saveSelectedServerRegion(::std::string const& realmId);

    MCAPI void setDoNotShowPingWarning(bool doNotShow);

    MCAPI void setSelectedServerRegionIndex(int index);
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
