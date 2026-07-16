#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AudioDeviceModule.h"
#include "mc/external/webrtc/RtpHeaderExtensionQueryInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioCodecPairId; }
namespace webrtc { class AudioDecoderFactory; }
namespace webrtc { class AudioEncoderFactory; }
namespace webrtc { class AudioState; }
namespace webrtc { class Call; }
namespace webrtc { class Environment; }
namespace webrtc { class FileWrapper; }
namespace webrtc { class VoiceMediaReceiveChannelInterface; }
namespace webrtc { class VoiceMediaSendChannelInterface; }
namespace webrtc { struct AudioOptions; }
namespace webrtc { struct Codec; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct MediaConfig; }
// clang-format on

namespace webrtc {

class VoiceEngineInterface : public ::webrtc::RtpHeaderExtensionQueryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VoiceEngineInterface() /*override*/ = default;

    virtual void Init() = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::AudioState> GetAudioState() const = 0;

    virtual ::std::unique_ptr<::webrtc::VoiceMediaSendChannelInterface> CreateSendChannel(
        ::webrtc::Environment const&,
        ::webrtc::Call*,
        ::webrtc::MediaConfig const&,
        ::webrtc::AudioOptions const&,
        ::webrtc::CryptoOptions const&,
        ::webrtc::AudioCodecPairId
    ) = 0;

    virtual ::std::unique_ptr<::webrtc::VoiceMediaReceiveChannelInterface> CreateReceiveChannel(
        ::webrtc::Environment const&,
        ::webrtc::Call*,
        ::webrtc::MediaConfig const&,
        ::webrtc::AudioOptions const&,
        ::webrtc::CryptoOptions const&,
        ::webrtc::AudioCodecPairId
    ) = 0;

    virtual ::std::vector<::webrtc::Codec> const& LegacySendCodecs() const = 0;

    virtual ::std::vector<::webrtc::Codec> const& LegacyRecvCodecs() const = 0;

    virtual ::webrtc::AudioEncoderFactory* encoder_factory() const = 0;

    virtual ::webrtc::AudioDecoderFactory* decoder_factory() const = 0;

    virtual bool StartAecDump(::webrtc::FileWrapper, int64) = 0;

    virtual void StopAecDump() = 0;

    virtual ::std::optional<::webrtc::AudioDeviceModule::Stats> GetAudioDeviceStats() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
