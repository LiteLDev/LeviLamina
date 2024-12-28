#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/RtpHeaderExtensionQueryInterface.h"
#include "mc/external/webrtc/AudioDeviceModule.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class VoiceMediaReceiveChannelInterface; }
namespace cricket { class VoiceMediaSendChannelInterface; }
namespace cricket { struct AudioOptions; }
namespace cricket { struct Codec; }
namespace cricket { struct MediaConfig; }
namespace webrtc { class AudioCodecPairId; }
namespace webrtc { class AudioState; }
namespace webrtc { class Call; }
namespace webrtc { class FileWrapper; }
namespace webrtc { struct CryptoOptions; }
// clang-format on

namespace cricket {

class VoiceEngineInterface : public ::cricket::RtpHeaderExtensionQueryInterface {
public:
    // prevent constructor by default
    VoiceEngineInterface& operator=(VoiceEngineInterface const&);
    VoiceEngineInterface(VoiceEngineInterface const&);
    VoiceEngineInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VoiceEngineInterface() /*override*/;

    // vIndex: 2
    virtual void Init() = 0;

    // vIndex: 3
    virtual ::webrtc::scoped_refptr<::webrtc::AudioState> GetAudioState() const = 0;

    // vIndex: 4
    virtual ::std::unique_ptr<::cricket::VoiceMediaSendChannelInterface> CreateSendChannel(
        ::webrtc::Call*,
        ::cricket::MediaConfig const&,
        ::cricket::AudioOptions const&,
        ::webrtc::CryptoOptions const&,
        ::webrtc::AudioCodecPairId
    );

    // vIndex: 5
    virtual ::std::unique_ptr<::cricket::VoiceMediaReceiveChannelInterface> CreateReceiveChannel(
        ::webrtc::Call*,
        ::cricket::MediaConfig const&,
        ::cricket::AudioOptions const&,
        ::webrtc::CryptoOptions const&,
        ::webrtc::AudioCodecPairId
    );

    // vIndex: 6
    virtual ::std::vector<::cricket::Codec> const& send_codecs() const = 0;

    // vIndex: 7
    virtual ::std::vector<::cricket::Codec> const& recv_codecs() const = 0;

    // vIndex: 8
    virtual bool StartAecDump(::webrtc::FileWrapper, int64) = 0;

    // vIndex: 9
    virtual void StopAecDump() = 0;

    // vIndex: 10
    virtual ::std::optional<::webrtc::AudioDeviceModule::Stats> GetAudioDeviceStats() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::cricket::VoiceMediaSendChannelInterface> $CreateSendChannel(
        ::webrtc::Call*,
        ::cricket::MediaConfig const&,
        ::cricket::AudioOptions const&,
        ::webrtc::CryptoOptions const&,
        ::webrtc::AudioCodecPairId
    );

    MCAPI ::std::unique_ptr<::cricket::VoiceMediaReceiveChannelInterface> $CreateReceiveChannel(
        ::webrtc::Call*,
        ::cricket::MediaConfig const&,
        ::cricket::AudioOptions const&,
        ::webrtc::CryptoOptions const&,
        ::webrtc::AudioCodecPairId
    );
    // NOLINTEND
};

} // namespace cricket
