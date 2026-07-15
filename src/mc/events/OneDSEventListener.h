#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/AggregationEventListener.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class OneDSEventListener : public ::Social::Events::AggregationEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkafadd0;
    ::ll::UntypedStorage<8, 80> mUnka7b550;
    ::ll::UntypedStorage<8, 8>  mUnkf9a652;
    ::ll::UntypedStorage<8, 8>  mUnkaf557e;
    ::ll::UntypedStorage<8, 32> mUnk7c0d06;
    ::ll::UntypedStorage<8, 24> mUnke85483;
    ::ll::UntypedStorage<8, 8>  mUnk3d4c0b;
    ::ll::UntypedStorage<4, 4>  mUnkb929d9;
    ::ll::UntypedStorage<8, 32> mUnk10c2ec;
    ::ll::UntypedStorage<8, 32> mUnk6bee5d;
    ::ll::UntypedStorage<8, 32> mUnk480c9f;
    ::ll::UntypedStorage<8, 32> mUnk3cbd4d;
    ::ll::UntypedStorage<8, 32> mUnk50eed5;
    ::ll::UntypedStorage<8, 8>  mUnka96ad9;
    // NOLINTEND

public:
    // prevent constructor by default
    OneDSEventListener& operator=(OneDSEventListener const&);
    OneDSEventListener(OneDSEventListener const&);
    OneDSEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OneDSEventListener() /*override*/ = default;

    virtual void sendEvent(::Social::Events::Event const&) /*override*/;

    virtual int getEventTagsFilter() const /*override*/;

    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const&) const /*override*/;

    virtual void _flushEventQueue() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& ENDPOINT_IDENTIFIER();

    MCNAPI static ::std::string const& ONEDS_URL();

    MCNAPI static ::std::string const& PARTA_IDENTIFIER();

    MCNAPI static ::std::string const& SAFETY_ENDPOINT_IDENTIFIER();

    MCNAPI static ::std::string const& SAFETY_PARTA_IDENTIFIER();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Social::Events
