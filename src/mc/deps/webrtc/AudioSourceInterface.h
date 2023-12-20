#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/MediaSourceInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct AudioOptions; }
namespace webrtc { class AudioTrackSinkInterface; }
namespace webrtc { class MediaSourceInterface; }
// clang-format on

namespace webrtc {

class AudioSourceInterface : public ::webrtc::MediaSourceInterface {
public:
    // AudioSourceInterface inner types declare
    // clang-format off
    class AudioObserver;
    // clang-format on

    // AudioSourceInterface inner types define
    class AudioObserver {
    public:
        // prevent constructor by default
        AudioObserver& operator=(AudioObserver const&);
        AudioObserver(AudioObserver const&);
        AudioObserver();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0() = 0;

        // vIndex: 1, symbol: ??1AudioObserver@AudioSourceInterface@webrtc@@MEAA@XZ
        virtual ~AudioObserver();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    AudioSourceInterface& operator=(AudioSourceInterface const&);
    AudioSourceInterface(AudioSourceInterface const&);
    AudioSourceInterface();

public:
    // NOLINTBEGIN
    // symbol: ?AddSink@AudioSourceInterface@webrtc@@UEAAXPEAVAudioTrackSinkInterface@2@@Z
    MCVAPI void AddSink(class webrtc::AudioTrackSinkInterface*);

    // symbol: ?RegisterAudioObserver@AudioSourceInterface@webrtc@@UEAAXPEAVAudioObserver@12@@Z
    MCVAPI void RegisterAudioObserver(class webrtc::AudioSourceInterface::AudioObserver*);

    // symbol: ?RemoveSink@AudioSourceInterface@webrtc@@UEAAXPEAVAudioTrackSinkInterface@2@@Z
    MCVAPI void RemoveSink(class webrtc::AudioTrackSinkInterface*);

    // symbol: ?SetVolume@AudioSourceInterface@webrtc@@UEAAXN@Z
    MCVAPI void SetVolume(double);

    // symbol: ?UnregisterAudioObserver@AudioSourceInterface@webrtc@@UEAAXPEAVAudioObserver@12@@Z
    MCVAPI void UnregisterAudioObserver(class webrtc::AudioSourceInterface::AudioObserver*);

    // symbol: ?options@AudioSourceInterface@webrtc@@UEBA?BUAudioOptions@cricket@@XZ
    MCVAPI struct cricket::AudioOptions const options() const;

    // symbol: ??1AudioSourceInterface@webrtc@@UEAA@XZ
    MCVAPI ~AudioSourceInterface();

    // NOLINTEND
};

}; // namespace webrtc
