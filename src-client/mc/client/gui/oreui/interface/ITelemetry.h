#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct DataTracker; }
namespace Social::Events { class Measurement; }
namespace Social::Events { class Property; }
// clang-format on

namespace OreUI {

class ITelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITelemetry() = default;

    virtual void fireEvent(
        ::std::string const&,
        ::std::vector<::Social::Events::Property> const&,
        ::std::vector<::Social::Events::Measurement> const&,
        bool
    ) = 0;

    virtual void fireEventOreUIScreenLoadFailed() = 0;

    virtual void fireEventOreUIJsException() = 0;

    virtual void fireEventOreUIScreenPerformance(::OreUI::DataTracker const&) = 0;

    virtual void
    fireEventButtonPressed(::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) = 0;

    virtual void fireEventOptionsChanged(::std::string const&, ::std::unordered_map<::std::string, int> const&) = 0;

    virtual void
    fireEventModalShown(::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) = 0;

    virtual void
    fireEventRealmsStoriesOptIn(::std::string const&, ::std::string const&, ::std::string const&, bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
