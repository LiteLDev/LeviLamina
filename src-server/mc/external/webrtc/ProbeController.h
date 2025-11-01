#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BandwidthLimitedCause.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct NetworkAvailability; }
namespace webrtc { struct NetworkStateEstimate; }
namespace webrtc { struct ProbeClusterConfig; }
// clang-format on

namespace webrtc {

class ProbeController {
public:
    // ProbeController inner types define
    enum class State : int {
        KInit = 0,
        KWaitingForProbingResult = 1,
        KProbingComplete = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk7d1f7b;
    ::ll::UntypedStorage<4, 4> mUnk2b746e;
    ::ll::UntypedStorage<4, 4> mUnk38904c;
    ::ll::UntypedStorage<8, 8> mUnk1a2a22;
    ::ll::UntypedStorage<8, 8> mUnkdced0a;
    ::ll::UntypedStorage<8, 8> mUnk8f444f;
    ::ll::UntypedStorage<8, 144> mUnk502692;
    ::ll::UntypedStorage<8, 8> mUnk8d0b00;
    ::ll::UntypedStorage<8, 8> mUnkaf4f4a;
    ::ll::UntypedStorage<8, 8> mUnkf93e6f;
    ::ll::UntypedStorage<8, 16> mUnk41d200;
    ::ll::UntypedStorage<8, 16> mUnk890236;
    ::ll::UntypedStorage<1, 1> mUnk414a3b;
    ::ll::UntypedStorage<8, 8> mUnk3f1958;
    ::ll::UntypedStorage<8, 8> mUnk514d61;
    ::ll::UntypedStorage<8, 8> mUnk7eb650;
    ::ll::UntypedStorage<1, 1> mUnkeb988c;
    ::ll::UntypedStorage<8, 8> mUnk376917;
    ::ll::UntypedStorage<4, 4> mUnk62ef54;
    ::ll::UntypedStorage<8, 1632> mUnkd25453;
    // NOLINTEND

public:
    // prevent constructor by default
    ProbeController& operator=(ProbeController const&);
    ProbeController(ProbeController const&);
    ProbeController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void EnablePeriodicAlrProbing(bool enable);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig> InitiateExponentialProbing(::webrtc::Timestamp at_time);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig> InitiateProbing(::webrtc::Timestamp now, ::std::vector<::webrtc::DataRate> bitrates_to_probe, bool probe_further);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig> OnMaxTotalAllocatedBitrate(::webrtc::DataRate max_total_allocated_bitrate, ::webrtc::Timestamp at_time);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig> OnNetworkAvailability(::webrtc::NetworkAvailability msg);

    MCNAPI ProbeController(::webrtc::FieldTrialsView const* key_value_config, ::webrtc::RtcEventLog* event_log);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig> Process(::webrtc::Timestamp at_time);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig> RequestProbe(::webrtc::Timestamp at_time);

    MCNAPI void Reset(::webrtc::Timestamp at_time);

    MCNAPI void SetAlrEndedTimeMs(int64 alr_end_time_ms);

    MCNAPI void SetAlrStartTimeMs(::std::optional<int64> alr_start_time_ms);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig> SetBitrates(::webrtc::DataRate min_bitrate, ::webrtc::DataRate start_bitrate, ::webrtc::DataRate max_bitrate, ::webrtc::Timestamp at_time);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig> SetEstimatedBitrate(::webrtc::DataRate bitrate, ::webrtc::BandwidthLimitedCause bandwidth_limited_cause, ::webrtc::Timestamp at_time);

    MCNAPI void SetNetworkStateEstimate(::webrtc::NetworkStateEstimate estimate);

    MCNAPI bool TimeForAlrProbe(::webrtc::Timestamp at_time) const;

    MCNAPI bool TimeForNetworkStateProbe(::webrtc::Timestamp at_time) const;

    MCNAPI ~ProbeController();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const* key_value_config, ::webrtc::RtcEventLog* event_log);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
