#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/AggregationEventListener.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class PlayStreamEventListener : public ::Social::Events::AggregationEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc208cc;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayStreamEventListener& operator=(PlayStreamEventListener const&);
    PlayStreamEventListener(PlayStreamEventListener const&);
    PlayStreamEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayStreamEventListener() /*override*/ = default;

    // vIndex: 5
    virtual void sendEvent(::Social::Events::Event const&) /*override*/;

    // vIndex: 3
    virtual int getEventTagsFilter() const /*override*/;

    // vIndex: 7
    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const& event) const /*override*/;

    // vIndex: 8
    virtual bool _isListenerReadyForEvents() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Social::Events
