#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/MediaSourceInterface.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct AudioOptions; }
namespace webrtc { class AudioTrackSinkInterface; }
// clang-format on

namespace webrtc {

class LocalAudioSource {
public:
    // prevent constructor by default
    LocalAudioSource& operator=(LocalAudioSource const&);
    LocalAudioSource(LocalAudioSource const&);
    LocalAudioSource();

public:
    // NOLINTBEGIN
    // symbol: ?AddSink@LocalAudioSource@webrtc@@UEAAXPEAVAudioTrackSinkInterface@2@@Z
    MCVAPI void AddSink(class webrtc::AudioTrackSinkInterface*);

    // symbol: ?RemoveSink@LocalAudioSource@webrtc@@UEAAXPEAVAudioTrackSinkInterface@2@@Z
    MCVAPI void RemoveSink(class webrtc::AudioTrackSinkInterface*);

    // symbol: ?options@LocalAudioSource@webrtc@@UEBA?BUAudioOptions@cricket@@XZ
    MCVAPI struct cricket::AudioOptions const options() const;

    // symbol: ?remote@LocalAudioSource@webrtc@@UEBA_NXZ
    MCVAPI bool remote() const;

    // symbol: ?state@LocalAudioSource@webrtc@@UEBA?AW4SourceState@MediaSourceInterface@2@XZ
    MCVAPI ::webrtc::MediaSourceInterface::SourceState state() const;

    // symbol:
    // ?Create@LocalAudioSource@webrtc@@SA?AV?$scoped_refptr@VLocalAudioSource@webrtc@@@rtc@@PEBUAudioOptions@cricket@@@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::LocalAudioSource> Create(struct cricket::AudioOptions const*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?Initialize@LocalAudioSource@webrtc@@AEAAXPEBUAudioOptions@cricket@@@Z
    MCAPI void Initialize(struct cricket::AudioOptions const*);

    // NOLINTEND
};

}; // namespace webrtc
