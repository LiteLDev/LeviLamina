#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/services/flighting/FlightingTreatmentId.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace OreUI { class UserDefinedFeatureFlags; }
// clang-format on

namespace OreUI {

class FeatureFlagsFacet : public ::OreUI::FacetBase<::OreUI::FeatureFlagsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::UserDefinedFeatureFlags*>   mUserFeatureFlags;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>       mAllFeatureFlags;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>       mSystemFeatureFlags;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string> const> mEmptyFlags;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureFlagsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~FeatureFlagsFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FeatureFlagsFacet(
        ::IClientInstance&                clientInstance,
        ::OreUI::UserDefinedFeatureFlags* userFlags,
        bool                              isPartySystemAvailable
    );

    MCAPI void _addDeprecatedFlags(::IClientInstance& clientInstance);

    MCAPI void _addEditorFlags(::IClientInstance& clientInstance);

    MCAPI void _addFlightingToggleFlag(::std::string const& flagName, ::FlightingTreatmentId flightingToggleId);

    MCAPI void _addFlightingToggleFlags();

    MCAPI void _addMarketplaceDiscoveryEnviromentFlags();

    MCAPI void _addNewPlayerFlowFlag(::IClientInstance& clientInstance);

    MCAPI void _addRealmsFlags(::IClientInstance& clientInstance);

    MCAPI void _finalizeFeatureFlags();

    MCFOLD ::std::vector<::std::string> const& getAllFeatureFlags() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::IClientInstance& clientInstance, ::OreUI::UserDefinedFeatureFlags* userFlags, bool isPartySystemAvailable);
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
