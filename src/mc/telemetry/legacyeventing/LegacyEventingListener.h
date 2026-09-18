#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/AggregationEventListener.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

namespace Telemetry::Legacy {

class LegacyEventingListener : public ::Social::Events::AggregationEventListener {
public:
    // LegacyEventingListener inner types declare
    // clang-format off
    struct TELEMETRY_ENDPOINT;
    // clang-format on

    // LegacyEventingListener inner types define
    struct TELEMETRY_ENDPOINT {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkcdd796;
    ::ll::UntypedStorage<8, 80> mUnkcc75ad;
    ::ll::UntypedStorage<8, 8>  mUnk3f4db1;
    ::ll::UntypedStorage<8, 24> mUnk1cf268;
    ::ll::UntypedStorage<8, 8>  mUnk53c684;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyEventingListener& operator=(LegacyEventingListener const&);
    LegacyEventingListener(LegacyEventingListener const&);
    LegacyEventingListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyEventingListener() /*override*/ = default;

    virtual void sendEvent(::Social::Events::Event const&) /*override*/;

    virtual int getEventTagsFilter() const /*override*/;

    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const& event) const /*override*/;

    virtual void _flushEventQueue() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& TELEMETRY_ENDPOINT();
    // NOLINTEND
};

} // namespace Telemetry::Legacy
