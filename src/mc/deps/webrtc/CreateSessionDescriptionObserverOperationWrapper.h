#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/CreateSessionDescriptionObserver.h"
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class CreateSessionDescriptionObserver; }
namespace webrtc { class RTCError; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class CreateSessionDescriptionObserverOperationWrapper : public ::webrtc::CreateSessionDescriptionObserver {
public:
    // prevent constructor by default
    CreateSessionDescriptionObserverOperationWrapper&
    operator=(CreateSessionDescriptionObserverOperationWrapper const&);
    CreateSessionDescriptionObserverOperationWrapper(CreateSessionDescriptionObserverOperationWrapper const&);
    CreateSessionDescriptionObserverOperationWrapper();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: __gen_??1CreateSessionDescriptionObserverOperationWrapper@webrtc@@UEAA@XZ
    virtual ~CreateSessionDescriptionObserverOperationWrapper() = default;

    // vIndex: 3, symbol:
    // ?OnSuccess@CreateSessionDescriptionObserverOperationWrapper@webrtc@@UEAAXPEAVSessionDescriptionInterface@2@@Z
    virtual void OnSuccess(class webrtc::SessionDescriptionInterface*);

    // vIndex: 4, symbol: ?OnFailure@CreateSessionDescriptionObserverOperationWrapper@webrtc@@UEAAXVRTCError@2@@Z
    virtual void OnFailure(class webrtc::RTCError);

    // NOLINTEND
};

}; // namespace webrtc
