#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/AggregationEventListener.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class OneDSEditorEventListener : public ::Social::Events::AggregationEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk8228d9;
    ::ll::UntypedStorage<8, 8>  mUnk387a2d;
    ::ll::UntypedStorage<8, 8>  mUnk470474;
    ::ll::UntypedStorage<8, 24> mUnk2c3202;
    ::ll::UntypedStorage<8, 24> mUnk8729a6;
    ::ll::UntypedStorage<8, 8>  mUnka936b9;
    ::ll::UntypedStorage<4, 4>  mUnk5e9a8b;
    ::ll::UntypedStorage<8, 32> mUnk7c1190;
    ::ll::UntypedStorage<8, 32> mUnkd5fb8b;
    ::ll::UntypedStorage<8, 32> mUnkbebd7e;
    ::ll::UntypedStorage<8, 32> mUnk8c0c42;
    ::ll::UntypedStorage<8, 32> mUnkc5d5c2;
    // NOLINTEND

public:
    // prevent constructor by default
    OneDSEditorEventListener& operator=(OneDSEditorEventListener const&);
    OneDSEditorEventListener(OneDSEditorEventListener const&);
    OneDSEditorEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OneDSEditorEventListener() /*override*/ = default;

    virtual void sendEvent(::Social::Events::Event const&) /*override*/;

    virtual int getEventTagsFilter() const /*override*/;

    virtual void _flushEventQueue() /*override*/;
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Social::Events
