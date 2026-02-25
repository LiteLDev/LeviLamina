#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/TelemetryBatcher.h"
#include "mc/client/gui/oreui/binding/FacetBase.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ITelemetry; }
namespace OreUI { struct EventMeasurement; }
namespace OreUI { struct EventProperty; }
// clang-format on

namespace OreUI {

class TelemetryFacet : public ::OreUI::FacetBase<::OreUI::TelemetryFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::OreUI::TelemetryBatcher> mTelemetryBatcher;
    ::ll::TypedStorage<8, 8, ::OreUI::ITelemetry&>       mTelemetry;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryFacet& operator=(TelemetryFacet const&);
    TelemetryFacet(TelemetryFacet const&);
    TelemetryFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~TelemetryFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void discardTrackedOptions();

    MCAPI void fireEvent(
        ::std::string const&                                                                   eventName,
        ::std::unordered_map<::std::string, ::OreUI::EventProperty> const&                     eventProperties,
        ::std::optional<::std::unordered_map<::std::string, ::OreUI::EventMeasurement>> const& eventMeasurements,
        ::std::optional<bool>                                                                  shouldAggregate
    );

    MCAPI void fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    );

    MCAPI void fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    );

    MCAPI void fireEventOptionsChanged(::std::string const& optionsGroup);

    MCAPI void fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool                 isOwner
    );

    MCAPI void trackOptionChanged(::std::string const& optionName, int oldOption, int newOption);
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
