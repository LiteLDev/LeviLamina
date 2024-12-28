#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/AggregationEventListener.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class XboxLiveTelemetry : public ::Social::Events::AggregationEventListener {
public:
    // prevent constructor by default
    XboxLiveTelemetry& operator=(XboxLiveTelemetry const&);
    XboxLiveTelemetry(XboxLiveTelemetry const&);
    XboxLiveTelemetry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~XboxLiveTelemetry() /*override*/;

    // vIndex: 5
    virtual void sendEvent(::Social::Events::Event const&) /*override*/;

    // vIndex: 3
    virtual int getEventTagsFilter() const /*override*/;

    // vIndex: 7
    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const& event) const /*override*/;
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
    // NOLINTEND
};

} // namespace Social::Events
