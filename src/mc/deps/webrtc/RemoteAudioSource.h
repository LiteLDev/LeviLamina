#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/AudioSinkInterface.h"
#include "mc/deps/webrtc/AudioSourceInterface.h"
#include "mc/deps/webrtc/MediaSourceInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class VoiceMediaReceiveChannelInterface; }
namespace webrtc { class AudioSinkInterface; }
namespace webrtc { class AudioTrackSinkInterface; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace webrtc {

class RemoteAudioSource {
public:
    // RemoteAudioSource inner types declare
    // clang-format off
    class AudioDataProxy;
    // clang-format on

    // RemoteAudioSource inner types define
    enum class OnAudioChannelGoneAction {};

    class AudioDataProxy : public ::webrtc::AudioSinkInterface {
    public:
        // prevent constructor by default
        AudioDataProxy& operator=(AudioDataProxy const&);
        AudioDataProxy(AudioDataProxy const&);
        AudioDataProxy();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1AudioDataProxy@RemoteAudioSource@webrtc@@UEAA@XZ
        virtual ~AudioDataProxy() = default;

        // vIndex: 1, symbol: ?OnData@AudioDataProxy@RemoteAudioSource@webrtc@@UEAAXAEBUData@AudioSinkInterface@3@@Z
        virtual void OnData(struct webrtc::AudioSinkInterface::Data const&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RemoteAudioSource& operator=(RemoteAudioSource const&);
    RemoteAudioSource(RemoteAudioSource const&);
    RemoteAudioSource();

public:
    // NOLINTBEGIN
    // symbol: ?AddSink@RemoteAudioSource@webrtc@@UEAAXPEAVAudioTrackSinkInterface@2@@Z
    MCVAPI void AddSink(class webrtc::AudioTrackSinkInterface*);

    // symbol: ?RegisterAudioObserver@RemoteAudioSource@webrtc@@UEAAXPEAVAudioObserver@AudioSourceInterface@2@@Z
    MCVAPI void RegisterAudioObserver(class webrtc::AudioSourceInterface::AudioObserver*);

    // symbol: ?RemoveSink@RemoteAudioSource@webrtc@@UEAAXPEAVAudioTrackSinkInterface@2@@Z
    MCVAPI void RemoveSink(class webrtc::AudioTrackSinkInterface*);

    // symbol: ?SetVolume@RemoteAudioSource@webrtc@@UEAAXN@Z
    MCVAPI void SetVolume(double);

    // symbol: ?UnregisterAudioObserver@RemoteAudioSource@webrtc@@UEAAXPEAVAudioObserver@AudioSourceInterface@2@@Z
    MCVAPI void UnregisterAudioObserver(class webrtc::AudioSourceInterface::AudioObserver*);

    // symbol: ?remote@RemoteAudioSource@webrtc@@UEBA_NXZ
    MCVAPI bool remote() const;

    // symbol: ?state@RemoteAudioSource@webrtc@@UEBA?AW4SourceState@MediaSourceInterface@2@XZ
    MCVAPI ::webrtc::MediaSourceInterface::SourceState state() const;

    // symbol: ??1RemoteAudioSource@webrtc@@MEAA@XZ
    MCVAPI ~RemoteAudioSource();

    // symbol: ??0RemoteAudioSource@webrtc@@QEAA@PEAVTaskQueueBase@1@W4OnAudioChannelGoneAction@01@@Z
    MCAPI RemoteAudioSource(class webrtc::TaskQueueBase*, ::webrtc::RemoteAudioSource::OnAudioChannelGoneAction);

    // symbol: ?SetState@RemoteAudioSource@webrtc@@QEAAXW4SourceState@MediaSourceInterface@2@@Z
    MCAPI void SetState(::webrtc::MediaSourceInterface::SourceState);

    // symbol:
    // ?Start@RemoteAudioSource@webrtc@@QEAAXPEAVVoiceMediaReceiveChannelInterface@cricket@@V?$optional@I@std@@@Z
    MCAPI void Start(class cricket::VoiceMediaReceiveChannelInterface*, std::optional<uint>);

    // symbol: ?Stop@RemoteAudioSource@webrtc@@QEAAXPEAVVoiceMediaReceiveChannelInterface@cricket@@V?$optional@I@std@@@Z
    MCAPI void Stop(class cricket::VoiceMediaReceiveChannelInterface*, std::optional<uint>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?OnAudioChannelGone@RemoteAudioSource@webrtc@@AEAAXXZ
    MCAPI void OnAudioChannelGone();

    // symbol: ?OnData@RemoteAudioSource@webrtc@@AEAAXAEBUData@AudioSinkInterface@2@@Z
    MCAPI void OnData(struct webrtc::AudioSinkInterface::Data const&);

    // NOLINTEND
};

}; // namespace webrtc
