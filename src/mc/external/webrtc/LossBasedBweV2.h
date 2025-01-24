#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { struct PacketResult; }
// clang-format on

namespace webrtc {

class LossBasedBweV2 {
public:
    // LossBasedBweV2 inner types declare
    // clang-format off
    struct ChannelParameters;
    struct Config;
    struct Derivatives;
    struct Result;
    // clang-format on

    // LossBasedBweV2 inner types define
    struct ChannelParameters {};

    struct Config {
    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Config();

        MCAPI Config(::webrtc::LossBasedBweV2::Config&&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();

        MCAPI void* $ctor(::webrtc::LossBasedBweV2::Config&&);
        // NOLINTEND
    };

    struct Derivatives {};

    struct Result {};

public:
    // member functions
    // NOLINTBEGIN
    MCAPI double AdjustBiasFactor(double, double) const;

    MCAPI void CalculateInstantLowerBound();

    MCAPI void CalculateInstantUpperBound();

    MCAPI void CalculateTemporalWeights();

    MCAPI bool CanKeepIncreasingState(::webrtc::DataRate) const;

    MCAPI double GetAverageReportedByteLossRatio() const;

    MCAPI double GetAverageReportedLossRatio() const;

    MCAPI double GetAverageReportedPacketLossRatio() const;

    MCAPI ::webrtc::DataRate GetCandidateBandwidthUpperBound() const;

    MCAPI ::std::vector<::webrtc::LossBasedBweV2::ChannelParameters> GetCandidates(bool) const;

    MCAPI ::webrtc::LossBasedBweV2::Derivatives
    GetDerivatives(::webrtc::LossBasedBweV2::ChannelParameters const&) const;

    MCAPI double GetFeasibleInherentLoss(::webrtc::LossBasedBweV2::ChannelParameters const&) const;

    MCAPI double GetHighBandwidthBias(::webrtc::DataRate) const;

    MCAPI double GetInherentLossUpperBound(::webrtc::DataRate) const;

    MCAPI ::webrtc::DataRate GetInstantLowerBound() const;

    MCAPI ::webrtc::DataRate GetInstantUpperBound() const;

    MCAPI ::webrtc::LossBasedBweV2::Result GetLossBasedResult() const;

    MCAPI double GetObjective(::webrtc::LossBasedBweV2::ChannelParameters const&) const;

    MCAPI ::webrtc::DataRate GetSendingRate(::webrtc::DataRate) const;

    MCAPI bool IsConfigValid() const;

    MCAPI bool IsEnabled() const;

    MCAPI bool IsEstimateIncreasingWhenLossLimited(::webrtc::DataRate, ::webrtc::DataRate);

    MCAPI bool IsInLossLimitedState() const;

    MCAPI bool IsReady() const;

    MCAPI explicit LossBasedBweV2(::webrtc::FieldTrialsView const*);

    MCAPI void NewtonsMethodUpdate(::webrtc::LossBasedBweV2::ChannelParameters&) const;

    MCAPI bool PaceAtLossBasedEstimate() const;

    MCAPI bool PushBackObservation(::rtc::ArrayView<::webrtc::PacketResult const>);

    MCAPI bool ReadyToUseInStartPhase() const;

    MCAPI void SetAcknowledgedBitrate(::webrtc::DataRate);

    MCAPI void SetMinMaxBitrate(::webrtc::DataRate, ::webrtc::DataRate);

    MCAPI void UpdateBandwidthEstimate(::rtc::ArrayView<::webrtc::PacketResult const>, ::webrtc::DataRate, bool);

    MCAPI bool UseInStartPhase() const;

    MCAPI ~LossBasedBweV2();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::webrtc::LossBasedBweV2::Config> CreateConfig(::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
