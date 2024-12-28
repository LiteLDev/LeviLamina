#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/RefCountedObject.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class CreateSessionDescriptionObserver; }
namespace webrtc { class RTCError; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace NetherNet {

class CreateSessionDescriptionObserver : public ::rtc::RefCountedObject<::webrtc::CreateSessionDescriptionObserver> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk6231fe;
    ::ll::UntypedStorage<8, 64> mUnk93f2e7;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateSessionDescriptionObserver& operator=(CreateSessionDescriptionObserver const&);
    CreateSessionDescriptionObserver(CreateSessionDescriptionObserver const&);
    CreateSessionDescriptionObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~CreateSessionDescriptionObserver() /*override*/;

    // vIndex: 3
    virtual void OnSuccess(::webrtc::SessionDescriptionInterface* pSessionDescription) /*override*/;

    // vIndex: 4
    virtual void OnFailure(::webrtc::RTCError error) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::CreateSessionDescriptionObserver* Create(
        ::std::function<void(::webrtc::SessionDescriptionInterface*)>&& onSuccess,
        ::std::function<void(::webrtc::RTCError const&)>&&              onError
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnSuccess(::webrtc::SessionDescriptionInterface* pSessionDescription);

    MCAPI void $OnFailure(::webrtc::RTCError error);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
