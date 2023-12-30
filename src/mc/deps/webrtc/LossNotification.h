#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/Psfb.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class Psfb; }
// clang-format on

namespace webrtc::rtcp {

class LossNotification : public ::webrtc::rtcp::Psfb {
public:
    // prevent constructor by default
    LossNotification& operator=(LossNotification const&);
    LossNotification(LossNotification const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LossNotification@rtcp@webrtc@@UEAA@XZ
    virtual ~LossNotification();

    // vIndex: 1, symbol: ?BlockLength@LossNotification@rtcp@webrtc@@UEBA_KXZ
    virtual uint64 BlockLength() const;

    // vIndex: 2, symbol:
    // ?Create@LossNotification@rtcp@webrtc@@UEBA_NPEAEPEA_K_KV?$FunctionView@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z@rtc@@@Z
    virtual bool
    Create(uchar*, uint64*, uint64, class rtc::FunctionView<void(class rtc::ArrayView<uchar const, -4711>)>) const;

    // symbol: ??0LossNotification@rtcp@webrtc@@QEAA@XZ
    MCAPI LossNotification();

    // symbol: ?Parse@LossNotification@rtcp@webrtc@@QEAA_NAEBVCommonHeader@23@@Z
    MCAPI bool Parse(class webrtc::rtcp::CommonHeader const&);

    // symbol: ?Set@LossNotification@rtcp@webrtc@@QEAA_NGG_N@Z
    MCAPI bool Set(ushort, ushort, bool);

    // NOLINTEND
};

}; // namespace webrtc::rtcp
