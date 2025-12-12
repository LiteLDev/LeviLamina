#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class IceTransportInternal; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class Thread; }
namespace rtc { struct NetworkRoute; }
// clang-format on

namespace webrtc {

class BasicRegatheringController : public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // BasicRegatheringController inner types declare
    // clang-format off
    struct Config;
    // clang-format on

    // BasicRegatheringController inner types define
    struct Config {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk555f05;
        // NOLINTEND

    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfa5fda;
    ::ll::UntypedStorage<4, 4> mUnka21c63;
    ::ll::UntypedStorage<8, 8> mUnk33ff0e;
    ::ll::UntypedStorage<8, 8> mUnkf79c90;
    ::ll::UntypedStorage<8, 8> mUnkb66aca;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicRegatheringController& operator=(BasicRegatheringController const&);
    BasicRegatheringController(BasicRegatheringController const&);
    BasicRegatheringController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasicRegatheringController() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BasicRegatheringController(
        ::webrtc::BasicRegatheringController::Config const& config,
        ::cricket::IceTransportInternal*                    ice_transport,
        ::rtc::Thread*                                      thread
    );

    MCNAPI void OnIceTransportNetworkRouteChanged(::std::optional<::rtc::NetworkRoute>);

    MCNAPI void OnIceTransportReceivingState(::rtc::PacketTransportInternal*);

    MCNAPI void OnIceTransportStateChanged(::cricket::IceTransportInternal*);

    MCNAPI void OnIceTransportWritableState(::rtc::PacketTransportInternal*);

    MCNAPI void ScheduleRecurringRegatheringOnFailedNetworks();

    MCNAPI void SetConfig(::webrtc::BasicRegatheringController::Config const& config);

    MCNAPI void Start();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::BasicRegatheringController::Config const& config,
        ::cricket::IceTransportInternal*                    ice_transport,
        ::rtc::Thread*                                      thread
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
