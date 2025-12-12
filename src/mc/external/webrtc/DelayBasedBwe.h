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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk3be98b;
        ::ll::UntypedStorage<1, 1> mUnkc49f3e;
        ::ll::UntypedStorage<8, 8> mUnkf13f6b;
        ::ll::UntypedStorage<1, 1> mUnkf3967b;
        ::ll::UntypedStorage<4, 4> mUnk5171d1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Result& operator=(Result const&);
        Result(Result const&);

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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnk5900c0;
    ::ll::UntypedStorage<8, 8>   mUnk3e3b00;
    ::ll::UntypedStorage<8, 8>   mUnk43dc17;
    ::ll::UntypedStorage<8, 16>  mUnked2a33;
    ::ll::UntypedStorage<8, 8>   mUnkca6cb9;
    ::ll::UntypedStorage<8, 8>   mUnk303704;
    ::ll::UntypedStorage<8, 8>   mUnk9601be;
    ::ll::UntypedStorage<8, 8>   mUnk841a60;
    ::ll::UntypedStorage<8, 8>   mUnkb0ff07;
    ::ll::UntypedStorage<8, 8>   mUnkd75b74;
    ::ll::UntypedStorage<8, 8>   mUnk1933c8;
    ::ll::UntypedStorage<8, 8>   mUnk8c4e11;
    ::ll::UntypedStorage<8, 8>   mUnk48a7fc;
    ::ll::UntypedStorage<8, 8>   mUnk147492;
    ::ll::UntypedStorage<8, 8>   mUnk50db90;
    ::ll::UntypedStorage<1, 1>   mUnkec733a;
    ::ll::UntypedStorage<8, 448> mUnkc4240b;
    ::ll::UntypedStorage<8, 8>   mUnk1f6b98;
    ::ll::UntypedStorage<4, 4>   mUnk44c94b;
    // NOLINTEND

public:
    // prevent constructor by default
    DelayBasedBwe& operator=(DelayBasedBwe const&);
    DelayBasedBwe(DelayBasedBwe const&);
    DelayBasedBwe();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DelayBasedBwe();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DelayBasedBwe(
        ::webrtc::FieldTrialsView const* key_value_config,
        ::webrtc::RtcEventLog*           event_log,
        ::webrtc::NetworkStatePredictor* network_state_predictor
    );

    MCNAPI ::webrtc::TimeDelta GetExpectedBwePeriod() const;

    MCNAPI void IncomingPacketFeedback(::webrtc::PacketResult const& packet_feedback, ::webrtc::Timestamp at_time);

    MCNAPI ::webrtc::DelayBasedBwe::Result IncomingPacketFeedbackVector(
        ::webrtc::TransportPacketsFeedback const&       msg,
        ::std::optional<::webrtc::DataRate>             acked_bitrate,
        ::std::optional<::webrtc::DataRate>             probe_bitrate,
        ::std::optional<::webrtc::NetworkStateEstimate> network_estimate,
        bool                                            in_alr
    );

    MCNAPI ::webrtc::DelayBasedBwe::Result MaybeUpdateEstimate(
        ::std::optional<::webrtc::DataRate>             acked_bitrate,
        ::std::optional<::webrtc::DataRate>             probe_bitrate,
        ::std::optional<::webrtc::NetworkStateEstimate> state_estimate,
        bool                                            recovered_from_overuse,
        bool                                            in_alr,
        ::webrtc::Timestamp                             at_time
    );

    MCNAPI void OnRttUpdate(::webrtc::TimeDelta avg_rtt);

    MCNAPI void SetMinBitrate(::webrtc::DataRate min_bitrate);

    MCNAPI void SetStartBitrate(::webrtc::DataRate start_bitrate);

    MCNAPI bool UpdateEstimate(
        ::webrtc::Timestamp                 at_time,
        ::std::optional<::webrtc::DataRate> acked_bitrate,
        ::webrtc::DataRate*                 target_rate
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::FieldTrialsView const* key_value_config,
        ::webrtc::RtcEventLog*           event_log,
        ::webrtc::NetworkStatePredictor* network_state_predictor
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
