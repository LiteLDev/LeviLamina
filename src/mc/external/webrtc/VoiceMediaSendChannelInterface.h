#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaSendChannelInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioSource; }
namespace webrtc { struct AudioOptions; }
namespace webrtc { struct AudioSenderParameter; }
namespace webrtc { struct VoiceMediaSendInfo; }
// clang-format on

namespace webrtc {

class VoiceMediaSendChannelInterface : public ::webrtc::MediaSendChannelInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool SetSenderParameters(::webrtc::AudioSenderParameter const&) = 0;

    virtual void SetSend(bool) = 0;

    virtual bool SetAudioSend(uint, bool, ::webrtc::AudioOptions const*, ::webrtc::AudioSource*) = 0;

    virtual bool CanInsertDtmf() = 0;

    virtual bool InsertDtmf(uint, int, int) = 0;

    virtual bool GetStats(::webrtc::VoiceMediaSendInfo*) = 0;

    virtual bool SenderNackEnabled() const = 0;

    virtual bool SenderNonSenderRttEnabled() const = 0;

    virtual ~VoiceMediaSendChannelInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
