#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaReceiveStreamInterface.h"
#include "mc/external/webrtc/ReceiveStreamInterface.h"
#include "mc/external/webrtc/RtcpMode.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketSinkInterface; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

class VideoReceiveStreamInterface : public ::webrtc::MediaReceiveStreamInterface {
public:
    // VideoReceiveStreamInterface inner types declare
    // clang-format off
    struct Config;
    struct Decoder;
    struct RecordingState;
    struct Stats;
    // clang-format on

    // VideoReceiveStreamInterface inner types define
    struct RecordingState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkc6631d;
        ::ll::UntypedStorage<8, 16> mUnkd92630;
        // NOLINTEND

    public:
        // prevent constructor by default
        RecordingState& operator=(RecordingState const&);
        RecordingState(RecordingState const&);
        RecordingState();
    };

    struct Decoder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 96> mUnkd50438;
        ::ll::UntypedStorage<4, 4>  mUnk212524;
        // NOLINTEND

    public:
        // prevent constructor by default
        Decoder& operator=(Decoder const&);
        Decoder(Decoder const&);
        Decoder();
    };

    struct Stats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnk8cecc0;
        ::ll::UntypedStorage<4, 4>   mUnk7e15ba;
        ::ll::UntypedStorage<4, 4>   mUnkc6f304;
        ::ll::UntypedStorage<4, 4>   mUnk4df0e2;
        ::ll::UntypedStorage<8, 40>  mUnkaad53a;
        ::ll::UntypedStorage<1, 2>   mUnkb21f5b;
        ::ll::UntypedStorage<4, 8>   mUnkc65bfd;
        ::ll::UntypedStorage<4, 4>   mUnkd6888c;
        ::ll::UntypedStorage<4, 4>   mUnk9cfa18;
        ::ll::UntypedStorage<4, 4>   mUnk905a6d;
        ::ll::UntypedStorage<4, 4>   mUnk720c40;
        ::ll::UntypedStorage<4, 4>   mUnk64c021;
        ::ll::UntypedStorage<8, 8>   mUnk94e2f2;
        ::ll::UntypedStorage<8, 8>   mUnkb981e7;
        ::ll::UntypedStorage<8, 8>   mUnkce34ac;
        ::ll::UntypedStorage<8, 8>   mUnk472419;
        ::ll::UntypedStorage<4, 4>   mUnk22be6a;
        ::ll::UntypedStorage<4, 4>   mUnk20abfb;
        ::ll::UntypedStorage<8, 8>   mUnk95e978;
        ::ll::UntypedStorage<4, 4>   mUnkca85c8;
        ::ll::UntypedStorage<4, 4>   mUnk414d30;
        ::ll::UntypedStorage<8, 8>   mUnk1dc308;
        ::ll::UntypedStorage<8, 8>   mUnke3c37d;
        ::ll::UntypedStorage<8, 8>   mUnk13177d;
        ::ll::UntypedStorage<4, 4>   mUnk9814de;
        ::ll::UntypedStorage<8, 8>   mUnk917a0a;
        ::ll::UntypedStorage<8, 8>   mUnkf89398;
        ::ll::UntypedStorage<8, 8>   mUnk248e7a;
        ::ll::UntypedStorage<8, 16>  mUnk2aea4a;
        ::ll::UntypedStorage<4, 4>   mUnk956024;
        ::ll::UntypedStorage<4, 4>   mUnkc61dbd;
        ::ll::UntypedStorage<4, 4>   mUnk2be7a8;
        ::ll::UntypedStorage<4, 4>   mUnk32a8f2;
        ::ll::UntypedStorage<4, 4>   mUnkf1275f;
        ::ll::UntypedStorage<4, 4>   mUnkfcdb3d;
        ::ll::UntypedStorage<4, 4>   mUnk5d00f0;
        ::ll::UntypedStorage<4, 4>   mUnk13ca5c;
        ::ll::UntypedStorage<1, 1>   mUnkedc9a5;
        ::ll::UntypedStorage<8, 16>  mUnk6e373c;
        ::ll::UntypedStorage<4, 4>   mUnk64258c;
        ::ll::UntypedStorage<4, 4>   mUnk603193;
        ::ll::UntypedStorage<8, 32>  mUnka80715;
        ::ll::UntypedStorage<8, 72>  mUnk91f8af;
        ::ll::UntypedStorage<4, 20>  mUnk7f567a;
        ::ll::UntypedStorage<8, 80>  mUnkad454f;
        ::ll::UntypedStorage<8, 120> mUnk481cce;
        // NOLINTEND

    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
    };

    struct Config {
    public:
        // Config inner types declare
        // clang-format off
        struct Rtp;
        // clang-format on

        // Config inner types define
        struct Rtp : public ::webrtc::ReceiveStreamInterface::ReceiveStreamRtpConfig {
        public:
            // Rtp inner types declare
            // clang-format off
            struct RtcpXr;
            // clang-format on

            // Rtp inner types define
            struct RtcpXr {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<1, 1> mUnke93edb;
                // NOLINTEND

            public:
                // prevent constructor by default
                RtcpXr& operator=(RtcpXr const&);
                RtcpXr(RtcpXr const&);
                RtcpXr();
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 4>  mUnkb0ce96;
            ::ll::UntypedStorage<4, 4>  mUnke82730;
            ::ll::UntypedStorage<1, 1>  mUnka4fbb2;
            ::ll::UntypedStorage<1, 1>  mUnk1c2e16;
            ::ll::UntypedStorage<1, 1>  mUnkc1e528;
            ::ll::UntypedStorage<4, 4>  mUnkbd7dbf;
            ::ll::UntypedStorage<4, 4>  mUnk2192b1;
            ::ll::UntypedStorage<4, 4>  mUnk49786d;
            ::ll::UntypedStorage<1, 1>  mUnk436b1d;
            ::ll::UntypedStorage<8, 8>  mUnk646edf;
            ::ll::UntypedStorage<8, 16> mUnkde6485;
            ::ll::UntypedStorage<8, 16> mUnkc47534;
            // NOLINTEND

        public:
            // prevent constructor by default
            Rtp& operator=(Rtp const&);
            Rtp(Rtp const&);
            Rtp();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk3166fa;
        ::ll::UntypedStorage<8, 8>  mUnk3011b4;
        ::ll::UntypedStorage<8, 80> mUnk75c8ec;
        ::ll::UntypedStorage<8, 8>  mUnk17579e;
        ::ll::UntypedStorage<8, 8>  mUnkd8ed57;
        ::ll::UntypedStorage<4, 4>  mUnke97962;
        ::ll::UntypedStorage<1, 1>  mUnk3debf5;
        ::ll::UntypedStorage<8, 32> mUnkc6afcf;
        ::ll::UntypedStorage<8, 8>  mUnkb16578;
        ::ll::UntypedStorage<1, 5>  mUnke6c110;
        ::ll::UntypedStorage<8, 8>  mUnk9e1477;
        // NOLINTEND

    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual ::webrtc::VideoReceiveStreamInterface::Stats GetStats() const = 0;

    // vIndex: 7
    virtual bool SetBaseMinimumPlayoutDelayMs(int) = 0;

    // vIndex: 8
    virtual int GetBaseMinimumPlayoutDelayMs() const = 0;

    // vIndex: 9
    virtual ::webrtc::VideoReceiveStreamInterface::RecordingState
    SetAndGetRecordingState(::webrtc::VideoReceiveStreamInterface::RecordingState, bool) = 0;

    // vIndex: 10
    virtual void GenerateKeyFrame() = 0;

    // vIndex: 11
    virtual void SetRtcpMode(::webrtc::RtcpMode) = 0;

    // vIndex: 12
    virtual void SetFlexFecProtection(::webrtc::RtpPacketSinkInterface*) = 0;

    // vIndex: 13
    virtual void SetLossNotificationEnabled(bool) = 0;

    // vIndex: 14
    virtual void SetNackHistory(::webrtc::TimeDelta) = 0;

    // vIndex: 15
    virtual void SetProtectionPayloadTypes(int, int) = 0;

    // vIndex: 16
    virtual void SetRtcpXr(::webrtc::VideoReceiveStreamInterface::Config::Rtp::RtcpXr) = 0;

    // vIndex: 17
    virtual void SetAssociatedPayloadTypes(::std::map<int, int>) = 0;

    // vIndex: 18
    virtual void UpdateRtxSsrc(uint) = 0;

    // vIndex: 0
    virtual ~VideoReceiveStreamInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
