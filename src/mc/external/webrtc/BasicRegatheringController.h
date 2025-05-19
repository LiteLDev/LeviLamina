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
    struct Config {};

public:
    // prevent constructor by default
    BasicRegatheringController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BasicRegatheringController(
        ::webrtc::BasicRegatheringController::Config const&,
        ::cricket::IceTransportInternal*,
        ::rtc::Thread*
    );

    MCNAPI void OnIceTransportNetworkRouteChanged(::std::optional<::rtc::NetworkRoute>);

    MCNAPI void OnIceTransportReceivingState(::rtc::PacketTransportInternal*);

    MCNAPI void OnIceTransportStateChanged(::cricket::IceTransportInternal*);

    MCNAPI void OnIceTransportWritableState(::rtc::PacketTransportInternal*);

    MCNAPI void ScheduleRecurringRegatheringOnFailedNetworks();

    MCNAPI void SetConfig(::webrtc::BasicRegatheringController::Config const&);

    MCNAPI void Start();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::webrtc::BasicRegatheringController::Config const&, ::cricket::IceTransportInternal*, ::rtc::Thread*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
