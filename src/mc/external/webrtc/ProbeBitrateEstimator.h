#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { struct PacketResult; }
// clang-format on

namespace webrtc {

class ProbeBitrateEstimator {
public:
    // ProbeBitrateEstimator inner types declare
    // clang-format off
    struct AggregatedCluster;
    // clang-format on

    // ProbeBitrateEstimator inner types define
    struct AggregatedCluster {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkc303f2;
        ::ll::UntypedStorage<8, 8> mUnk42b3b6;
        ::ll::UntypedStorage<8, 8> mUnk4eaa0a;
        ::ll::UntypedStorage<8, 8> mUnkd143ee;
        ::ll::UntypedStorage<8, 8> mUnk43c015;
        ::ll::UntypedStorage<8, 8> mUnk76e2c6;
        ::ll::UntypedStorage<8, 8> mUnk3b313b;
        ::ll::UntypedStorage<8, 8> mUnkcf4cff;
        // NOLINTEND

    public:
        // prevent constructor by default
        AggregatedCluster& operator=(AggregatedCluster const&);
        AggregatedCluster(AggregatedCluster const&);
        AggregatedCluster();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk70e958;
    ::ll::UntypedStorage<8, 8>  mUnkd8dba6;
    ::ll::UntypedStorage<8, 16> mUnk756214;
    // NOLINTEND

public:
    // prevent constructor by default
    ProbeBitrateEstimator& operator=(ProbeBitrateEstimator const&);
    ProbeBitrateEstimator(ProbeBitrateEstimator const&);
    ProbeBitrateEstimator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::webrtc::DataRate> FetchAndResetLastEstimatedBitrate();

    MCNAPI ::std::optional<::webrtc::DataRate>
    HandleProbeAndEstimateBitrate(::webrtc::PacketResult const& packet_feedback);

    MCNAPI explicit ProbeBitrateEstimator(::webrtc::RtcEventLog* event_log);

    MCNAPI ~ProbeBitrateEstimator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtcEventLog* event_log);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
