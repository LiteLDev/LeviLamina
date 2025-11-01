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
    // vIndex: 0
    virtual ~ITelemetry() = default;

    // vIndex: 1
    virtual void fireEvent(::std::string const&, ::std::vector<::Social::Events::Property> const&, ::std::vector<::Social::Events::Measurement> const&, bool) = 0;

    // vIndex: 2
    virtual void fireEventOreUIScreenLoadFailed() = 0;

    // vIndex: 3
    virtual void fireEventOreUIJsException() = 0;

    // vIndex: 4
    virtual void fireEventOreUIScreenPerformance(::OreUI::DataTracker const&) = 0;

    // vIndex: 5
    virtual void fireEventButtonPressed(::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) = 0;

    // vIndex: 6
    virtual void fireEventOptionsChanged(::std::string const&, ::std::unordered_map<::std::string, int> const&) = 0;

    // vIndex: 7
    virtual void fireEventModalShown(::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) = 0;

    // vIndex: 8
    virtual void fireEventRealmsStoriesOptIn(::std::string const&, ::std::string const&, ::std::string const&, bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
