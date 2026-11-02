#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsRegionSettings; }
// clang-format on

namespace OreUI {

class RealmRegionSettingsCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmRegionSettingsCommandsFacet> {
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
    MCNAPI void fetchRegions();

    MCNAPI void resetLowPingWarning();

    MCNAPI void resetRegionStatus();

    MCNAPI void saveSelectedServerRegion(::std::string const& realmId);

    MCNAPI void setDoNotShowPingWarning(bool doNotShow);

    MCNAPI void setSelectedServerRegionIndex(int index);
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
