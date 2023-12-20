#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/SetLocalDescriptionObserverInterface.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
namespace webrtc { class SetLocalDescriptionObserverInterface; }
// clang-format on

namespace NetherNet {

class SetLocalDescriptionObserverForOffer : public ::webrtc::SetLocalDescriptionObserverInterface {
public:
    // prevent constructor by default
    SetLocalDescriptionObserverForOffer& operator=(SetLocalDescriptionObserverForOffer const&);
    SetLocalDescriptionObserverForOffer(SetLocalDescriptionObserverForOffer const&);
    SetLocalDescriptionObserverForOffer();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1SetLocalDescriptionObserverForOffer@NetherNet@@UEAA@XZ
    virtual ~SetLocalDescriptionObserverForOffer();

    // vIndex: 3, symbol:
    // ?OnSetLocalDescriptionComplete@SetLocalDescriptionObserverForOffer@NetherNet@@UEAAXVRTCError@webrtc@@@Z
    virtual void OnSetLocalDescriptionComplete(class webrtc::RTCError);

    // NOLINTEND
};

}; // namespace NetherNet
