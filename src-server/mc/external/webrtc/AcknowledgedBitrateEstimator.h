#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AcknowledgedBitrateEstimatorInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class BitrateEstimator; }
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
    ::ll::UntypedStorage<1, 1> mUnk11ba18;
    ::ll::UntypedStorage<8, 8> mUnkac515b;
    // NOLINTEND

public:
    // prevent constructor by default
    AcknowledgedBitrateEstimator& operator=(AcknowledgedBitrateEstimator const&);
    AcknowledgedBitrateEstimator(AcknowledgedBitrateEstimator const&);
    AcknowledgedBitrateEstimator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AcknowledgedBitrateEstimator() /*override*/;

    // vIndex: 1
    virtual void IncomingPacketFeedbackVector(::std::vector<::webrtc::PacketResult> const& packet_feedback_vector) /*override*/;

    // vIndex: 2
    virtual ::std::optional<::webrtc::DataRate> bitrate() const /*override*/;

    // vIndex: 3
    virtual ::std::optional<::webrtc::DataRate> PeekRate() const /*override*/;

    // vIndex: 4
    virtual void SetAlr(bool in_alr) /*override*/;

    // vIndex: 5
    virtual void SetAlrEndedTime(::webrtc::Timestamp alr_ended_time) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AcknowledgedBitrateEstimator(::webrtc::FieldTrialsView const* key_value_config);

    MCNAPI AcknowledgedBitrateEstimator(::webrtc::FieldTrialsView const* key_value_config, ::std::unique_ptr<::webrtc::BitrateEstimator> bitrate_estimator);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const* key_value_config);

    MCNAPI void* $ctor(::webrtc::FieldTrialsView const* key_value_config, ::std::unique_ptr<::webrtc::BitrateEstimator> bitrate_estimator);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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

}
