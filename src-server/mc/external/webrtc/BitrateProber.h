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

class BitrateProber {
public:
    // BitrateProber inner types declare
    // clang-format off
    struct ProbeCluster;
    // clang-format on

    // BitrateProber inner types define
    enum class ProbingState : int {
        KDisabled = 0,
        KInactive = 1,
        KActive   = 2,
    };

    struct ProbeCluster {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk3b2d0c;
        ::ll::UntypedStorage<4, 4>  mUnk56aafd;
        ::ll::UntypedStorage<4, 4>  mUnk401b67;
        ::ll::UntypedStorage<8, 8>  mUnk910fab;
        ::ll::UntypedStorage<8, 8>  mUnkae7620;
        ::ll::UntypedStorage<4, 4>  mUnkf56bb5;
        // NOLINTEND

    public:
        // prevent constructor by default
        ProbeCluster& operator=(ProbeCluster const&);
        ProbeCluster(ProbeCluster const&);
        ProbeCluster();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk7c484e;
    ::ll::UntypedStorage<8, 40>  mUnk608b4c;
    ::ll::UntypedStorage<8, 8>   mUnk85d646;
    ::ll::UntypedStorage<8, 248> mUnkfed707;
    // NOLINTEND

public:
    // prevent constructor by default
    BitrateProber& operator=(BitrateProber const&);
    BitrateProber(BitrateProber const&);
    BitrateProber();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BitrateProber(::webrtc::FieldTrialsView const& field_trials);

    MCNAPI ::webrtc::Timestamp CalculateNextProbeTime(::webrtc::BitrateProber::ProbeCluster const& cluster) const;

    MCNAPI void CreateProbeCluster(::webrtc::ProbeClusterConfig const& cluster_config);

    MCNAPI ::std::optional<::webrtc::PacedPacketInfo> CurrentCluster(::webrtc::Timestamp now);

    MCNAPI void MaybeSetActiveState(::webrtc::DataSize packet_size);

    MCNAPI ::webrtc::Timestamp NextProbeTime(::webrtc::Timestamp now) const;

    MCNAPI void OnIncomingPacket(::webrtc::DataSize packet_size);

    MCNAPI void ProbeSent(::webrtc::Timestamp now, ::webrtc::DataSize size);

    MCNAPI bool ReadyToSetActiveState(::webrtc::DataSize packet_size) const;

    MCNAPI ::webrtc::DataSize RecommendedMinProbeSize() const;

    MCNAPI void SetAllowProbeWithoutMediaPacket(bool allow);

    MCNAPI void SetEnabled(bool enable);

    MCNAPI ~BitrateProber();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const& field_trials);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
