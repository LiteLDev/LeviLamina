#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/flighting/FlightingToggles.h"

class TreatmentFlightingToggles : public ::FlightingToggles {
public:
    // prevent constructor by default
    TreatmentFlightingToggles& operator=(TreatmentFlightingToggles const&);
    TreatmentFlightingToggles(TreatmentFlightingToggles const&);
    TreatmentFlightingToggles();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TreatmentFlightingToggles() /*override*/;

    // vIndex: 5
    virtual void _updateToggle(::std::vector<::std::string> const&, ::FlightingToggles::FlightingToggle&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_updateToggle(::std::vector<::std::string> const&, ::FlightingToggles::FlightingToggle&);
    // NOLINTEND
};
