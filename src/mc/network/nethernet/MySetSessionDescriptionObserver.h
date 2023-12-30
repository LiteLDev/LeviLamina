#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/SetRemoteDescriptionObserverInterface.h"
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
namespace webrtc { class SetRemoteDescriptionObserverInterface; }
// clang-format on

namespace NetherNet {

class MySetSessionDescriptionObserver : public ::webrtc::SetRemoteDescriptionObserverInterface {
public:
    // prevent constructor by default
    MySetSessionDescriptionObserver& operator=(MySetSessionDescriptionObserver const&);
    MySetSessionDescriptionObserver(MySetSessionDescriptionObserver const&);
    MySetSessionDescriptionObserver();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?AddRef@MySetSessionDescriptionObserver@NetherNet@@UEBAXXZ
    virtual void AddRef() const;

    // vIndex: 1, symbol: ?Release@MySetSessionDescriptionObserver@NetherNet@@UEBA?AW4RefCountReleaseStatus@rtc@@XZ
    virtual ::rtc::RefCountReleaseStatus Release() const;

    // vIndex: 2, symbol: __gen_??1MySetSessionDescriptionObserver@NetherNet@@UEAA@XZ
    virtual ~MySetSessionDescriptionObserver() = default;

    // vIndex: 3, symbol:
    // ?OnSetRemoteDescriptionComplete@MySetSessionDescriptionObserver@NetherNet@@UEAAXVRTCError@webrtc@@@Z
    virtual void OnSetRemoteDescriptionComplete(class webrtc::RTCError);

    // symbol:
    // ?Create@MySetSessionDescriptionObserver@NetherNet@@SAPEAVSetRemoteDescriptionObserverInterface@webrtc@@$$QEAV?$function@$$A6AXXZ@std@@$$QEAV?$function@$$A6AXAEBVRTCError@webrtc@@@Z@6@@Z
    MCAPI static class webrtc::SetRemoteDescriptionObserverInterface*
    Create(std::function<void(void)>&&, std::function<void(class webrtc::RTCError const&)>&&);

    // NOLINTEND
};

}; // namespace NetherNet
