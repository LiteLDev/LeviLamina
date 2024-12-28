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
    // prevent constructor by default
    PlayStreamEventListener& operator=(PlayStreamEventListener const&);
    PlayStreamEventListener(PlayStreamEventListener const&);
    PlayStreamEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayStreamEventListener() /*override*/;

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $sendEvent(::Social::Events::Event const&);

    MCAPI int $getEventTagsFilter() const;

    MCAPI bool $_checkAgainstEventAllowlist(::Social::Events::Event const& event) const;

    MCAPI bool $_isListenerReadyForEvents() const;
    // NOLINTEND
};

} // namespace Social::Events
