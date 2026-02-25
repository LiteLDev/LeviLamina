#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ITelemetry.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftEventing;
namespace OreUI { struct DataTracker; }
namespace Social::Events { class Measurement; }
namespace Social::Events { class Property; }
// clang-format on

namespace OreUI {

class Telemetry : public ::OreUI::ITelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>    mClientInstance;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    Telemetry& operator=(Telemetry const&);
    Telemetry(Telemetry const&);
    Telemetry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void fireEvent(
        ::std::string const&                                eventName,
        ::std::vector<::Social::Events::Property> const&    properties,
        ::std::vector<::Social::Events::Measurement> const& measurements,
        bool                                                shouldAggregate
    ) /*override*/;

    virtual void fireEventOreUIScreenLoadFailed() /*override*/;

    virtual void fireEventOreUIJsException() /*override*/;

    virtual void fireEventOreUIScreenPerformance(::OreUI::DataTracker const& dataTracker) /*override*/;

    virtual void fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) /*override*/;

    virtual void fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) /*override*/;

    virtual void fireEventOptionsChanged(
        ::std::string const&                            optionsGroup,
        ::std::unordered_map<::std::string, int> const& events
    ) /*override*/;

    virtual void fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool                 isOwner
    ) /*override*/;

    virtual ~Telemetry() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $fireEvent(
        ::std::string const&                                eventName,
        ::std::vector<::Social::Events::Property> const&    properties,
        ::std::vector<::Social::Events::Measurement> const& measurements,
        bool                                                shouldAggregate
    );

    MCAPI void $fireEventOreUIScreenLoadFailed();

    MCAPI void $fireEventOreUIJsException();

    MCAPI void $fireEventOreUIScreenPerformance(::OreUI::DataTracker const& dataTracker);

    MCAPI void $fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    );

    MCAPI void $fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    );

    MCAPI void
    $fireEventOptionsChanged(::std::string const& optionsGroup, ::std::unordered_map<::std::string, int> const& events);

    MCAPI void $fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool                 isOwner
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
