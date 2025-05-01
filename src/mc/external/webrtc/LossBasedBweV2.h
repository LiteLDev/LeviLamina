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
    struct Observation;
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
        MCNAPI Config();

        MCNAPI Config(::webrtc::LossBasedBweV2::Config&&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();

        MCNAPI void* $ctor(::webrtc::LossBasedBweV2::Config&&);
        // NOLINTEND
    };

    struct Derivatives {};

    struct Observation {};

    struct Result {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI double AdjustBiasFactor(double, double) const;

    MCNAPI void CalculateInstantLowerBound();

    MCNAPI void CalculateInstantUpperBound();

    MCNAPI void CalculateTemporalWeights();

    MCNAPI bool CanKeepIncreasingState(::webrtc::DataRate) const;

    MCNAPI double GetAverageReportedByteLossRatio() const;

    MCNAPI double GetAverageReportedLossRatio() const;

    MCNAPI double GetAverageReportedPacketLossRatio() const;

    MCNAPI ::webrtc::DataRate GetCandidateBandwidthUpperBound() const;

    MCNAPI ::std::vector<::webrtc::LossBasedBweV2::ChannelParameters> GetCandidates(bool) const;

    MCNAPI ::webrtc::LossBasedBweV2::Derivatives
    GetDerivatives(::webrtc::LossBasedBweV2::ChannelParameters const&) const;

    MCNAPI double GetFeasibleInherentLoss(::webrtc::LossBasedBweV2::ChannelParameters const&) const;

    MCNAPI double GetHighBandwidthBias(::webrtc::DataRate) const;

    MCNAPI double GetInherentLossUpperBound(::webrtc::DataRate) const;

    MCNAPI ::webrtc::DataRate GetInstantLowerBound() const;

    MCNAPI ::webrtc::DataRate GetInstantUpperBound() const;

    MCNAPI ::webrtc::LossBasedBweV2::Result GetLossBasedResult() const;

    MCNAPI double GetObjective(::webrtc::LossBasedBweV2::ChannelParameters const&) const;

    MCNAPI ::webrtc::DataRate GetSendingRate(::webrtc::DataRate) const;

    MCNAPI bool IsConfigValid() const;

    MCNAPI bool IsEnabled() const;

    MCNAPI bool IsEstimateIncreasingWhenLossLimited(::webrtc::DataRate, ::webrtc::DataRate);

    MCNAPI bool IsInLossLimitedState() const;

    MCNAPI bool IsReady() const;

    MCNAPI explicit LossBasedBweV2(::webrtc::FieldTrialsView const*);

    MCNAPI void NewtonsMethodUpdate(::webrtc::LossBasedBweV2::ChannelParameters&) const;

    MCNAPI bool PaceAtLossBasedEstimate() const;

    MCNAPI bool PushBackObservation(::rtc::ArrayView<::webrtc::PacketResult const>);

    MCNAPI bool ReadyToUseInStartPhase() const;

    MCNAPI void SetAcknowledgedBitrate(::webrtc::DataRate);

    MCNAPI void SetMinMaxBitrate(::webrtc::DataRate, ::webrtc::DataRate);

    MCNAPI void UpdateBandwidthEstimate(::rtc::ArrayView<::webrtc::PacketResult const>, ::webrtc::DataRate, bool);

    MCNAPI bool UseInStartPhase() const;

    MCNAPI ~LossBasedBweV2();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::webrtc::LossBasedBweV2::Config> CreateConfig(::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
