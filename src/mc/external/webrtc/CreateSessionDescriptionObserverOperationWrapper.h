#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/CreateSessionDescriptionObserver.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class CreateSessionDescriptionObserverOperationWrapper : public ::webrtc::CreateSessionDescriptionObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnked2d31;
    ::ll::UntypedStorage<8, 64> mUnk416c19;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateSessionDescriptionObserverOperationWrapper& operator=(CreateSessionDescriptionObserverOperationWrapper const&
    );
    CreateSessionDescriptionObserverOperationWrapper(CreateSessionDescriptionObserverOperationWrapper const&);
    CreateSessionDescriptionObserverOperationWrapper();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreateSessionDescriptionObserverOperationWrapper() /*override*/ = default;

    virtual void OnSuccess(::webrtc::SessionDescriptionInterface* desc) /*override*/;

    virtual void OnFailure(::webrtc::RTCError error) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnSuccess(::webrtc::SessionDescriptionInterface* desc);

    MCNAPI void $OnFailure(::webrtc::RTCError error);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
