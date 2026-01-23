#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BandwidthUsage.h"
#include "mc/external/webrtc/DelayIncreaseDetectorInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class NetworkStatePredictor; }
// clang-format on

namespace webrtc {

class TrendlineEstimator : public ::webrtc::DelayIncreaseDetectorInterface {
public:
    // TrendlineEstimator inner types declare
    // clang-format off
    struct PacketTiming;
    // clang-format on

    // TrendlineEstimator inner types define
    struct PacketTiming {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkfed16e;
        ::ll::UntypedStorage<8, 8> mUnk79b52f;
        ::ll::UntypedStorage<8, 8> mUnk9826d8;
        // NOLINTEND

    public:
        // prevent constructor by default
        PacketTiming& operator=(PacketTiming const&);
        PacketTiming(PacketTiming const&);
        PacketTiming();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9333f3;
    ::ll::UntypedStorage<8, 8>  mUnk851040;
    ::ll::UntypedStorage<8, 8>  mUnka2b82a;
    ::ll::UntypedStorage<4, 4>  mUnkd5f16a;
    ::ll::UntypedStorage<8, 8>  mUnk8752be;
    ::ll::UntypedStorage<8, 8>  mUnk75a92d;
    ::ll::UntypedStorage<8, 8>  mUnk84f8af;
    ::ll::UntypedStorage<8, 40> mUnkd89762;
    ::ll::UntypedStorage<8, 8>  mUnk56335e;
    ::ll::UntypedStorage<8, 8>  mUnk383e8e;
    ::ll::UntypedStorage<8, 8>  mUnk99a461;
    ::ll::UntypedStorage<8, 8>  mUnkb8ba62;
    ::ll::UntypedStorage<8, 8>  mUnke3e019;
    ::ll::UntypedStorage<8, 8>  mUnk57c52f;
    ::ll::UntypedStorage<8, 8>  mUnkef169c;
    ::ll::UntypedStorage<8, 8>  mUnka111c0;
    ::ll::UntypedStorage<4, 4>  mUnkee0cb6;
    ::ll::UntypedStorage<4, 4>  mUnk323047;
    ::ll::UntypedStorage<4, 4>  mUnk65bffc;
    ::ll::UntypedStorage<8, 8>  mUnk4103ef;
    // NOLINTEND

public:
    // prevent constructor by default
    TrendlineEstimator& operator=(TrendlineEstimator const&);
    TrendlineEstimator(TrendlineEstimator const&);
    TrendlineEstimator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TrendlineEstimator() /*override*/ = default;

    virtual void Update(
        double recv_delta_ms,
        double send_delta_ms,
        int64  send_time_ms,
        int64  arrival_time_ms,
        uint64 packet_size,
        bool   calculated_deltas
    ) /*override*/;

    virtual ::webrtc::BandwidthUsage State() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Detect(double trend, double ts_delta, int64 now_ms);

    MCNAPI TrendlineEstimator(
        ::webrtc::FieldTrialsView const* key_value_config,
        ::webrtc::NetworkStatePredictor* network_state_predictor
    );

    MCNAPI void UpdateTrendline(
        double recv_delta_ms,
        double send_delta_ms,
        int64  send_time_ms,
        int64  arrival_time_ms,
        uint64 packet_size
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::webrtc::FieldTrialsView const* key_value_config, ::webrtc::NetworkStatePredictor* network_state_predictor);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $Update(
        double recv_delta_ms,
        double send_delta_ms,
        int64  send_time_ms,
        int64  arrival_time_ms,
        uint64 packet_size,
        bool   calculated_deltas
    );

    MCNAPI ::webrtc::BandwidthUsage $State() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
