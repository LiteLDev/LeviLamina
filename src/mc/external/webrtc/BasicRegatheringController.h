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
    // member functions
    // NOLINTBEGIN
    MCAPI
    BasicRegatheringController(::webrtc::BasicRegatheringController::Config const&, ::cricket::IceTransportInternal*, ::rtc::Thread*);

    MCAPI void OnIceTransportNetworkRouteChanged(::std::optional<::rtc::NetworkRoute>);

    MCAPI void OnIceTransportReceivingState(::rtc::PacketTransportInternal*);

    MCAPI void OnIceTransportStateChanged(::cricket::IceTransportInternal*);

    MCAPI void OnIceTransportWritableState(::rtc::PacketTransportInternal*);

    MCAPI void ScheduleRecurringRegatheringOnFailedNetworks();

    MCAPI void SetConfig(::webrtc::BasicRegatheringController::Config const&);

    MCAPI void Start();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::webrtc::BasicRegatheringController::Config const&, ::cricket::IceTransportInternal*, ::rtc::Thread*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
