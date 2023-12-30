#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace rtc {

class RefCountInterface {
public:
    // prevent constructor by default
    RefCountInterface& operator=(RefCountInterface const&);
    RefCountInterface(RefCountInterface const&);
    RefCountInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?AddRef@MyCreateSessionDescriptionObserver@NetherNet@@UEBAXXZ
    virtual void AddRef() const = 0;

    // vIndex: 1, symbol: ?Release@MyCreateSessionDescriptionObserver@NetherNet@@UEBA?AW4RefCountReleaseStatus@rtc@@XZ
    virtual ::rtc::RefCountReleaseStatus Release() const = 0;

    // vIndex: 2, symbol: ??1RefCountInterface@rtc@@MEAA@XZ
    virtual ~RefCountInterface();

    // vIndex: 3, symbol:
    // ?OnSuccess@MyCreateSessionDescriptionObserver@NetherNet@@UEAAXPEAVSessionDescriptionInterface@webrtc@@@Z
    virtual void OnSuccess(class webrtc::SessionDescriptionInterface*);

    // NOLINTEND
};

}; // namespace rtc
