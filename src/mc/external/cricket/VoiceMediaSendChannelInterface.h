#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaSendChannelInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class AudioSource; }
namespace cricket { struct AudioOptions; }
namespace cricket { struct AudioSenderParameter; }
namespace cricket { struct VoiceMediaSendInfo; }
// clang-format on

namespace cricket {

class VoiceMediaSendChannelInterface : public ::cricket::MediaSendChannelInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool SetSenderParameters(::cricket::AudioSenderParameter const&) = 0;

    virtual void SetSend(bool) = 0;

    virtual bool SetAudioSend(uint, bool, ::cricket::AudioOptions const*, ::cricket::AudioSource*) = 0;

    virtual bool CanInsertDtmf() = 0;

    virtual bool InsertDtmf(uint, int, int) = 0;

    virtual bool GetStats(::cricket::VoiceMediaSendInfo*) = 0;

    virtual bool SenderNackEnabled() const = 0;

    virtual bool SenderNonSenderRttEnabled() const = 0;

    virtual ~VoiceMediaSendChannelInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
