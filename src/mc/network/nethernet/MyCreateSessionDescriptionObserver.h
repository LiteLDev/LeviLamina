#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/CreateSessionDescriptionObserver.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class CreateSessionDescriptionObserver; }
namespace webrtc { class RTCError; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace NetherNet {

class MyCreateSessionDescriptionObserver : public ::webrtc::CreateSessionDescriptionObserver {
public:
    // prevent constructor by default
    MyCreateSessionDescriptionObserver& operator=(MyCreateSessionDescriptionObserver const&);
    MyCreateSessionDescriptionObserver(MyCreateSessionDescriptionObserver const&);
    MyCreateSessionDescriptionObserver();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?AddRef@MyCreateSessionDescriptionObserver@NetherNet@@UEBAXXZ
    virtual void AddRef() const;

    // vIndex: 1, symbol: ?Release@MyCreateSessionDescriptionObserver@NetherNet@@UEBA?AW4RefCountReleaseStatus@rtc@@XZ
    virtual ::rtc::RefCountReleaseStatus Release() const;

    // vIndex: 2, symbol: __gen_??1MyCreateSessionDescriptionObserver@NetherNet@@UEAA@XZ
    virtual ~MyCreateSessionDescriptionObserver() = default;

    // vIndex: 3, symbol:
    // ?OnSuccess@MyCreateSessionDescriptionObserver@NetherNet@@UEAAXPEAVSessionDescriptionInterface@webrtc@@@Z
    virtual void OnSuccess(class webrtc::SessionDescriptionInterface*);

    // vIndex: 4, symbol: ?OnFailure@MyCreateSessionDescriptionObserver@NetherNet@@UEAAXVRTCError@webrtc@@@Z
    virtual void OnFailure(class webrtc::RTCError);

    // symbol:
    // ?Create@MyCreateSessionDescriptionObserver@NetherNet@@SAPEAVCreateSessionDescriptionObserver@webrtc@@$$QEAV?$function@$$A6AXPEAVSessionDescriptionInterface@webrtc@@@Z@std@@$$QEAV?$function@$$A6AXAEBVRTCError@webrtc@@@Z@6@@Z
    MCAPI static class webrtc::CreateSessionDescriptionObserver*
    Create(std::function<void(class webrtc::SessionDescriptionInterface*)>&&, std::function<void(class webrtc::RTCError const&)>&&);

    // NOLINTEND
};

}; // namespace NetherNet
