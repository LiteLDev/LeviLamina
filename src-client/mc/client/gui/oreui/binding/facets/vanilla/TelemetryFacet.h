#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/TelemetryBatcher.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ITelemetry; }
// clang-format on

namespace OreUI {

class TelemetryFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::TelemetryFacet> {
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TelemetryFacet(::OreUI::ITelemetry& telemetry);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ITelemetry& telemetry);
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
