#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaReceiveStreamInterface.h"
#include "mc/external/webrtc/ReceiveStreamInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioSinkInterface; }
namespace webrtc { struct SdpAudioFormat; }
// clang-format on

namespace webrtc {

class AudioReceiveStreamInterface : public ::webrtc::MediaReceiveStreamInterface {
public:
    // AudioReceiveStreamInterface inner types declare
    // clang-format off
    struct Config;
    struct Stats;
    // clang-format on
    
    // AudioReceiveStreamInterface inner types define
    struct Stats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkbc0323;
        ::ll::UntypedStorage<8, 8> mUnk234065;
        ::ll::UntypedStorage<8, 8> mUnke8ac34;
        ::ll::UntypedStorage<4, 4> mUnk23405a;
        ::ll::UntypedStorage<8, 8> mUnk8e1192;
        ::ll::UntypedStorage<8, 8> mUnk6f2f5a;
        ::ll::UntypedStorage<4, 4> mUnk8cffbd;
        ::ll::UntypedStorage<8, 8> mUnkf53839;
        ::ll::UntypedStorage<4, 4> mUnk875e49;
        ::ll::UntypedStorage<8, 32> mUnk21476a;
        ::ll::UntypedStorage<4, 8> mUnkf3417c;
        ::ll::UntypedStorage<4, 4> mUnkf641e5;
        ::ll::UntypedStorage<4, 4> mUnk52bd5a;
        ::ll::UntypedStorage<4, 4> mUnk51c734;
        ::ll::UntypedStorage<4, 4> mUnk1687e8;
        ::ll::UntypedStorage<4, 4> mUnkb08ace;
        ::ll::UntypedStorage<8, 8> mUnk1b3dcb;
        ::ll::UntypedStorage<8, 8> mUnk1d0ae8;
        ::ll::UntypedStorage<8, 8> mUnk47dcf4;
        ::ll::UntypedStorage<8, 8> mUnk475116;
        ::ll::UntypedStorage<8, 8> mUnkc4bfa2;
        ::ll::UntypedStorage<8, 8> mUnka02d00;
        ::ll::UntypedStorage<8, 8> mUnk83ae6a;
        ::ll::UntypedStorage<8, 8> mUnk527a4f;
        ::ll::UntypedStorage<8, 8> mUnk2563e8;
        ::ll::UntypedStorage<8, 8> mUnk62caaa;
        ::ll::UntypedStorage<8, 8> mUnkdeaf0c;
        ::ll::UntypedStorage<8, 8> mUnk6e2b12;
        ::ll::UntypedStorage<4, 4> mUnk68678b;
        ::ll::UntypedStorage<4, 4> mUnk52a7db;
        ::ll::UntypedStorage<4, 4> mUnk68edea;
        ::ll::UntypedStorage<4, 4> mUnkdb29f7;
        ::ll::UntypedStorage<4, 4> mUnka038e0;
        ::ll::UntypedStorage<4, 4> mUnk6aadc7;
        ::ll::UntypedStorage<8, 8> mUnkb97b8e;
        ::ll::UntypedStorage<4, 4> mUnk41b852;
        ::ll::UntypedStorage<4, 4> mUnk5168f0;
        ::ll::UntypedStorage<4, 4> mUnka47ada;
        ::ll::UntypedStorage<4, 4> mUnk458086;
        ::ll::UntypedStorage<4, 4> mUnkdbb181;
        ::ll::UntypedStorage<4, 4> mUnk7ddfe6;
        ::ll::UntypedStorage<4, 4> mUnk5592d1;
        ::ll::UntypedStorage<4, 4> mUnke396d3;
        ::ll::UntypedStorage<8, 8> mUnkb6e67a;
        ::ll::UntypedStorage<8, 16> mUnk2075c9;
        ::ll::UntypedStorage<8, 8> mUnka06320;
        ::ll::UntypedStorage<8, 8> mUnke191cf;
        ::ll::UntypedStorage<4, 4> mUnkb1b9c0;
        ::ll::UntypedStorage<4, 4> mUnke5533c;
        ::ll::UntypedStorage<8, 16> mUnk3bd52c;
        ::ll::UntypedStorage<8, 16> mUnk8ccc21;
        ::ll::UntypedStorage<8, 16> mUnkd2d781;
        ::ll::UntypedStorage<8, 8> mUnk279d2d;
        ::ll::UntypedStorage<8, 8> mUnk8993b2;
        ::ll::UntypedStorage<8, 8> mUnke5b7dd;
        ::ll::UntypedStorage<8, 16> mUnk67b2fd;
        ::ll::UntypedStorage<8, 8> mUnkd1108b;
        ::ll::UntypedStorage<4, 4> mUnka7f65a;
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
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 4> mUnkba2619;
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
        ::ll::UntypedStorage<4, 12> mUnk34be58;
        ::ll::UntypedStorage<1, 1> mUnk64629b;
        ::ll::UntypedStorage<8, 8> mUnk8cd4b6;
        ::ll::UntypedStorage<8, 8> mUnk37c9d4;
        ::ll::UntypedStorage<1, 1> mUnk7aa421;
        ::ll::UntypedStorage<4, 4> mUnk33f5bd;
        ::ll::UntypedStorage<8, 32> mUnke6da72;
        ::ll::UntypedStorage<8, 16> mUnk6d2910;
        ::ll::UntypedStorage<8, 8> mUnk512466;
        ::ll::UntypedStorage<8, 16> mUnk9d307f;
        ::ll::UntypedStorage<1, 5> mUnk2ed8d5;
        ::ll::UntypedStorage<8, 8> mUnka5a032;
        ::ll::UntypedStorage<8, 8> mUnkff47e7;
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
    virtual void SetDecoderMap(::std::map<int, ::webrtc::SdpAudioFormat>) = 0;

    // vIndex: 7
    virtual void SetNackHistory(int) = 0;

    // vIndex: 8
    virtual void SetNonSenderRttMeasurement(bool) = 0;

    // vIndex: 9
    virtual bool IsRunning() const = 0;

    // vIndex: 10
    virtual ::webrtc::AudioReceiveStreamInterface::Stats GetStats(bool) const = 0;

    // vIndex: 11
    virtual void SetSink(::webrtc::AudioSinkInterface*) = 0;

    // vIndex: 12
    virtual void SetGain(float) = 0;

    // vIndex: 13
    virtual bool SetBaseMinimumPlayoutDelayMs(int) = 0;

    // vIndex: 14
    virtual int GetBaseMinimumPlayoutDelayMs() const = 0;

    // vIndex: 15
    virtual uint remote_ssrc() const = 0;

    // vIndex: 0
    virtual ~AudioReceiveStreamInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
