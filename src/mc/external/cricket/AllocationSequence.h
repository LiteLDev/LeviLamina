#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class BasicPortAllocatorSession; }
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
    // member functions
    // NOLINTBEGIN
    MCNAPI
    AllocationSequence(::cricket::BasicPortAllocatorSession*, ::rtc::Network const*, ::cricket::PortConfiguration*, uint, ::std::function<void()>);

    MCNAPI void Clear();

    MCNAPI void CreateRelayPorts();

    MCNAPI void CreateStunPorts();

    MCNAPI void CreateTCPPorts();

    MCNAPI void CreateTurnPort(::cricket::RelayServerConfig const&, int);

    MCNAPI void CreateUDPPorts();

    MCNAPI void DisableEquivalentPhases(::rtc::Network const*, ::cricket::PortConfiguration*, uint*);

    MCNAPI void Init();

    MCNAPI void OnNetworkFailed();

    MCNAPI void OnPortDestroyed(::cricket::PortInterface*);

    MCNAPI void OnReadPacket(::rtc::AsyncPacketSocket*, ::rtc::ReceivedPacket const&);

    MCNAPI void Process(int);

    MCNAPI void Start();

    MCNAPI void Stop();

    MCNAPI ~AllocationSequence();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::cricket::BasicPortAllocatorSession*, ::rtc::Network const*, ::cricket::PortConfiguration*, uint, ::std::function<void()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
