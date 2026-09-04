#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ProtocolType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class Network; }
namespace webrtc { class PortInterface; }
namespace webrtc { class ReceivedIpPacket; }
namespace webrtc { struct PortConfiguration; }
namespace webrtc { struct RelayServerConfig; }
// clang-format on

namespace webrtc {

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
    ::ll::UntypedStorage<8, 8>  mUnkf06013;
    ::ll::UntypedStorage<1, 1>  mUnkcb1652;
    ::ll::UntypedStorage<8, 8>  mUnk2fdcbb;
    ::ll::UntypedStorage<8, 32> mUnkd0fc40;
    ::ll::UntypedStorage<8, 8>  mUnk7508f0;
    ::ll::UntypedStorage<4, 4>  mUnk28003b;
    ::ll::UntypedStorage<4, 4>  mUnk39443e;
    ::ll::UntypedStorage<8, 24> mUnkcaaf2b;
    ::ll::UntypedStorage<8, 16> mUnke79d90;
    ::ll::UntypedStorage<8, 16> mUnk26645a;
    ::ll::UntypedStorage<8, 8>  mUnkc44a12;
    ::ll::UntypedStorage<8, 24> mUnk8e9cce;
    ::ll::UntypedStorage<4, 4>  mUnkc93391;
    ::ll::UntypedStorage<8, 64> mUnkcbf2cd;
    ::ll::UntypedStorage<4, 4>  mUnk634a0b;
    ::ll::UntypedStorage<8, 8>  mUnk7c8915;
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

    MCNAPI void CreateTurnPort(::webrtc::RelayServerConfig const& config, int relative_priority);

    MCNAPI void CreateUDPPorts();

    MCNAPI void
    DisableEquivalentPhases(::webrtc::Network const* network, ::webrtc::PortConfiguration* config, uint* flags);

    MCNAPI void Init();

    MCNAPI void OnPortDestroyed(::webrtc::PortInterface* port);

    MCNAPI void OnReadPacket(::webrtc::AsyncPacketSocket* socket, ::webrtc::ReceivedIpPacket const& packet);

    MCNAPI void Process(int epoch);
    // NOLINTEND
};

} // namespace webrtc
