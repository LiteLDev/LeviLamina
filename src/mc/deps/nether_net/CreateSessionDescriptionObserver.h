#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/RefCountedObject.h"
#include "mc/external/webrtc/CreateSessionDescriptionObserver.h"

// auto generated forward declare list
// clang-format off
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
    virtual ~CreateSessionDescriptionObserver() /*override*/ = default;

    // vIndex: 3
    virtual void OnSuccess(::webrtc::SessionDescriptionInterface* pSessionDescription) /*override*/;

    // vIndex: 4
    virtual void OnFailure(::webrtc::RTCError error) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnSuccess(::webrtc::SessionDescriptionInterface* pSessionDescription);

    MCNAPI void $OnFailure(::webrtc::RTCError error);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
