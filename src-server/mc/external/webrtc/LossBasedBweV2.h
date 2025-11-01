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
    struct HoldInfo;
    struct Observation;
    struct PaddingInfo;
    struct PartialObservation;
    struct Result;
    // clang-format on
    
    // LossBasedBweV2 inner types define
    struct Result {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk7991b2;
        ::ll::UntypedStorage<4, 4> mUnkbd6ab1;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Result& operator=(Result const&);
        Result(Result const&);
        Result();
    
    };
    
    struct ChannelParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk8fa829;
        ::ll::UntypedStorage<8, 8> mUnkf4b750;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ChannelParameters& operator=(ChannelParameters const&);
        ChannelParameters(ChannelParameters const&);
        ChannelParameters();
    
    };
    
    struct Config {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk8a556c;
        ::ll::UntypedStorage<8, 8> mUnke1c54e;
        ::ll::UntypedStorage<8, 8> mUnk401f38;
        ::ll::UntypedStorage<8, 8> mUnk77c5a4;
        ::ll::UntypedStorage<8, 8> mUnk230d25;
        ::ll::UntypedStorage<8, 24> mUnkdd382b;
        ::ll::UntypedStorage<8, 8> mUnk3a6c66;
        ::ll::UntypedStorage<8, 8> mUnk41c95a;
        ::ll::UntypedStorage<8, 8> mUnk56fea3;
        ::ll::UntypedStorage<8, 8> mUnk276162;
        ::ll::UntypedStorage<8, 8> mUnk737704;
        ::ll::UntypedStorage<8, 8> mUnke727be;
        ::ll::UntypedStorage<8, 8> mUnkbe1cb9;
        ::ll::UntypedStorage<8, 8> mUnk3b98e6;
        ::ll::UntypedStorage<4, 4> mUnkd0602a;
        ::ll::UntypedStorage<8, 8> mUnkf25913;
        ::ll::UntypedStorage<1, 1> mUnk414f8a;
        ::ll::UntypedStorage<1, 1> mUnk3f6055;
        ::ll::UntypedStorage<1, 1> mUnka7c49f;
        ::ll::UntypedStorage<8, 8> mUnk73c375;
        ::ll::UntypedStorage<4, 4> mUnka7adb5;
        ::ll::UntypedStorage<8, 8> mUnk642ebd;
        ::ll::UntypedStorage<8, 8> mUnk240e73;
        ::ll::UntypedStorage<8, 8> mUnke390f1;
        ::ll::UntypedStorage<8, 8> mUnk3e30bd;
        ::ll::UntypedStorage<8, 8> mUnk8b0ca9;
        ::ll::UntypedStorage<8, 8> mUnk60c29f;
        ::ll::UntypedStorage<8, 8> mUnk6eb3c4;
        ::ll::UntypedStorage<8, 8> mUnk7fb9f2;
        ::ll::UntypedStorage<1, 1> mUnkb25660;
        ::ll::UntypedStorage<1, 1> mUnk4ff1a9;
        ::ll::UntypedStorage<1, 1> mUnk205781;
        ::ll::UntypedStorage<4, 4> mUnk315e76;
        ::ll::UntypedStorage<8, 8> mUnk2c3523;
        ::ll::UntypedStorage<8, 8> mUnk24c6ce;
        ::ll::UntypedStorage<1, 1> mUnk42b396;
        ::ll::UntypedStorage<8, 8> mUnke90b68;
        ::ll::UntypedStorage<1, 1> mUnk458227;
        ::ll::UntypedStorage<1, 1> mUnk6fa4bb;
        // NOLINTEND
    
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
    
    struct Derivatives {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk6084a6;
        ::ll::UntypedStorage<8, 8> mUnk380bb3;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Derivatives& operator=(Derivatives const&);
        Derivatives(Derivatives const&);
        Derivatives();
    
    };
    
    struct Observation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk915371;
        ::ll::UntypedStorage<4, 4> mUnkadc385;
        ::ll::UntypedStorage<4, 4> mUnk8e8404;
        ::ll::UntypedStorage<8, 8> mUnk6b54b4;
        ::ll::UntypedStorage<8, 8> mUnkbb2433;
        ::ll::UntypedStorage<8, 8> mUnke049c3;
        ::ll::UntypedStorage<4, 4> mUnk5b6fe4;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Observation& operator=(Observation const&);
        Observation(Observation const&);
        Observation();
    
    };
    
    struct PartialObservation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk6ddbfa;
        ::ll::UntypedStorage<4, 4> mUnk676689;
        ::ll::UntypedStorage<8, 8> mUnk99b4c8;
        ::ll::UntypedStorage<8, 8> mUnk9cb7c4;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        PartialObservation& operator=(PartialObservation const&);
        PartialObservation(PartialObservation const&);
        PartialObservation();
    
    };
    
    struct PaddingInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk8bf814;
        ::ll::UntypedStorage<8, 8> mUnk7b0ece;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        PaddingInfo& operator=(PaddingInfo const&);
        PaddingInfo(PaddingInfo const&);
        PaddingInfo();
    
    };
    
    struct HoldInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk10d3ac;
        ::ll::UntypedStorage<8, 8> mUnkb49201;
        ::ll::UntypedStorage<8, 8> mUnkda8305;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        HoldInfo& operator=(HoldInfo const&);
        HoldInfo(HoldInfo const&);
        HoldInfo();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkaee502;
    ::ll::UntypedStorage<8, 288> mUnkf646a5;
    ::ll::UntypedStorage<8, 16> mUnkb98071;
    ::ll::UntypedStorage<4, 4> mUnk2d03fe;
    ::ll::UntypedStorage<8, 24> mUnkca2ebd;
    ::ll::UntypedStorage<8, 24> mUnk349780;
    ::ll::UntypedStorage<8, 8> mUnkd4703e;
    ::ll::UntypedStorage<8, 8> mUnkd4f601;
    ::ll::UntypedStorage<8, 16> mUnka7304d;
    ::ll::UntypedStorage<8, 16> mUnkf05e46;
    ::ll::UntypedStorage<8, 24> mUnkd595cc;
    ::ll::UntypedStorage<8, 24> mUnk1ee2a2;
    ::ll::UntypedStorage<8, 8> mUnk9eeea7;
    ::ll::UntypedStorage<8, 8> mUnk91fe63;
    ::ll::UntypedStorage<8, 8> mUnk1e32ca;
    ::ll::UntypedStorage<8, 8> mUnka74b4d;
    ::ll::UntypedStorage<8, 8> mUnk66c515;
    ::ll::UntypedStorage<8, 16> mUnkf2ae5a;
    ::ll::UntypedStorage<8, 24> mUnk2d61a3;
    ::ll::UntypedStorage<8, 16> mUnk50eae4;
    // NOLINTEND

public:
    // prevent constructor by default
    LossBasedBweV2& operator=(LossBasedBweV2 const&);
    LossBasedBweV2(LossBasedBweV2 const&);
    LossBasedBweV2();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI double AdjustBiasFactor(double loss_rate, double bias_factor) const;

    MCNAPI void CalculateInstantLowerBound();

    MCNAPI void CalculateInstantUpperBound();

    MCNAPI void CalculateTemporalWeights();

    MCNAPI bool CanKeepIncreasingState(::webrtc::DataRate estimate) const;

    MCNAPI double GetAverageReportedByteLossRatio() const;

    MCNAPI double GetAverageReportedLossRatio() const;

    MCNAPI double GetAverageReportedPacketLossRatio() const;

    MCNAPI ::webrtc::DataRate GetCandidateBandwidthUpperBound() const;

    MCNAPI ::std::vector<::webrtc::LossBasedBweV2::ChannelParameters> GetCandidates(bool in_alr) const;

    MCNAPI ::webrtc::LossBasedBweV2::Derivatives GetDerivatives(::webrtc::LossBasedBweV2::ChannelParameters const& channel_parameters) const;

    MCNAPI double GetFeasibleInherentLoss(::webrtc::LossBasedBweV2::ChannelParameters const& channel_parameters) const;

    MCNAPI double GetHighBandwidthBias(::webrtc::DataRate bandwidth) const;

    MCNAPI double GetInherentLossUpperBound(::webrtc::DataRate bandwidth) const;

    MCNAPI ::webrtc::DataRate GetInstantLowerBound() const;

    MCNAPI ::webrtc::DataRate GetInstantUpperBound() const;

    MCNAPI ::webrtc::LossBasedBweV2::Result GetLossBasedResult() const;

    MCNAPI double GetObjective(::webrtc::LossBasedBweV2::ChannelParameters const& channel_parameters) const;

    MCNAPI ::webrtc::DataRate GetSendingRate(::webrtc::DataRate instantaneous_sending_rate) const;

    MCNAPI bool IsConfigValid() const;

    MCNAPI bool IsEnabled() const;

    MCNAPI bool IsEstimateIncreasingWhenLossLimited(::webrtc::DataRate old_estimate, ::webrtc::DataRate new_estimate);

    MCNAPI bool IsInLossLimitedState() const;

    MCNAPI bool IsReady() const;

    MCNAPI explicit LossBasedBweV2(::webrtc::FieldTrialsView const* key_value_config);

    MCNAPI void NewtonsMethodUpdate(::webrtc::LossBasedBweV2::ChannelParameters& channel_parameters) const;

    MCNAPI bool PaceAtLossBasedEstimate() const;

    MCNAPI bool PushBackObservation(::rtc::ArrayView<::webrtc::PacketResult const> packet_results);

    MCNAPI bool ReadyToUseInStartPhase() const;

    MCNAPI void SetAcknowledgedBitrate(::webrtc::DataRate acknowledged_bitrate);

    MCNAPI void SetMinMaxBitrate(::webrtc::DataRate min_bitrate, ::webrtc::DataRate max_bitrate);

    MCNAPI void UpdateBandwidthEstimate(::rtc::ArrayView<::webrtc::PacketResult const> packet_results, ::webrtc::DataRate delay_based_estimate, bool in_alr);

    MCNAPI bool UseInStartPhase() const;

    MCNAPI ~LossBasedBweV2();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::webrtc::LossBasedBweV2::Config> CreateConfig(::webrtc::FieldTrialsView const* key_value_config);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const* key_value_config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
