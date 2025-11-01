#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/AggregationEventListener.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class OneDSEventListener : public ::Social::Events::AggregationEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkafadd0;
    ::ll::UntypedStorage<8, 80> mUnka7b550;
    ::ll::UntypedStorage<8, 8>  mUnkc384c7;
    ::ll::UntypedStorage<8, 8>  mUnkaf557e;
    ::ll::UntypedStorage<8, 32> mUnk6979c9;
    ::ll::UntypedStorage<8, 24> mUnka6d8c6;
    ::ll::UntypedStorage<8, 8>  mUnk3d4c0b;
    ::ll::UntypedStorage<4, 4>  mUnkb929d9;
    ::ll::UntypedStorage<8, 32> mUnkbf3846;
    ::ll::UntypedStorage<8, 32> mUnk489042;
    ::ll::UntypedStorage<8, 32> mUnka6645f;
    ::ll::UntypedStorage<8, 32> mUnk6676ee;
    ::ll::UntypedStorage<8, 32> mUnk5e7b50;
    ::ll::UntypedStorage<8, 8>  mUnk2bd997;
    // NOLINTEND

public:
    // prevent constructor by default
    OneDSEventListener& operator=(OneDSEventListener const&);
    OneDSEventListener(OneDSEventListener const&);
    OneDSEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OneDSEventListener() /*override*/;

    // vIndex: 5
    virtual void sendEvent(::Social::Events::Event const& event) /*override*/;

    // vIndex: 3
    virtual int getEventTagsFilter() const /*override*/;

    // vIndex: 7
    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const& event) const /*override*/;

    // vIndex: 6
    virtual void _flushEventQueue() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    AddPartA(::std::string const& eventName, ::Json::Value& eventBody, int64 eventTimestamp, bool isSafetyEvent);

    MCNAPI void AddPartAExtensions(::Json::Value& eventBody);

    MCNAPI void AddPartC(::Social::Events::Event const& event, ::Json::Value& eventBody);

    MCNAPI explicit OneDSEventListener(::Core::Path logFileName);

    MCNAPI ::std::vector<::std::string> _buildEventPayloads(
        ::std::vector<::Social::Events::Event>                            events,
        ::std::function<void(::std::string const&, ::std::string const&)> onEventSerialized
    );

    MCNAPI bool _sendBatch();

    MCNAPI void _sendEvents(::std::string const& eventPayload, ::std::string const& endpoint);
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
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path logFileName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sendEvent(::Social::Events::Event const& event);

    MCNAPI int $getEventTagsFilter() const;

    MCNAPI bool $_checkAgainstEventAllowlist(::Social::Events::Event const& event) const;

    MCNAPI void $_flushEventQueue();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social::Events
