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
    // virtual functions
    // NOLINTBEGIN
    virtual ~XboxLiveTelemetry() /*override*/ = default;

    virtual void sendEvent(::Social::Events::Event const& event) /*override*/;

    virtual int getEventTagsFilter() const /*override*/;

    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const& event) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $sendEvent(::Social::Events::Event const& event);

    MCNAPI int $getEventTagsFilter() const;

    MCNAPI bool $_checkAgainstEventAllowlist(::Social::Events::Event const& event) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social::Events
