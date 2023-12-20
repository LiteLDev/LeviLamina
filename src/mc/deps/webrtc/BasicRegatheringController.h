#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class IceTransportInternal; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class Thread; }
namespace rtc { struct NetworkRoute; }
// clang-format on

namespace webrtc {

class BasicRegatheringController {
public:
    // BasicRegatheringController inner types declare
    // clang-format off
    struct Config;
    // clang-format on

    // BasicRegatheringController inner types define
    struct Config {
    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();
    };

public:
    // prevent constructor by default
    BasicRegatheringController& operator=(BasicRegatheringController const&);
    BasicRegatheringController(BasicRegatheringController const&);
    BasicRegatheringController();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BasicRegatheringController@webrtc@@UEAA@XZ
    virtual ~BasicRegatheringController();

    // symbol:
    // ??0BasicRegatheringController@webrtc@@QEAA@AEBUConfig@01@PEAVIceTransportInternal@cricket@@PEAVThread@rtc@@@Z
    MCAPI
    BasicRegatheringController(struct webrtc::BasicRegatheringController::Config const&, class cricket::IceTransportInternal*, class rtc::Thread*);

    // symbol: ?SetConfig@BasicRegatheringController@webrtc@@QEAAXAEBUConfig@12@@Z
    MCAPI void SetConfig(struct webrtc::BasicRegatheringController::Config const&);

    // symbol: ?Start@BasicRegatheringController@webrtc@@QEAAXXZ
    MCAPI void Start();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?OnIceTransportNetworkRouteChanged@BasicRegatheringController@webrtc@@AEAAXV?$optional@UNetworkRoute@rtc@@@std@@@Z
    MCAPI void OnIceTransportNetworkRouteChanged(std::optional<struct rtc::NetworkRoute>);

    // symbol: ?OnIceTransportReceivingState@BasicRegatheringController@webrtc@@AEAAXPEAVPacketTransportInternal@rtc@@@Z
    MCAPI void OnIceTransportReceivingState(class rtc::PacketTransportInternal*);

    // symbol: ?OnIceTransportStateChanged@BasicRegatheringController@webrtc@@AEAAXPEAVIceTransportInternal@cricket@@@Z
    MCAPI void OnIceTransportStateChanged(class cricket::IceTransportInternal*);

    // symbol: ?OnIceTransportWritableState@BasicRegatheringController@webrtc@@AEAAXPEAVPacketTransportInternal@rtc@@@Z
    MCAPI void OnIceTransportWritableState(class rtc::PacketTransportInternal*);

    // symbol: ?ScheduleRecurringRegatheringOnFailedNetworks@BasicRegatheringController@webrtc@@AEAAXXZ
    MCAPI void ScheduleRecurringRegatheringOnFailedNetworks();

    // NOLINTEND
};

}; // namespace webrtc
