#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/SetLocalDescriptionObserverInterface.h"
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
namespace webrtc { class SetLocalDescriptionObserverInterface; }
// clang-format on

namespace NetherNet {

class SetLocalDescriptionObserverForAnswer : public ::webrtc::SetLocalDescriptionObserverInterface {
public:
    // prevent constructor by default
    SetLocalDescriptionObserverForAnswer& operator=(SetLocalDescriptionObserverForAnswer const&);
    SetLocalDescriptionObserverForAnswer(SetLocalDescriptionObserverForAnswer const&);
    SetLocalDescriptionObserverForAnswer();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1SetLocalDescriptionObserverForAnswer@NetherNet@@UEAA@XZ
    virtual ~SetLocalDescriptionObserverForAnswer();

    // vIndex: 3, symbol:
    // ?OnSetLocalDescriptionComplete@SetLocalDescriptionObserverForAnswer@NetherNet@@UEAAXVRTCError@webrtc@@@Z
    virtual void OnSetLocalDescriptionComplete(class webrtc::RTCError);

    // NOLINTEND
};

}; // namespace NetherNet
