#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ProtocolType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class PortInterface; }
namespace cricket { struct PortConfiguration; }
namespace cricket { struct RelayServerConfig; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class Network; }
namespace rtc { class ReceivedPacket; }
// clang-format on

namespace cricket {

class AllocationSequence {
public:
    // AllocationSequence inner types define
    enum class State : int {
        KInit      = 0,
        KRunning   = 1,
        KStopped   = 2,
        KCompleted = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc9fdb6;
    ::ll::UntypedStorage<1, 1>  mUnke16770;
    ::ll::UntypedStorage<8, 8>  mUnk19017d;
    ::ll::UntypedStorage<4, 32> mUnk5c33f7;
    ::ll::UntypedStorage<8, 8>  mUnkac2dd9;
    ::ll::UntypedStorage<4, 4>  mUnk7749ac;
    ::ll::UntypedStorage<4, 4>  mUnk325f64;
    ::ll::UntypedStorage<8, 24> mUnkfacbbe;
    ::ll::UntypedStorage<8, 16> mUnk6c121e;
    ::ll::UntypedStorage<8, 16> mUnk6c0575;
    ::ll::UntypedStorage<8, 8>  mUnke5c46b;
    ::ll::UntypedStorage<8, 24> mUnk37997a;
    ::ll::UntypedStorage<4, 4>  mUnk3a8979;
    ::ll::UntypedStorage<8, 64> mUnk74ccd9;
    ::ll::UntypedStorage<4, 4>  mUnk5fe699;
    ::ll::UntypedStorage<8, 8>  mUnkdfdd59;
    // NOLINTEND

public:
    // prevent constructor by default
    AllocationSequence& operator=(AllocationSequence const&);
    AllocationSequence(AllocationSequence const&);
    AllocationSequence();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Clear();

    MCNAPI void CreateStunPorts();

    MCNAPI void CreateTCPPorts();

    MCNAPI void CreateTurnPort(::cricket::RelayServerConfig const& config, int relative_priority);

    MCNAPI void CreateUDPPorts();

    MCNAPI void
    DisableEquivalentPhases(::rtc::Network const* network, ::cricket::PortConfiguration* config, uint* flags);

    MCNAPI void Init();

    MCNAPI void OnPortDestroyed(::cricket::PortInterface* port);

    MCNAPI void OnReadPacket(::rtc::AsyncPacketSocket* socket, ::rtc::ReceivedPacket const& packet);

    MCNAPI void Process(int epoch);
    // NOLINTEND
};

} // namespace cricket
