#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AudioTrackInterface.h"
#include "mc/external/webrtc/MediaStreamTrack.h"
#include "mc/external/webrtc/ObserverInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioSourceInterface; }
namespace webrtc { class AudioTrackSinkInterface; }
// clang-format on

namespace webrtc {

class AudioTrack : public ::webrtc::MediaStreamTrack<::webrtc::AudioTrackInterface>, public ::webrtc::ObserverInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd9ddaf;
    ::ll::UntypedStorage<1, 1> mUnkd5a9b5;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioTrack& operator=(AudioTrack const&);
    AudioTrack(AudioTrack const&);
    AudioTrack();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~AudioTrack() /*override*/;

    // vIndex: 3
    virtual ::std::string kind() const /*override*/;

    // vIndex: 8
    virtual ::webrtc::AudioSourceInterface* GetSource() const /*override*/;

    // vIndex: 9
    virtual void AddSink(::webrtc::AudioTrackSinkInterface* sink) /*override*/;

    // vIndex: 10
    virtual void RemoveSink(::webrtc::AudioTrackSinkInterface* sink) /*override*/;

    // vIndex: 0
    virtual void OnChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AudioTrack(::std::string_view label, ::webrtc::scoped_refptr<::webrtc::AudioSourceInterface> const& source);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::AudioTrack> Create(::std::string_view id, ::webrtc::scoped_refptr<::webrtc::AudioSourceInterface> const& source);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view label, ::webrtc::scoped_refptr<::webrtc::AudioSourceInterface> const& source);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $kind() const;

    MCNAPI ::webrtc::AudioSourceInterface* $GetSource() const;

    MCNAPI void $AddSink(::webrtc::AudioTrackSinkInterface* sink);

    MCNAPI void $RemoveSink(::webrtc::AudioTrackSinkInterface* sink);

    MCNAPI void $OnChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForNotifierInterface();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForRefCountInterface();
    // NOLINTEND

};

}
