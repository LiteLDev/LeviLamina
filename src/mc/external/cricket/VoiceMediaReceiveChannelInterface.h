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
    // virtual functions
    // NOLINTBEGIN
    virtual bool SetReceiverParameters(::cricket::AudioReceiverParameters const&) = 0;

    virtual ::webrtc::RtpParameters GetRtpReceiverParameters(uint) const = 0;

    virtual ::std::vector<::webrtc::RtpSource> GetSources(uint) const = 0;

    virtual ::webrtc::RtpParameters GetDefaultRtpReceiveParameters() const = 0;

    virtual void SetPlayout(bool) = 0;

    virtual bool SetOutputVolume(uint, double) = 0;

    virtual bool SetDefaultOutputVolume(double) = 0;

    virtual void SetRawAudioSink(uint, ::std::unique_ptr<::webrtc::AudioSinkInterface>) = 0;

    virtual void SetDefaultRawAudioSink(::std::unique_ptr<::webrtc::AudioSinkInterface>) = 0;

    virtual bool GetStats(::cricket::VoiceMediaReceiveInfo*, bool) = 0;

    virtual void SetReceiveNackEnabled(bool) = 0;

    virtual void SetReceiveNonSenderRttEnabled(bool) = 0;

    virtual ~VoiceMediaReceiveChannelInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
