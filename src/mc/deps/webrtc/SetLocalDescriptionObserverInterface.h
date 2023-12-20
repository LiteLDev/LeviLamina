#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/RefCountInterface.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RefCountInterface; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class SetLocalDescriptionObserverInterface : public ::rtc::RefCountInterface {
public:
    // prevent constructor by default
    SetLocalDescriptionObserverInterface& operator=(SetLocalDescriptionObserverInterface const&);
    SetLocalDescriptionObserverInterface(SetLocalDescriptionObserverInterface const&);
    SetLocalDescriptionObserverInterface();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1SetLocalDescriptionObserverInterface@webrtc@@UEAA@XZ
    virtual ~SetLocalDescriptionObserverInterface();

    // NOLINTEND
};

}; // namespace webrtc
