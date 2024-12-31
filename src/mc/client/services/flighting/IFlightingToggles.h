#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/flighting/FlightingToggleId.h"

// auto generated forward declare list
// clang-format off
class Option;
struct FlightingToggleMetadata;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class IFlightingToggles {
public:
    // prevent constructor by default
    IFlightingToggles& operator=(IFlightingToggles const&);
    IFlightingToggles(IFlightingToggles const&);
    IFlightingToggles();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFlightingToggles() = default;

    // vIndex: 1
    virtual ::gsl::not_null<::Option const*> get(::FlightingToggleId) const = 0;

    // vIndex: 2
    virtual void initialize() = 0;

    // vIndex: 3
    virtual void
    registerOptionObserverCallback(::Bedrock::PubSub::Subscription&, ::FlightingToggleId, ::std::function<void(::Option const&)>) = 0;

    // vIndex: 4
    virtual void visit(::std::function<void(::FlightingToggleMetadata const&)> const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
