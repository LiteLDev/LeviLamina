#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaSourceInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct AudioOptions; }
namespace webrtc { class AudioTrackSinkInterface; }
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
        // virtual functions
        // NOLINTBEGIN
        virtual void OnSetVolume(double) = 0;

        virtual ~AudioObserver();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SetVolume(double volume);

    virtual void RegisterAudioObserver(::webrtc::AudioSourceInterface::AudioObserver* observer);

    virtual void UnregisterAudioObserver(::webrtc::AudioSourceInterface::AudioObserver* observer);

    virtual void AddSink(::webrtc::AudioTrackSinkInterface* sink);

    virtual void RemoveSink(::webrtc::AudioTrackSinkInterface* sink);

    virtual ::cricket::AudioOptions const options() const;

    virtual ~AudioSourceInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetVolume(double volume);

    MCNAPI void $RegisterAudioObserver(::webrtc::AudioSourceInterface::AudioObserver* observer);

    MCNAPI void $UnregisterAudioObserver(::webrtc::AudioSourceInterface::AudioObserver* observer);

    MCNAPI void $AddSink(::webrtc::AudioTrackSinkInterface* sink);

    MCNAPI void $RemoveSink(::webrtc::AudioTrackSinkInterface* sink);

    MCNAPI ::cricket::AudioOptions const $options() const;


    // NOLINTEND
};

} // namespace webrtc
