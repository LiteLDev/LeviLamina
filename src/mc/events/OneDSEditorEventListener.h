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

class OneDSEditorEventListener : public ::Social::Events::AggregationEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk8228d9;
    ::ll::UntypedStorage<8, 8>  mUnkfa9982;
    ::ll::UntypedStorage<8, 8>  mUnk1b321f;
    ::ll::UntypedStorage<8, 24> mUnk534f95;
    ::ll::UntypedStorage<8, 24> mUnkdfe2f1;
    ::ll::UntypedStorage<8, 8>  mUnka936b9;
    ::ll::UntypedStorage<4, 4>  mUnk5e9a8b;
    ::ll::UntypedStorage<8, 32> mUnk1d0f8b;
    ::ll::UntypedStorage<8, 32> mUnkf43964;
    ::ll::UntypedStorage<8, 32> mUnkec1236;
    ::ll::UntypedStorage<8, 32> mUnkceea33;
    ::ll::UntypedStorage<8, 32> mUnk5e2dc9;
    // NOLINTEND

public:
    // prevent constructor by default
    OneDSEditorEventListener& operator=(OneDSEditorEventListener const&);
    OneDSEditorEventListener(OneDSEditorEventListener const&);
    OneDSEditorEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OneDSEditorEventListener() /*override*/;

    // vIndex: 5
    virtual void sendEvent(::Social::Events::Event const& event) /*override*/;

    // vIndex: 3
    virtual int getEventTagsFilter() const /*override*/;

    // vIndex: 6
    virtual void _flushEventQueue() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddPartA(::std::string const& eventName, ::Json::Value& eventBody, int64 eventTimestamp);

    MCNAPI void AddPartAExtensions(::Json::Value& eventBody);

    MCNAPI void AddPartC(::Social::Events::Event const& event, ::Json::Value& eventBody);

    MCNAPI explicit OneDSEditorEventListener(::Core::Path logFileName);

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

    MCNAPI static ::std::string const& EVENT_NAMESPACE();

    MCNAPI static ::std::string const& ONEDS_URL();

    MCNAPI static ::std::string const& PARTA_IDENTIFIER();
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

    MCNAPI void $_flushEventQueue();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social::Events
