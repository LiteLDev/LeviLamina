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
    MCAPI
    AllocationSequence(::cricket::BasicPortAllocatorSession*, ::rtc::Network const*, ::cricket::PortConfiguration*, uint, ::std::function<void()>);

    MCAPI void Clear();

    MCAPI void CreateRelayPorts();

    MCAPI void CreateStunPorts();

    MCAPI void CreateTCPPorts();

    MCAPI void CreateTurnPort(::cricket::RelayServerConfig const&, int);

    MCAPI void CreateUDPPorts();

    MCAPI void DisableEquivalentPhases(::rtc::Network const*, ::cricket::PortConfiguration*, uint*);

    MCAPI void Init();

    MCAPI void OnNetworkFailed();

    MCAPI void OnPortDestroyed(::cricket::PortInterface*);

    MCAPI void OnReadPacket(::rtc::AsyncPacketSocket*, ::rtc::ReceivedPacket const&);

    MCAPI void Process(int);

    MCAPI void Start();

    MCAPI void Stop();

    MCAPI ~AllocationSequence();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::cricket::BasicPortAllocatorSession*, ::rtc::Network const*, ::cricket::PortConfiguration*, uint, ::std::function<void()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
