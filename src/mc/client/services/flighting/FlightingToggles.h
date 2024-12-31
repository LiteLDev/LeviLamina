#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/flighting/FlightingToggleId.h"
#include "mc/client/services/flighting/IFlightingToggles.h"

// auto generated forward declare list
// clang-format off
class Option;
struct FlightingToggleMetadata;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class FlightingToggles : public ::IFlightingToggles {
public:
    // FlightingToggles inner types declare
    // clang-format off
    struct FlightingToggle;
    // clang-format on

    // FlightingToggles inner types define
    struct FlightingToggle {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk863502;
        ::ll::UntypedStorage<1, 2>  mUnk67e275;
        ::ll::UntypedStorage<8, 8>  mUnkfabf07;
        ::ll::UntypedStorage<8, 32> mUnk2d9486;
        // NOLINTEND

    public:
        // prevent constructor by default
        FlightingToggle& operator=(FlightingToggle const&);
        FlightingToggle(FlightingToggle const&);
        FlightingToggle();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke341d7;
    ::ll::UntypedStorage<8, 24> mUnk24beb8;
    ::ll::UntypedStorage<8, 32> mUnkd5f918;
    ::ll::UntypedStorage<8, 32> mUnk902ce5;
    // NOLINTEND

public:
    // prevent constructor by default
    FlightingToggles& operator=(FlightingToggles const&);
    FlightingToggles(FlightingToggles const&);
    FlightingToggles();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FlightingToggles() /*override*/ = default;

    // vIndex: 1
    virtual ::gsl::not_null<::Option const*> get(::FlightingToggleId) const /*override*/;

    // vIndex: 2
    virtual void initialize() /*override*/;

    // vIndex: 3
    virtual void
    registerOptionObserverCallback(::Bedrock::PubSub::Subscription&, ::FlightingToggleId, ::std::function<void(::Option const&)>) /*override*/
        ;

    // vIndex: 4
    virtual void visit(::std::function<void(::FlightingToggleMetadata const&)> const&) const /*override*/;

    // vIndex: 5
    virtual void _updateToggle(::std::vector<::std::string> const&, ::FlightingToggles::FlightingToggle&) = 0;
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
