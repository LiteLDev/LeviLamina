#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class VideoMediaReceiveChannelInterface; }
namespace cricket { class VoiceMediaReceiveChannelInterface; }
// clang-format on

namespace cricket {

class MediaReceiveChannelInterface {
public:
    // prevent constructor by default
    MediaReceiveChannelInterface& operator=(MediaReceiveChannelInterface const&);
    MediaReceiveChannelInterface(MediaReceiveChannelInterface const&);
    MediaReceiveChannelInterface();

public:
    // NOLINTBEGIN
    // symbol:
    // ?AsVideoReceiveChannel@MediaReceiveChannelInterface@cricket@@UEAAPEAVVideoMediaReceiveChannelInterface@2@XZ
    MCVAPI class cricket::VideoMediaReceiveChannelInterface* AsVideoReceiveChannel();

    // symbol:
    // ?AsVoiceReceiveChannel@MediaReceiveChannelInterface@cricket@@UEAAPEAVVoiceMediaReceiveChannelInterface@2@XZ
    MCVAPI class cricket::VoiceMediaReceiveChannelInterface* AsVoiceReceiveChannel();

    // NOLINTEND
};

}; // namespace cricket
