#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/IEventListener.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Core { class Path; }
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class AggregationEventListener : public ::Social::Events::IEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5906f0;
    ::ll::UntypedStorage<8, 8> mUnk6d36a6;
    ::ll::UntypedStorage<1, 1> mUnka30829;
    ::ll::UntypedStorage<8, 32> mUnk3b4146;
    ::ll::UntypedStorage<8, 80> mUnk9aa06e;
    ::ll::UntypedStorage<8, 296> mUnk7e3094;
    ::ll::UntypedStorage<8, 80> mUnk63885d;
    ::ll::UntypedStorage<8, 64> mUnk2b7477;
    ::ll::UntypedStorage<8, 64> mUnk6c4f66;
    ::ll::UntypedStorage<8, 64> mUnkc7e0b3;
    ::ll::UntypedStorage<1, 1> mUnk76b524;
    ::ll::UntypedStorage<4, 4> mUnkd93415;
    ::ll::UntypedStorage<4, 4> mUnk2079a4;
    ::ll::UntypedStorage<4, 4> mUnk5e5b2e;
    ::ll::UntypedStorage<4, 4> mUnkdb1c91;
    // NOLINTEND

public:
    // prevent constructor by default
    AggregationEventListener& operator=(AggregationEventListener const&);
    AggregationEventListener(AggregationEventListener const&);
    AggregationEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AggregationEventListener() /*override*/;

    // vIndex: 1
    virtual void recordEvent(::Social::Events::Event const& event, ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform) /*override*/;

    // vIndex: 2
    virtual void sendEvents(bool forceSend) /*override*/;

    // vIndex: 5
    virtual void sendEvent(::Social::Events::Event const&) = 0;

    // vIndex: 4
    virtual void stopDebugEventLogging() /*override*/;

    // vIndex: 6
    virtual void _flushEventQueue();

    // vIndex: 7
    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const& event) const;

    // vIndex: 8
    virtual bool _isListenerReadyForEvents() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AggregationEventListener(::Core::Path const& logFileName);

    MCNAPI bool _needToSendAggregatedEvents() const;

    MCNAPI void _recordAggregatedEvent(::Social::Events::Event const& event, ::std::unordered_map<::std::string, ::std::deque<::Social::Events::Event>>& eventQueue);

    MCNAPI void _sendCustomAggregatedEvents(bool forceSend);

    MCNAPI void _sendEvents(::std::unordered_map<::std::string, ::std::deque<::Social::Events::Event>>& queueToSend);

    MCNAPI void _sendNextEvent(::std::unordered_map<::std::string, ::std::deque<::Social::Events::Event>>& queueToSend);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const& logFileName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $recordEvent(::Social::Events::Event const& event, ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform);

    MCNAPI void $sendEvents(bool forceSend);

    MCNAPI void $stopDebugEventLogging();

    MCNAPI void $_flushEventQueue();

    MCNAPI bool $_checkAgainstEventAllowlist(::Social::Events::Event const& event) const;

    MCNAPI bool $_isListenerReadyForEvents() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
