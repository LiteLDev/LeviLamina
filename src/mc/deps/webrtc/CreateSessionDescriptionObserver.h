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

class CreateSessionDescriptionObserver : public ::rtc::RefCountInterface {
public:
    // prevent constructor by default
    CreateSessionDescriptionObserver& operator=(CreateSessionDescriptionObserver const&);
    CreateSessionDescriptionObserver(CreateSessionDescriptionObserver const&);
    CreateSessionDescriptionObserver();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1CreateSessionDescriptionObserver@webrtc@@MEAA@XZ
    virtual ~CreateSessionDescriptionObserver();

    // NOLINTEND
};

}; // namespace webrtc
