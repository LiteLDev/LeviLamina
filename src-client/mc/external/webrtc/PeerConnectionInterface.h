#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PeerConnectionInterface {
public:
    // PeerConnectionInterface inner types declare
    // clang-format off
    struct IceServer;
    struct PortAllocatorConfig;
    struct RTCConfiguration;
    struct RTCOfferAnswerOptions;
    // clang-format on

    // PeerConnectionInterface inner types define
    enum class BundlePolicy : uint {};

    enum class CandidateNetworkPolicy : uint {};

    enum class ContinualGatheringPolicy : uint {};

    enum class IceConnectionState : uint {};

    enum class IceGatheringState : uint {};

    enum class IceTransportsType : uint {};

    enum class PeerConnectionState : uint {};

    enum class RTCConfigurationType : uint {};

    enum class RtcpMuxPolicy : uint {};

    enum class SignalingState : uint {};

    enum class StatsOutputLevel : uint {};

    enum class TcpCandidatePolicy : uint {};

    enum class TlsCertPolicy : uint {};

    struct IceServer {};

    struct PortAllocatorConfig {};

    struct RTCConfiguration {};

    struct RTCOfferAnswerOptions {};
};

} // namespace webrtc
