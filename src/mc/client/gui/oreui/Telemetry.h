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
    // vIndex: 1
    virtual void fireEvent(
        ::std::string const&,
        ::std::vector<::Social::Events::Property> const&,
        ::std::vector<::Social::Events::Measurement> const&,
        bool
    ) /*override*/;

    // vIndex: 2
    virtual void fireEventOreUIScreenLoadFailed() /*override*/;

    // vIndex: 3
    virtual void fireEventOreUIJsException() /*override*/;

    // vIndex: 4
    virtual void fireEventOreUIScreenPerformance(::OreUI::DataTracker const&) /*override*/;

    // vIndex: 5
    virtual void
    fireEventButtonPressed(::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) /*override*/
        ;

    // vIndex: 7
    virtual void
    fireEventModalShown(::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) /*override*/;

    // vIndex: 6
    virtual void
    fireEventOptionsChanged(::std::string const&, ::std::unordered_map<::std::string, int> const&) /*override*/;

    // vIndex: 8
    virtual void
    fireEventRealmsStoriesOptIn(::std::string const&, ::std::string const&, ::std::string const&, bool) /*override*/;

    // vIndex: 0
    virtual ~Telemetry() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
