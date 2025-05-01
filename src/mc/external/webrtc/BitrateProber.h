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
    struct ProbeCluster {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BitrateProber(::webrtc::FieldTrialsView const&);

    MCNAPI ::webrtc::Timestamp CalculateNextProbeTime(::webrtc::BitrateProber::ProbeCluster const&) const;

    MCNAPI void CreateProbeCluster(::webrtc::ProbeClusterConfig const&);

    MCNAPI ::std::optional<::webrtc::PacedPacketInfo> CurrentCluster(::webrtc::Timestamp);

    MCNAPI void MaybeSetActiveState(::webrtc::DataSize);

    MCNAPI ::webrtc::Timestamp NextProbeTime(::webrtc::Timestamp) const;

    MCNAPI void OnIncomingPacket(::webrtc::DataSize);

    MCNAPI void ProbeSent(::webrtc::Timestamp, ::webrtc::DataSize);

    MCNAPI bool ReadyToSetActiveState(::webrtc::DataSize) const;

    MCNAPI ::webrtc::DataSize RecommendedMinProbeSize() const;

    MCNAPI void SetAllowProbeWithoutMediaPacket(bool);

    MCNAPI void SetEnabled(bool);

    MCNAPI ~BitrateProber();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
