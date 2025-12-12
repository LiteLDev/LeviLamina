#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ITelemetry.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct DataTracker; }
namespace Social::Events { class Measurement; }
namespace Social::Events { class Property; }
// clang-format on

namespace OreUI {

class Telemetry : public ::OreUI::ITelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1ea872;
    ::ll::UntypedStorage<8, 8> mUnkdb2cbf;
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
#ifdef LL_PLAT_C
    MCNAPI void $fireEvent(
        ::std::string const&                                eventName,
        ::std::vector<::Social::Events::Property> const&    properties,
        ::std::vector<::Social::Events::Measurement> const& measurements,
        bool                                                shouldAggregate
    );

    MCNAPI void $fireEventOreUIScreenLoadFailed();

    MCNAPI void $fireEventOreUIJsException();

    MCNAPI void $fireEventOreUIScreenPerformance(::OreUI::DataTracker const& dataTracker);

    MCNAPI void $fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    );

    MCNAPI void $fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    );

    MCNAPI void
    $fireEventOptionsChanged(::std::string const& optionsGroup, ::std::unordered_map<::std::string, int> const& events);

    MCNAPI void $fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool                 isOwner
    );
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
