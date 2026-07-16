#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceTransportInternal; }
namespace webrtc { class PacketTransportInternal; }
namespace webrtc { class Thread; }
namespace webrtc { struct NetworkRoute; }
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
    ::ll::UntypedStorage<8, 8> mUnk397e3e;
    ::ll::UntypedStorage<4, 4> mUnka21c63;
    ::ll::UntypedStorage<8, 8> mUnk4cb467;
    ::ll::UntypedStorage<8, 8> mUnk25690a;
    ::ll::UntypedStorage<8, 8> mUnk9a9c4e;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicRegatheringController& operator=(BasicRegatheringController const&);
    BasicRegatheringController(BasicRegatheringController const&);
    BasicRegatheringController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasicRegatheringController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BasicRegatheringController(
        ::webrtc::BasicRegatheringController::Config const& config,
        ::webrtc::IceTransportInternal*                     ice_transport,
        ::webrtc::Thread*                                   thread
    );

    MCNAPI void OnIceTransportNetworkRouteChanged(::std::optional<::webrtc::NetworkRoute>);

    MCNAPI void OnIceTransportReceivingState(::webrtc::PacketTransportInternal*);

    MCNAPI void OnIceTransportStateChanged(::webrtc::IceTransportInternal*);

    MCNAPI void OnIceTransportWritableState(::webrtc::PacketTransportInternal*);

    MCNAPI void ScheduleRecurringRegatheringOnFailedNetworks();

    MCNAPI void SetConfig(::webrtc::BasicRegatheringController::Config const& config);

    MCNAPI void Start();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::BasicRegatheringController::Config const& config,
        ::webrtc::IceTransportInternal*                     ice_transport,
        ::webrtc::Thread*                                   thread
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
