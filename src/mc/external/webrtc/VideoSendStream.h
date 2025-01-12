#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/rtc/VideoSourceInterface.h"
#include "mc/external/webrtc/DegradationPreference.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
namespace webrtc { class Resource; }
namespace webrtc { class VideoEncoderConfig; }
namespace webrtc { class VideoFrame; }
// clang-format on

namespace webrtc {

class VideoSendStream {
public:
    // VideoSendStream inner types declare
    // clang-format off
    struct Config;
    struct Stats;
    struct StreamStats;
    // clang-format on

    // VideoSendStream inner types define
    struct StreamStats {
    public:
        // StreamStats inner types define
        enum class StreamType : int {
            KMedia   = 0,
            KRtx     = 1,
            KFlexfec = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnka52f34;
        ::ll::UntypedStorage<4, 8>   mUnkd26a21;
        ::ll::UntypedStorage<4, 8>   mUnkd45b4a;
        ::ll::UntypedStorage<4, 4>   mUnkc179ba;
        ::ll::UntypedStorage<4, 4>   mUnka4e15a;
        ::ll::UntypedStorage<4, 4>   mUnkcf25b1;
        ::ll::UntypedStorage<4, 4>   mUnk5f9f0c;
        ::ll::UntypedStorage<4, 4>   mUnkaf4a3a;
        ::ll::UntypedStorage<4, 4>   mUnke26a19;
        ::ll::UntypedStorage<8, 128> mUnkffcf33;
        ::ll::UntypedStorage<4, 20>  mUnk3590b0;
        ::ll::UntypedStorage<8, 64>  mUnke06987;
        ::ll::UntypedStorage<8, 8>   mUnkd298f2;
        ::ll::UntypedStorage<4, 4>   mUnk82a04b;
        ::ll::UntypedStorage<8, 16>  mUnk84d23f;
        ::ll::UntypedStorage<8, 8>   mUnk80f10a;
        ::ll::UntypedStorage<8, 8>   mUnkf13538;
        ::ll::UntypedStorage<4, 4>   mUnke7c524;
        ::ll::UntypedStorage<1, 2>   mUnkb9ce33;
        // NOLINTEND

    public:
        // prevent constructor by default
        StreamStats& operator=(StreamStats const&);
        StreamStats(StreamStats const&);
        StreamStats();
    };

    struct Stats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnkd08784;
        ::ll::UntypedStorage<8, 8>  mUnkec54f1;
        ::ll::UntypedStorage<4, 4>  mUnk81aec1;
        ::ll::UntypedStorage<4, 4>  mUnk514b79;
        ::ll::UntypedStorage<4, 4>  mUnk51d329;
        ::ll::UntypedStorage<4, 4>  mUnk29f1c6;
        ::ll::UntypedStorage<8, 8>  mUnk60c6a7;
        ::ll::UntypedStorage<8, 8>  mUnk751d42;
        ::ll::UntypedStorage<4, 4>  mUnk2fb6bf;
        ::ll::UntypedStorage<4, 4>  mUnkac05d1;
        ::ll::UntypedStorage<4, 4>  mUnk1a259e;
        ::ll::UntypedStorage<4, 4>  mUnkef80c8;
        ::ll::UntypedStorage<4, 4>  mUnk321320;
        ::ll::UntypedStorage<4, 4>  mUnk3bcf47;
        ::ll::UntypedStorage<4, 4>  mUnkfef130;
        ::ll::UntypedStorage<4, 4>  mUnk757ea5;
        ::ll::UntypedStorage<4, 4>  mUnk5bb473;
        ::ll::UntypedStorage<1, 1>  mUnk509312;
        ::ll::UntypedStorage<1, 1>  mUnk9529da;
        ::ll::UntypedStorage<1, 1>  mUnkfad40c;
        ::ll::UntypedStorage<1, 1>  mUnk647519;
        ::ll::UntypedStorage<1, 1>  mUnkc14043;
        ::ll::UntypedStorage<4, 4>  mUnkebd636;
        ::ll::UntypedStorage<8, 16> mUnk7e3e93;
        ::ll::UntypedStorage<4, 4>  mUnk926b29;
        ::ll::UntypedStorage<4, 4>  mUnk577739;
        ::ll::UntypedStorage<4, 4>  mUnkaf7c29;
        ::ll::UntypedStorage<1, 1>  mUnkfa24e6;
        ::ll::UntypedStorage<8, 16> mUnk2dd3cf;
        ::ll::UntypedStorage<1, 1>  mUnk897f12;
        ::ll::UntypedStorage<4, 4>  mUnk7797dd;
        ::ll::UntypedStorage<4, 4>  mUnk8bc445;
        ::ll::UntypedStorage<1, 2>  mUnk56a450;
        // NOLINTEND

    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
    };

    struct Config {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 288> mUnkccbdb4;
        ::ll::UntypedStorage<8, 40>  mUnkc4b09b;
        ::ll::UntypedStorage<4, 4>   mUnkedf477;
        ::ll::UntypedStorage<8, 8>   mUnke19dd7;
        ::ll::UntypedStorage<4, 4>   mUnkbf7346;
        ::ll::UntypedStorage<4, 4>   mUnk6a5ab4;
        ::ll::UntypedStorage<1, 1>   mUnk945978;
        ::ll::UntypedStorage<1, 1>   mUnk1cb5a2;
        ::ll::UntypedStorage<8, 8>   mUnk48ac42;
        ::ll::UntypedStorage<8, 8>   mUnk92291e;
        ::ll::UntypedStorage<1, 5>   mUnkd97f02;
        ::ll::UntypedStorage<8, 8>   mUnkf4b2bd;
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
    // vIndex: 0
    virtual void Start() = 0;

    // vIndex: 1
    virtual void Stop() = 0;

    // vIndex: 2
    virtual bool started() = 0;

    // vIndex: 3
    virtual void AddAdaptationResource(::webrtc::scoped_refptr<::webrtc::Resource>) = 0;

    // vIndex: 4
    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::Resource>> GetAdaptationResources() = 0;

    // vIndex: 5
    virtual void
    SetSource(::rtc::VideoSourceInterface<::webrtc::VideoFrame>*, ::webrtc::DegradationPreference const&) = 0;

    // vIndex: 7
    virtual void ReconfigureVideoEncoder(::webrtc::VideoEncoderConfig) = 0;

    // vIndex: 6
    virtual void
        ReconfigureVideoEncoder(::webrtc::VideoEncoderConfig, ::absl::AnyInvocable<void(::webrtc::RTCError) &&>) = 0;

    // vIndex: 8
    virtual ::webrtc::VideoSendStream::Stats GetStats() = 0;

    // vIndex: 9
    virtual void GenerateKeyFrame(::std::vector<::std::string> const&) = 0;

    // vIndex: 10
    virtual ~VideoSendStream() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
