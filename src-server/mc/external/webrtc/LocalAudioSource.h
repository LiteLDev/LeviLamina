#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AudioSourceInterface.h"
#include "mc/external/webrtc/MediaSourceInterface.h"
#include "mc/external/webrtc/Notifier.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct AudioOptions; }
namespace webrtc { class AudioTrackSinkInterface; }
// clang-format on

namespace webrtc {

class LocalAudioSource : public ::webrtc::Notifier<::webrtc::AudioSourceInterface> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnk865185;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalAudioSource& operator=(LocalAudioSource const&);
    LocalAudioSource(LocalAudioSource const&);
    LocalAudioSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::webrtc::MediaSourceInterface::SourceState state() const /*override*/;

    // vIndex: 4
    virtual bool remote() const /*override*/;

    // vIndex: 10
    virtual ::cricket::AudioOptions const options() const /*override*/;

    // vIndex: 8
    virtual void AddSink(::webrtc::AudioTrackSinkInterface* sink) /*override*/;

    // vIndex: 9
    virtual void RemoveSink(::webrtc::AudioTrackSinkInterface* sink) /*override*/;

    // vIndex: 2
    virtual ~LocalAudioSource() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Initialize(::cricket::AudioOptions const* audio_options);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::LocalAudioSource> Create(::cricket::AudioOptions const* audio_options);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::MediaSourceInterface::SourceState $state() const;

    MCNAPI bool $remote() const;

    MCNAPI ::cricket::AudioOptions const $options() const;

    MCNAPI void $AddSink(::webrtc::AudioTrackSinkInterface* sink);

    MCNAPI void $RemoveSink(::webrtc::AudioTrackSinkInterface* sink);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRefCountInterface();

    MCNAPI static void** $vftableForNotifierInterface();
    // NOLINTEND

};

}
