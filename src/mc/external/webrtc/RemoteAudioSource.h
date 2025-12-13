#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AudioSinkInterface.h"
#include "mc/external/webrtc/AudioSourceInterface.h"
#include "mc/external/webrtc/MediaSourceInterface.h"
#include "mc/external/webrtc/Notifier.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class VoiceMediaReceiveChannelInterface; }
namespace webrtc { class AudioTrackSinkInterface; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace webrtc {

class RemoteAudioSource : public ::webrtc::Notifier<::webrtc::AudioSourceInterface> {
public:
    // RemoteAudioSource inner types declare
    // clang-format off
    class AudioDataProxy;
    // clang-format on

    // RemoteAudioSource inner types define
    enum class OnAudioChannelGoneAction : int {
        KSurvive = 0,
        KEnd     = 1,
    };

    class AudioDataProxy : public ::webrtc::AudioSinkInterface {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk707b79;
        // NOLINTEND

    public:
        // prevent constructor by default
        AudioDataProxy& operator=(AudioDataProxy const&);
        AudioDataProxy(AudioDataProxy const&);
        AudioDataProxy();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~AudioDataProxy() /*override*/ = default;

        virtual void OnData(::webrtc::AudioSinkInterface::Data const& audio) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $OnData(::webrtc::AudioSinkInterface::Data const& audio);


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf74eb3;
    ::ll::UntypedStorage<8, 8>  mUnk9d8e30;
    ::ll::UntypedStorage<4, 4>  mUnkf9ba77;
    ::ll::UntypedStorage<8, 16> mUnkaccb09;
    ::ll::UntypedStorage<8, 40> mUnkd75021;
    ::ll::UntypedStorage<8, 16> mUnk49be8f;
    ::ll::UntypedStorage<4, 4>  mUnka3c4c2;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteAudioSource& operator=(RemoteAudioSource const&);
    RemoteAudioSource(RemoteAudioSource const&);
    RemoteAudioSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::MediaSourceInterface::SourceState state() const /*override*/;

    virtual bool remote() const /*override*/;

    virtual void SetVolume(double volume) /*override*/;

    virtual void RegisterAudioObserver(::webrtc::AudioSourceInterface::AudioObserver* observer) /*override*/;

    virtual void UnregisterAudioObserver(::webrtc::AudioSourceInterface::AudioObserver* observer) /*override*/;

    virtual void AddSink(::webrtc::AudioTrackSinkInterface* sink) /*override*/;

    virtual void RemoveSink(::webrtc::AudioTrackSinkInterface* sink) /*override*/;

    virtual ~RemoteAudioSource() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void OnAudioChannelGone();

    MCNAPI void OnData(::webrtc::AudioSinkInterface::Data const& audio);

    MCNAPI RemoteAudioSource(
        ::webrtc::TaskQueueBase*                              worker_thread,
        ::webrtc::RemoteAudioSource::OnAudioChannelGoneAction on_audio_channel_gone_action
    );

    MCNAPI void SetState(::webrtc::MediaSourceInterface::SourceState new_state);

    MCNAPI void Start(::cricket::VoiceMediaReceiveChannelInterface* media_channel, ::std::optional<uint> ssrc);

    MCNAPI void Stop(::cricket::VoiceMediaReceiveChannelInterface* media_channel, ::std::optional<uint> ssrc);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::TaskQueueBase*                              worker_thread,
        ::webrtc::RemoteAudioSource::OnAudioChannelGoneAction on_audio_channel_gone_action
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::MediaSourceInterface::SourceState $state() const;

    MCNAPI bool $remote() const;

    MCNAPI void $SetVolume(double volume);

    MCNAPI void $RegisterAudioObserver(::webrtc::AudioSourceInterface::AudioObserver* observer);

    MCNAPI void $UnregisterAudioObserver(::webrtc::AudioSourceInterface::AudioObserver* observer);

    MCNAPI void $AddSink(::webrtc::AudioTrackSinkInterface* sink);

    MCNAPI void $RemoveSink(::webrtc::AudioTrackSinkInterface* sink);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForNotifierInterface();

    MCNAPI static void** $vftableForRefCountInterface();
    // NOLINTEND
};

} // namespace webrtc
