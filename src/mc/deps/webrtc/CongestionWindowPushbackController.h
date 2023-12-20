#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataSize; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

class CongestionWindowPushbackController {
public:
    // prevent constructor by default
    CongestionWindowPushbackController& operator=(CongestionWindowPushbackController const&);
    CongestionWindowPushbackController(CongestionWindowPushbackController const&);
    CongestionWindowPushbackController();

public:
    // NOLINTBEGIN
    // symbol: ??0CongestionWindowPushbackController@webrtc@@QEAA@PEBVFieldTrialsView@1@@Z
    MCAPI explicit CongestionWindowPushbackController(class webrtc::FieldTrialsView const*);

    // symbol: ?SetDataWindow@CongestionWindowPushbackController@webrtc@@QEAAXVDataSize@2@@Z
    MCAPI void SetDataWindow(class webrtc::DataSize);

    // symbol: ?UpdateOutstandingData@CongestionWindowPushbackController@webrtc@@QEAAX_J@Z
    MCAPI void UpdateOutstandingData(int64);

    // symbol: ?UpdatePacingQueue@CongestionWindowPushbackController@webrtc@@QEAAX_J@Z
    MCAPI void UpdatePacingQueue(int64);

    // symbol: ?UpdateTargetBitrate@CongestionWindowPushbackController@webrtc@@QEAAII@Z
    MCAPI uint UpdateTargetBitrate(uint);

    // NOLINTEND
};

}; // namespace webrtc
