#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataSize; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacedPacketInfo; }
namespace webrtc { struct ProbeClusterConfig; }
// clang-format on

namespace webrtc {

struct BitrateProber {
public:
    // BitrateProber inner types declare
    // clang-format off
    struct ProbeCluster;
    // clang-format on

    // BitrateProber inner types define
    struct ProbeCluster {
    public:
        // prevent constructor by default
        ProbeCluster& operator=(ProbeCluster const&);
        ProbeCluster(ProbeCluster const&);
        ProbeCluster();
    };

public:
    // prevent constructor by default
    BitrateProber& operator=(BitrateProber const&);
    BitrateProber(BitrateProber const&);
    BitrateProber();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BitrateProber(::webrtc::FieldTrialsView const&);

    MCAPI ::webrtc::Timestamp CalculateNextProbeTime(::webrtc::BitrateProber::ProbeCluster const&) const;

    MCAPI void CreateProbeCluster(::webrtc::ProbeClusterConfig const&);

    MCAPI ::std::optional<::webrtc::PacedPacketInfo> CurrentCluster(::webrtc::Timestamp);

    MCAPI void MaybeSetActiveState(::webrtc::DataSize);

    MCAPI ::webrtc::Timestamp NextProbeTime(::webrtc::Timestamp) const;

    MCAPI void OnIncomingPacket(::webrtc::DataSize);

    MCAPI void ProbeSent(::webrtc::Timestamp, ::webrtc::DataSize);

    MCAPI bool ReadyToSetActiveState(::webrtc::DataSize) const;

    MCAPI ::webrtc::DataSize RecommendedMinProbeSize() const;

    MCAPI void SetAllowProbeWithoutMediaPacket(bool);

    MCAPI void SetEnabled(bool);

    MCAPI ~BitrateProber();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
