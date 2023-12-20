#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/MediaStreamTrackInterface.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioProcessorInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
// clang-format on

namespace webrtc {

class AudioTrackInterface : public ::webrtc::MediaStreamTrackInterface {
public:
    // prevent constructor by default
    AudioTrackInterface& operator=(AudioTrackInterface const&);
    AudioTrackInterface(AudioTrackInterface const&);
    AudioTrackInterface();

public:
    // NOLINTBEGIN
    // symbol:
    // ?GetAudioProcessor@AudioTrackInterface@webrtc@@UEAA?AV?$scoped_refptr@VAudioProcessorInterface@webrtc@@@rtc@@XZ
    MCVAPI class rtc::scoped_refptr<class webrtc::AudioProcessorInterface> GetAudioProcessor();

    // symbol: ?GetSignalLevel@AudioTrackInterface@webrtc@@UEAA_NPEAH@Z
    MCVAPI bool GetSignalLevel(int*);

    // symbol: ??1AudioTrackInterface@webrtc@@MEAA@XZ
    MCVAPI ~AudioTrackInterface();

    // NOLINTEND
};

}; // namespace webrtc
