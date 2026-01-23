#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AcknowledgedBitrateEstimatorInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacketResult; }
// clang-format on

namespace webrtc {

class AcknowledgedBitrateEstimator : public ::webrtc::AcknowledgedBitrateEstimatorInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke05fee;
    ::ll::UntypedStorage<1, 1>  mUnk11ba18;
    ::ll::UntypedStorage<8, 8>  mUnkac515b;
    // NOLINTEND

public:
    // prevent constructor by default
    AcknowledgedBitrateEstimator& operator=(AcknowledgedBitrateEstimator const&);
    AcknowledgedBitrateEstimator(AcknowledgedBitrateEstimator const&);
    AcknowledgedBitrateEstimator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AcknowledgedBitrateEstimator() /*override*/ = default;

    virtual void
    IncomingPacketFeedbackVector(::std::vector<::webrtc::PacketResult> const& packet_feedback_vector) /*override*/;

    virtual ::std::optional<::webrtc::DataRate> bitrate() const /*override*/;

    virtual ::std::optional<::webrtc::DataRate> PeekRate() const /*override*/;

    virtual void SetAlr(bool in_alr) /*override*/;

    virtual void SetAlrEndedTime(::webrtc::Timestamp alr_ended_time) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AcknowledgedBitrateEstimator(::webrtc::FieldTrialsView const* key_value_config);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const* key_value_config);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $IncomingPacketFeedbackVector(::std::vector<::webrtc::PacketResult> const& packet_feedback_vector);

    MCNAPI ::std::optional<::webrtc::DataRate> $bitrate() const;

    MCNAPI ::std::optional<::webrtc::DataRate> $PeekRate() const;

    MCNAPI void $SetAlr(bool in_alr);

    MCNAPI void $SetAlrEndedTime(::webrtc::Timestamp alr_ended_time);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
