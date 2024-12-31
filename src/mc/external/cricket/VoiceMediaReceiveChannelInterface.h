#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaReceiveChannelInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct AudioReceiverParameters; }
namespace cricket { struct VoiceMediaReceiveInfo; }
namespace webrtc { class AudioSinkInterface; }
namespace webrtc { class RtpSource; }
namespace webrtc { struct RtpParameters; }
// clang-format on

namespace cricket {

class VoiceMediaReceiveChannelInterface : public ::cricket::MediaReceiveChannelInterface {
public:
    // prevent constructor by default
    VoiceMediaReceiveChannelInterface& operator=(VoiceMediaReceiveChannelInterface const&);
    VoiceMediaReceiveChannelInterface(VoiceMediaReceiveChannelInterface const&);
    VoiceMediaReceiveChannelInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 17
    virtual bool SetReceiverParameters(::cricket::AudioReceiverParameters const&) = 0;

    // vIndex: 18
    virtual ::webrtc::RtpParameters GetRtpReceiverParameters(uint) const = 0;

    // vIndex: 19
    virtual ::std::vector<::webrtc::RtpSource> GetSources(uint) const = 0;

    // vIndex: 20
    virtual ::webrtc::RtpParameters GetDefaultRtpReceiveParameters() const = 0;

    // vIndex: 21
    virtual void SetPlayout(bool) = 0;

    // vIndex: 22
    virtual bool SetOutputVolume(uint, double) = 0;

    // vIndex: 23
    virtual bool SetDefaultOutputVolume(double) = 0;

    // vIndex: 24
    virtual void SetRawAudioSink(uint, ::std::unique_ptr<::webrtc::AudioSinkInterface>) = 0;

    // vIndex: 25
    virtual void SetDefaultRawAudioSink(::std::unique_ptr<::webrtc::AudioSinkInterface>) = 0;

    // vIndex: 26
    virtual bool GetStats(::cricket::VoiceMediaReceiveInfo*, bool) = 0;

    // vIndex: 27
    virtual void SetReceiveNackEnabled(bool) = 0;

    // vIndex: 28
    virtual void SetReceiveNonSenderRttEnabled(bool) = 0;

    // vIndex: 0
    virtual ~VoiceMediaReceiveChannelInterface() /*override*/ = default;
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

} // namespace cricket
