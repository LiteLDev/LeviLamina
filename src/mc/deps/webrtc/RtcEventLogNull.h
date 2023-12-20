#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcEventLog.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEvent; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class RtcEventLogOutput; }
// clang-format on

namespace webrtc {

class RtcEventLogNull : public ::webrtc::RtcEventLog {
public:
    // prevent constructor by default
    RtcEventLogNull& operator=(RtcEventLogNull const&);
    RtcEventLogNull(RtcEventLogNull const&);
    RtcEventLogNull();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RtcEventLogNull@webrtc@@UEAA@XZ
    virtual ~RtcEventLogNull() = default;

    // vIndex: 1, symbol:
    // ?StartLogging@RtcEventLogNull@webrtc@@UEAA_NV?$unique_ptr@VRtcEventLogOutput@webrtc@@U?$default_delete@VRtcEventLogOutput@webrtc@@@std@@@std@@_J@Z
    virtual bool StartLogging(std::unique_ptr<class webrtc::RtcEventLogOutput>, int64);

    // vIndex: 2, symbol: ?StopLogging@RtcEventLogNull@webrtc@@UEAAXXZ
    virtual void StopLogging();

    // vIndex: 3, symbol: ?StopLogging@RtcEventLog@webrtc@@UEAAXV?$function@$$A6AXXZ@std@@@Z
    virtual void StopLogging(std::function<void(void)>);

    // vIndex: 4, symbol:
    // ?Log@RtcEventLogNull@webrtc@@UEAAXV?$unique_ptr@VRtcEvent@webrtc@@U?$default_delete@VRtcEvent@webrtc@@@std@@@std@@@Z
    virtual void Log(std::unique_ptr<class webrtc::RtcEvent>);

    // NOLINTEND
};

}; // namespace webrtc
