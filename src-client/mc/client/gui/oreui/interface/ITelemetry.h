#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct DataTracker; }
namespace Social::Events { class Measurement; }
namespace Social::Events { class OptionChange; }
namespace Social::Events { class Property; }
// clang-format on

namespace OreUI {

class ITelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITelemetry() = default;

    virtual void fireEvent(
        ::std::string const&                                eventName,
        ::std::vector<::Social::Events::Property> const&    properties,
        ::std::vector<::Social::Events::Measurement> const& measurements,
        bool                                                shouldAggregate
    ) = 0;

    virtual void fireEventOreUIScreenLoadFailed() = 0;

    virtual void fireEventOreUIJsException() = 0;

    virtual void fireEventOreUIScreenPerformance(::OreUI::DataTracker const& dataTracker) = 0;

    virtual void fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) = 0;

    virtual void fireEventOptionsChanged(
        ::std::string const&                            optionsGroup,
        ::std::unordered_map<::std::string, int> const& events
    ) = 0;

    virtual void fireEventOptionsChangedAlt(
        ::std::string const&                                                       optionsGroup,
        ::std::unordered_map<::std::string, ::Social::Events::OptionChange> const& changes
    ) = 0;

    virtual void fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) = 0;

    virtual void fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool                 isOwner
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
