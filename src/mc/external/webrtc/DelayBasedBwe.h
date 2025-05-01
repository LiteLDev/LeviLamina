#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class NetworkStatePredictor; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct NetworkStateEstimate; }
namespace webrtc { struct PacketResult; }
namespace webrtc { struct TransportPacketsFeedback; }
// clang-format on

namespace webrtc {

class DelayBasedBwe {
public:
    // DelayBasedBwe inner types declare
    // clang-format off
    struct Result;
    // clang-format on

    // DelayBasedBwe inner types define
    struct Result {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Result();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DelayBasedBwe(::webrtc::FieldTrialsView const*, ::webrtc::RtcEventLog*, ::webrtc::NetworkStatePredictor*);

    MCNAPI ::webrtc::TimeDelta GetExpectedBwePeriod() const;

    MCNAPI void IncomingPacketFeedback(::webrtc::PacketResult const&, ::webrtc::Timestamp);

    MCNAPI ::webrtc::DelayBasedBwe::Result IncomingPacketFeedbackVector(
        ::webrtc::TransportPacketsFeedback const&,
        ::std::optional<::webrtc::DataRate>,
        ::std::optional<::webrtc::DataRate>,
        ::std::optional<::webrtc::NetworkStateEstimate>,
        bool
    );

    MCNAPI ::webrtc::DelayBasedBwe::Result MaybeUpdateEstimate(
        ::std::optional<::webrtc::DataRate>,
        ::std::optional<::webrtc::DataRate>,
        ::std::optional<::webrtc::NetworkStateEstimate>,
        bool,
        bool,
        ::webrtc::Timestamp
    );

    MCNAPI void OnRttUpdate(::webrtc::TimeDelta);

    MCNAPI void SetMinBitrate(::webrtc::DataRate);

    MCNAPI void SetStartBitrate(::webrtc::DataRate);

    MCNAPI bool UpdateEstimate(::webrtc::Timestamp, ::std::optional<::webrtc::DataRate>, ::webrtc::DataRate*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const*, ::webrtc::RtcEventLog*, ::webrtc::NetworkStatePredictor*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
