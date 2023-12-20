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

class SetRemoteDescriptionObserverInterface : public ::rtc::RefCountInterface {
public:
    // prevent constructor by default
    SetRemoteDescriptionObserverInterface& operator=(SetRemoteDescriptionObserverInterface const&);
    SetRemoteDescriptionObserverInterface(SetRemoteDescriptionObserverInterface const&);
    SetRemoteDescriptionObserverInterface();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1SetRemoteDescriptionObserverInterface@webrtc@@UEAA@XZ
    virtual ~SetRemoteDescriptionObserverInterface();

    // NOLINTEND
};

}; // namespace webrtc
