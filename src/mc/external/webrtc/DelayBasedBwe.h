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
        // prevent constructor by default
        Result& operator=(Result const&);
        Result(Result const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Result();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    DelayBasedBwe& operator=(DelayBasedBwe const&);
    DelayBasedBwe(DelayBasedBwe const&);
    DelayBasedBwe();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DelayBasedBwe(::webrtc::FieldTrialsView const*, ::webrtc::RtcEventLog*, ::webrtc::NetworkStatePredictor*);

    MCAPI ::webrtc::TimeDelta GetExpectedBwePeriod() const;

    MCAPI void IncomingPacketFeedback(::webrtc::PacketResult const&, ::webrtc::Timestamp);

    MCAPI ::webrtc::DelayBasedBwe::Result IncomingPacketFeedbackVector(
        ::webrtc::TransportPacketsFeedback const&,
        ::std::optional<::webrtc::DataRate>,
        ::std::optional<::webrtc::DataRate>,
        ::std::optional<::webrtc::NetworkStateEstimate>,
        bool
    );

    MCAPI ::webrtc::DelayBasedBwe::Result MaybeUpdateEstimate(
        ::std::optional<::webrtc::DataRate>,
        ::std::optional<::webrtc::DataRate>,
        ::std::optional<::webrtc::NetworkStateEstimate>,
        bool,
        bool,
        ::webrtc::Timestamp
    );

    MCAPI void OnRttUpdate(::webrtc::TimeDelta);

    MCAPI void SetMinBitrate(::webrtc::DataRate);

    MCAPI void SetStartBitrate(::webrtc::DataRate);

    MCAPI bool UpdateEstimate(::webrtc::Timestamp, ::std::optional<::webrtc::DataRate>, ::webrtc::DataRate*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const*, ::webrtc::RtcEventLog*, ::webrtc::NetworkStatePredictor*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
