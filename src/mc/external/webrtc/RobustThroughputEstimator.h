#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AcknowledgedBitrateEstimatorInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacketResult; }
namespace webrtc { struct RobustThroughputEstimatorSettings; }
// clang-format on

namespace webrtc {

class RobustThroughputEstimator : public ::webrtc::AcknowledgedBitrateEstimatorInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk6214d6;
    ::ll::UntypedStorage<8, 40> mUnk5f78a2;
    ::ll::UntypedStorage<8, 8>  mUnkf83ed2;
    // NOLINTEND

public:
    // prevent constructor by default
    RobustThroughputEstimator& operator=(RobustThroughputEstimator const&);
    RobustThroughputEstimator(RobustThroughputEstimator const&);
    RobustThroughputEstimator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RobustThroughputEstimator() /*override*/ = default;

    virtual void
    IncomingPacketFeedbackVector(::std::vector<::webrtc::PacketResult> const& packet_feedback_vector) /*override*/;

    virtual ::std::optional<::webrtc::DataRate> bitrate() const /*override*/;

    virtual ::std::optional<::webrtc::DataRate> PeekRate() const /*override*/;

    virtual void SetAlr(bool) /*override*/;

    virtual void SetAlrEndedTime(::webrtc::Timestamp) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RobustThroughputEstimator(::webrtc::RobustThroughputEstimatorSettings const& settings);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RobustThroughputEstimatorSettings const& settings);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $IncomingPacketFeedbackVector(::std::vector<::webrtc::PacketResult> const& packet_feedback_vector);

    MCNAPI ::std::optional<::webrtc::DataRate> $bitrate() const;

    MCNAPI ::std::optional<::webrtc::DataRate> $PeekRate() const;

    MCNAPI void $SetAlr(bool);

    MCNAPI void $SetAlrEndedTime(::webrtc::Timestamp);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
