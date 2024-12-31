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
        // prevent constructor by default
        AudioObserver& operator=(AudioObserver const&);
        AudioObserver(AudioObserver const&);
        AudioObserver();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual void OnSetVolume(double) = 0;

        // vIndex: 1
        virtual ~AudioObserver() = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    AudioSourceInterface& operator=(AudioSourceInterface const&);
    AudioSourceInterface(AudioSourceInterface const&);
    AudioSourceInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void SetVolume(double);

    // vIndex: 6
    virtual void RegisterAudioObserver(::webrtc::AudioSourceInterface::AudioObserver*);

    // vIndex: 7
    virtual void UnregisterAudioObserver(::webrtc::AudioSourceInterface::AudioObserver*);

    // vIndex: 8
    virtual void AddSink(::webrtc::AudioTrackSinkInterface*);

    // vIndex: 9
    virtual void RemoveSink(::webrtc::AudioTrackSinkInterface*);

    // vIndex: 10
    virtual ::cricket::AudioOptions const options() const;

    // vIndex: 2
    virtual ~AudioSourceInterface() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
