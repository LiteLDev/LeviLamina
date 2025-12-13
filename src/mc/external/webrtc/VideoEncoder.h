#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoFrameType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class EncodedImageCallback; }
namespace webrtc { class FecControllerOverride; }
namespace webrtc { class VideoCodec; }
namespace webrtc { class VideoFrame; }
// clang-format on

namespace webrtc {

class VideoEncoder {
public:
    // VideoEncoder inner types declare
    // clang-format off
    struct Capabilities;
    struct EncoderInfo;
    struct LossNotification;
    struct QpThresholds;
    struct RateControlParameters;
    struct ResolutionBitrateLimits;
    struct ScalingSettings;
    struct Settings;
    // clang-format on

    // VideoEncoder inner types define
    struct QpThresholds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk5e7fe6;
        ::ll::UntypedStorage<4, 4> mUnk96a8cc;
        // NOLINTEND

    public:
        // prevent constructor by default
        QpThresholds& operator=(QpThresholds const&);
        QpThresholds(QpThresholds const&);
        QpThresholds();
    };

    struct ScalingSettings {
    public:
        // ScalingSettings inner types declare
        // clang-format off
        struct KOff;
        // clang-format on

        // ScalingSettings inner types define
        struct KOff {};

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk9e2e3e;
        ::ll::UntypedStorage<4, 4>  mUnkfbf585;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScalingSettings& operator=(ScalingSettings const&);
        ScalingSettings(ScalingSettings const&);
        ScalingSettings();
    };

    struct ResolutionBitrateLimits {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk9e7e3f;
        ::ll::UntypedStorage<4, 4> mUnk8c7e9a;
        ::ll::UntypedStorage<4, 4> mUnkb47c68;
        ::ll::UntypedStorage<4, 4> mUnke3bcf5;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResolutionBitrateLimits& operator=(ResolutionBitrateLimits const&);
        ResolutionBitrateLimits(ResolutionBitrateLimits const&);
        ResolutionBitrateLimits();
    };

    struct EncoderInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 16>  mUnkbc9641;
        ::ll::UntypedStorage<4, 4>   mUnkf0b580;
        ::ll::UntypedStorage<1, 1>   mUnkaa5060;
        ::ll::UntypedStorage<1, 1>   mUnka8a3b9;
        ::ll::UntypedStorage<8, 32>  mUnk603a57;
        ::ll::UntypedStorage<1, 1>   mUnk67e473;
        ::ll::UntypedStorage<1, 1>   mUnk4f4269;
        ::ll::UntypedStorage<1, 120> mUnk716bb6;
        ::ll::UntypedStorage<8, 24>  mUnkc10a5b;
        ::ll::UntypedStorage<1, 1>   mUnk6b7257;
        ::ll::UntypedStorage<1, 32>  mUnke37d9f;
        ::ll::UntypedStorage<1, 2>   mUnkc35f3d;
        // NOLINTEND

    public:
        // prevent constructor by default
        EncoderInfo& operator=(EncoderInfo const&);
        EncoderInfo(EncoderInfo const&);
        EncoderInfo();
    };

    struct RateControlParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 168> mUnk88beae;
        ::ll::UntypedStorage<4, 168> mUnk7f026f;
        ::ll::UntypedStorage<8, 8>   mUnkf17317;
        ::ll::UntypedStorage<8, 8>   mUnka186d5;
        // NOLINTEND

    public:
        // prevent constructor by default
        RateControlParameters& operator=(RateControlParameters const&);
        RateControlParameters(RateControlParameters const&);
        RateControlParameters();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~RateControlParameters() = default;
        // NOLINTEND
    };

    struct LossNotification {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkf2a1b2;
        ::ll::UntypedStorage<4, 4> mUnkbce05b;
        ::ll::UntypedStorage<1, 2> mUnk849bfb;
        ::ll::UntypedStorage<1, 2> mUnk803218;
        // NOLINTEND

    public:
        // prevent constructor by default
        LossNotification& operator=(LossNotification const&);
        LossNotification(LossNotification const&);
        LossNotification();
    };

    struct Capabilities {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk2f0cd1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Capabilities& operator=(Capabilities const&);
        Capabilities(Capabilities const&);
        Capabilities();
    };

    struct Settings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk64b4cd;
        ::ll::UntypedStorage<4, 4> mUnk7e026f;
        ::ll::UntypedStorage<8, 8> mUnke8baf6;
        ::ll::UntypedStorage<4, 8> mUnk99cf04;
        // NOLINTEND

    public:
        // prevent constructor by default
        Settings& operator=(Settings const&);
        Settings(Settings const&);
        Settings();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VideoEncoder() = default;

    // vIndex: 1
    virtual void SetFecControllerOverride(::webrtc::FecControllerOverride*);

    // vIndex: 3
    virtual int InitEncode(::webrtc::VideoCodec const*, int, uint64);

    // vIndex: 2
    virtual int InitEncode(::webrtc::VideoCodec const*, ::webrtc::VideoEncoder::Settings const&);

    // vIndex: 4
    virtual int RegisterEncodeCompleteCallback(::webrtc::EncodedImageCallback*) = 0;

    // vIndex: 5
    virtual int Release() = 0;

    // vIndex: 6
    virtual int Encode(::webrtc::VideoFrame const&, ::std::vector<::webrtc::VideoFrameType> const*) = 0;

    // vIndex: 7
    virtual void SetRates(::webrtc::VideoEncoder::RateControlParameters const&) = 0;

    // vIndex: 8
    virtual void OnPacketLossRateUpdate(float);

    // vIndex: 9
    virtual void OnRttUpdate(int64);

    // vIndex: 10
    virtual void OnLossNotification(::webrtc::VideoEncoder::LossNotification const&);

    // vIndex: 11
    virtual ::webrtc::VideoEncoder::EncoderInfo GetEncoderInfo() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
