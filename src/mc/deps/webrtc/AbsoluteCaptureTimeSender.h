#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct AbsoluteCaptureTime; }
// clang-format on

namespace webrtc {

class AbsoluteCaptureTimeSender {
public:
    // prevent constructor by default
    AbsoluteCaptureTimeSender& operator=(AbsoluteCaptureTimeSender const&);
    AbsoluteCaptureTimeSender(AbsoluteCaptureTimeSender const&);
    AbsoluteCaptureTimeSender();

public:
    // NOLINTBEGIN
    // symbol: ??0AbsoluteCaptureTimeSender@webrtc@@QEAA@PEAVClock@1@@Z
    MCAPI explicit AbsoluteCaptureTimeSender(class webrtc::Clock*);

    // symbol:
    // ?OnSendPacket@AbsoluteCaptureTimeSender@webrtc@@QEAA?AV?$optional@UAbsoluteCaptureTime@webrtc@@@std@@III_KV?$optional@_J@4@@Z
    MCAPI std::optional<struct webrtc::AbsoluteCaptureTime>
          OnSendPacket(uint, uint, uint, uint64, std::optional<int64>);

    // symbol: ??1AbsoluteCaptureTimeSender@webrtc@@QEAA@XZ
    MCAPI ~AbsoluteCaptureTimeSender();

    // symbol: ?GetSource@AbsoluteCaptureTimeSender@webrtc@@SAIIV?$ArrayView@$$CBI$0?BCGH@@rtc@@@Z
    MCAPI static uint GetSource(uint, class rtc::ArrayView<uint const, -4711>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ShouldSendExtension@AbsoluteCaptureTimeSender@webrtc@@AEBA_NVTimestamp@2@III_KV?$optional@_J@std@@@Z
    MCAPI bool ShouldSendExtension(class webrtc::Timestamp, uint, uint, uint, uint64, std::optional<int64>) const;

    // NOLINTEND
};

}; // namespace webrtc
