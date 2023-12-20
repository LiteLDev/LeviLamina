#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/BandwidthUsage.h"
#include "mc/deps/webrtc/detail/ArrayView.h"

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
    struct ChannelParameters {
    public:
        // prevent constructor by default
        ChannelParameters& operator=(ChannelParameters const&);
        ChannelParameters(ChannelParameters const&);
        ChannelParameters();
    };

    struct Config {
    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();
    };

    struct Derivatives {
    public:
        // prevent constructor by default
        Derivatives& operator=(Derivatives const&);
        Derivatives(Derivatives const&);
        Derivatives();
    };

    struct Result {
    public:
        // prevent constructor by default
        Result& operator=(Result const&);
        Result(Result const&);
        Result();
    };

public:
    // prevent constructor by default
    LossBasedBweV2& operator=(LossBasedBweV2 const&);
    LossBasedBweV2(LossBasedBweV2 const&);
    LossBasedBweV2();

public:
    // NOLINTBEGIN
    // symbol: ?GetLossBasedResult@LossBasedBweV2@webrtc@@QEBA?AUResult@12@XZ
    MCAPI struct webrtc::LossBasedBweV2::Result GetLossBasedResult() const;

    // symbol: ?IsEnabled@LossBasedBweV2@webrtc@@QEBA_NXZ
    MCAPI bool IsEnabled() const;

    // symbol: ?IsReady@LossBasedBweV2@webrtc@@QEBA_NXZ
    MCAPI bool IsReady() const;

    // symbol: ??0LossBasedBweV2@webrtc@@QEAA@PEBVFieldTrialsView@1@@Z
    MCAPI explicit LossBasedBweV2(class webrtc::FieldTrialsView const*);

    // symbol: ?SetAcknowledgedBitrate@LossBasedBweV2@webrtc@@QEAAXVDataRate@2@@Z
    MCAPI void SetAcknowledgedBitrate(class webrtc::DataRate);

    // symbol: ?SetBandwidthEstimate@LossBasedBweV2@webrtc@@QEAAXVDataRate@2@@Z
    MCAPI void SetBandwidthEstimate(class webrtc::DataRate);

    // symbol: ?SetMinMaxBitrate@LossBasedBweV2@webrtc@@QEAAXVDataRate@2@0@Z
    MCAPI void SetMinMaxBitrate(class webrtc::DataRate, class webrtc::DataRate);

    // symbol:
    // ?UpdateBandwidthEstimate@LossBasedBweV2@webrtc@@QEAAXV?$ArrayView@$$CBUPacketResult@webrtc@@$0?BCGH@@rtc@@VDataRate@2@W4BandwidthUsage@2@V?$optional@VDataRate@webrtc@@@std@@1@Z
    MCAPI void UpdateBandwidthEstimate(
        class rtc::ArrayView<struct webrtc::PacketResult const, -4711>,
        class webrtc::DataRate,
        ::webrtc::BandwidthUsage,
        std::optional<class webrtc::DataRate>,
        class webrtc::DataRate
    );

    // symbol: ??1LossBasedBweV2@webrtc@@QEAA@XZ
    MCAPI ~LossBasedBweV2();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AdjustBiasFactor@LossBasedBweV2@webrtc@@AEBANNN@Z
    MCAPI double AdjustBiasFactor(double, double) const;

    // symbol: ?CalculateInstantUpperBound@LossBasedBweV2@webrtc@@AEAAXXZ
    MCAPI void CalculateInstantUpperBound();

    // symbol: ?CalculateTemporalWeights@LossBasedBweV2@webrtc@@AEAAXXZ
    MCAPI void CalculateTemporalWeights();

    // symbol: ?GetAverageReportedLossRatio@LossBasedBweV2@webrtc@@AEBANXZ
    MCAPI double GetAverageReportedLossRatio() const;

    // symbol: ?GetCandidateBandwidthUpperBound@LossBasedBweV2@webrtc@@AEBA?AVDataRate@2@XZ
    MCAPI class webrtc::DataRate GetCandidateBandwidthUpperBound() const;

    // symbol:
    // ?GetCandidates@LossBasedBweV2@webrtc@@AEBA?AV?$vector@UChannelParameters@LossBasedBweV2@webrtc@@V?$allocator@UChannelParameters@LossBasedBweV2@webrtc@@@std@@@std@@XZ
    MCAPI std::vector<struct webrtc::LossBasedBweV2::ChannelParameters> GetCandidates() const;

    // symbol: ?GetDerivatives@LossBasedBweV2@webrtc@@AEBA?AUDerivatives@12@AEBUChannelParameters@12@@Z
    MCAPI struct webrtc::LossBasedBweV2::Derivatives
    GetDerivatives(struct webrtc::LossBasedBweV2::ChannelParameters const&) const;

    // symbol: ?GetFeasibleInherentLoss@LossBasedBweV2@webrtc@@AEBANAEBUChannelParameters@12@@Z
    MCAPI double GetFeasibleInherentLoss(struct webrtc::LossBasedBweV2::ChannelParameters const&) const;

    // symbol: ?GetHighBandwidthBias@LossBasedBweV2@webrtc@@AEBANVDataRate@2@@Z
    MCAPI double GetHighBandwidthBias(class webrtc::DataRate) const;

    // symbol: ?GetInherentLossUpperBound@LossBasedBweV2@webrtc@@AEBANVDataRate@2@@Z
    MCAPI double GetInherentLossUpperBound(class webrtc::DataRate) const;

    // symbol: ?GetInstantUpperBound@LossBasedBweV2@webrtc@@AEBA?AVDataRate@2@XZ
    MCAPI class webrtc::DataRate GetInstantUpperBound() const;

    // symbol: ?GetObjective@LossBasedBweV2@webrtc@@AEBANAEBUChannelParameters@12@@Z
    MCAPI double GetObjective(struct webrtc::LossBasedBweV2::ChannelParameters const&) const;

    // symbol: ?GetSendingRate@LossBasedBweV2@webrtc@@AEBA?AVDataRate@2@V32@@Z
    MCAPI class webrtc::DataRate GetSendingRate(class webrtc::DataRate) const;

    // symbol: ?IsBandwidthLimitedDueToLoss@LossBasedBweV2@webrtc@@AEBA_NXZ
    MCAPI bool IsBandwidthLimitedDueToLoss() const;

    // symbol: ?IsConfigValid@LossBasedBweV2@webrtc@@AEBA_NXZ
    MCAPI bool IsConfigValid() const;

    // symbol: ?IsEstimateIncreasingWhenLossLimited@LossBasedBweV2@webrtc@@AEAA_NAEBUChannelParameters@12@@Z
    MCAPI bool IsEstimateIncreasingWhenLossLimited(struct webrtc::LossBasedBweV2::ChannelParameters const&);

    // symbol: ?NewtonsMethodUpdate@LossBasedBweV2@webrtc@@AEBAXAEAUChannelParameters@12@@Z
    MCAPI void NewtonsMethodUpdate(struct webrtc::LossBasedBweV2::ChannelParameters&) const;

    // symbol:
    // ?PushBackObservation@LossBasedBweV2@webrtc@@AEAA_NV?$ArrayView@$$CBUPacketResult@webrtc@@$0?BCGH@@rtc@@W4BandwidthUsage@2@@Z
    MCAPI bool
        PushBackObservation(class rtc::ArrayView<struct webrtc::PacketResult const, -4711>, ::webrtc::BandwidthUsage);

    // symbol: ?SetProbeBitrate@LossBasedBweV2@webrtc@@AEAAXV?$optional@VDataRate@webrtc@@@std@@@Z
    MCAPI void SetProbeBitrate(std::optional<class webrtc::DataRate>);

    // symbol: ?TrendlineEsimateAllowBitrateIncrease@LossBasedBweV2@webrtc@@AEBA_NXZ
    MCAPI bool TrendlineEsimateAllowBitrateIncrease() const;

    // symbol: ?TrendlineEsimateAllowEmergencyBackoff@LossBasedBweV2@webrtc@@AEBA_NXZ
    MCAPI bool TrendlineEsimateAllowEmergencyBackoff() const;

    // symbol:
    // ?CreateConfig@LossBasedBweV2@webrtc@@CA?AV?$optional@UConfig@LossBasedBweV2@webrtc@@@std@@PEBVFieldTrialsView@2@@Z
    MCAPI static std::optional<struct webrtc::LossBasedBweV2::Config>
    CreateConfig(class webrtc::FieldTrialsView const*);

    // NOLINTEND
};

}; // namespace webrtc
