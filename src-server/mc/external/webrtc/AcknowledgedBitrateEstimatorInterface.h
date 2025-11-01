#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacketResult; }
// clang-format on

namespace webrtc {

class AcknowledgedBitrateEstimatorInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AcknowledgedBitrateEstimatorInterface();

    // vIndex: 1
    virtual void IncomingPacketFeedbackVector(::std::vector<::webrtc::PacketResult> const&) = 0;

    // vIndex: 2
    virtual ::std::optional<::webrtc::DataRate> bitrate() const = 0;

    // vIndex: 3
    virtual ::std::optional<::webrtc::DataRate> PeekRate() const = 0;

    // vIndex: 4
    virtual void SetAlr(bool) = 0;

    // vIndex: 5
    virtual void SetAlrEndedTime(::webrtc::Timestamp) = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::webrtc::AcknowledgedBitrateEstimatorInterface> Create(::webrtc::FieldTrialsView const* key_value_config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
