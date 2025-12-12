#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/AudioSender.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
// clang-format on

namespace webrtc {

class AudioSendStream : public ::webrtc::AudioSender {
public:
    // AudioSendStream inner types declare
    // clang-format off
    struct Config;
    struct Stats;
    // clang-format on

    // AudioSendStream inner types define
    struct Config {
    public:
        // Config inner types declare
        // clang-format off
        struct Rtp;
        struct SendCodecSpec;
        // clang-format on

        // Config inner types define
        struct Rtp {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 4>  mUnke9be80;
            ::ll::UntypedStorage<8, 32> mUnkafd621;
            ::ll::UntypedStorage<8, 32> mUnka1d4eb;
            ::ll::UntypedStorage<1, 1>  mUnkfdaeca;
            ::ll::UntypedStorage<8, 24> mUnk4ee7a6;
            ::ll::UntypedStorage<8, 32> mUnk331e77;
            // NOLINTEND

        public:
            // prevent constructor by default
            Rtp& operator=(Rtp const&);
            Rtp(Rtp const&);
            Rtp();
        };

        struct SendCodecSpec {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 4>  mUnk20505e;
            ::ll::UntypedStorage<8, 64> mUnk94972b;
            ::ll::UntypedStorage<1, 1>  mUnk8490c4;
            ::ll::UntypedStorage<1, 1>  mUnk58ce35;
            ::ll::UntypedStorage<1, 1>  mUnk17c131;
            ::ll::UntypedStorage<4, 8>  mUnkab6438;
            ::ll::UntypedStorage<4, 8>  mUnkde1b4d;
            ::ll::UntypedStorage<4, 8>  mUnk42daf3;
            // NOLINTEND

        public:
            // prevent constructor by default
            SendCodecSpec& operator=(SendCodecSpec const&);
            SendCodecSpec(SendCodecSpec const&);
            SendCodecSpec();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 136> mUnkff8f97;
        ::ll::UntypedStorage<4, 4>   mUnkbcf371;
        ::ll::UntypedStorage<8, 8>   mUnk4c22d0;
        ::ll::UntypedStorage<4, 4>   mUnk6d4bba;
        ::ll::UntypedStorage<4, 4>   mUnk951bb7;
        ::ll::UntypedStorage<8, 8>   mUnk37bccc;
        ::ll::UntypedStorage<1, 1>   mUnkd0ab07;
        ::ll::UntypedStorage<8, 40>  mUnk74e408;
        ::ll::UntypedStorage<8, 112> mUnk7fab39;
        ::ll::UntypedStorage<8, 8>   mUnkba54be;
        ::ll::UntypedStorage<8, 16>  mUnka72952;
        ::ll::UntypedStorage<8, 32>  mUnke87b24;
        ::ll::UntypedStorage<1, 5>   mUnkb4db37;
        ::ll::UntypedStorage<8, 8>   mUnkd4206f;
        ::ll::UntypedStorage<8, 8>   mUnk90edbf;
        // NOLINTEND

    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();
    };

    struct Stats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnkd0a5b8;
        ::ll::UntypedStorage<8, 8>   mUnk4c539f;
        ::ll::UntypedStorage<8, 8>   mUnkb115e9;
        ::ll::UntypedStorage<8, 8>   mUnk2a88c7;
        ::ll::UntypedStorage<4, 4>   mUnk477ff2;
        ::ll::UntypedStorage<8, 8>   mUnk6a00e0;
        ::ll::UntypedStorage<8, 8>   mUnkd81c77;
        ::ll::UntypedStorage<4, 4>   mUnk3c951f;
        ::ll::UntypedStorage<4, 4>   mUnkce6ab3;
        ::ll::UntypedStorage<8, 32>  mUnkca7d23;
        ::ll::UntypedStorage<4, 8>   mUnk4d54b4;
        ::ll::UntypedStorage<4, 4>   mUnk2be52c;
        ::ll::UntypedStorage<8, 8>   mUnkf82688;
        ::ll::UntypedStorage<2, 2>   mUnk74874a;
        ::ll::UntypedStorage<8, 8>   mUnk526a97;
        ::ll::UntypedStorage<8, 8>   mUnkcb97e5;
        ::ll::UntypedStorage<4, 56>  mUnkc30448;
        ::ll::UntypedStorage<8, 112> mUnk686b36;
        ::ll::UntypedStorage<8, 8>   mUnk916441;
        ::ll::UntypedStorage<8, 24>  mUnkcfbd21;
        ::ll::UntypedStorage<4, 4>   mUnkfec135;
        // NOLINTEND

    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AudioSendStream() /*override*/ = default;

    virtual ::webrtc::AudioSendStream::Config const& GetConfig() const = 0;

    virtual void
    Reconfigure(::webrtc::AudioSendStream::Config const&, ::absl::AnyInvocable<void(::webrtc::RTCError) &&>) = 0;

    virtual void Start() = 0;

    virtual void Stop() = 0;

    virtual bool SendTelephoneEvent(int, int, int, int) = 0;

    virtual void SetMuted(bool) = 0;

    virtual ::webrtc::AudioSendStream::Stats GetStats() const = 0;

    virtual ::webrtc::AudioSendStream::Stats GetStats(bool) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
