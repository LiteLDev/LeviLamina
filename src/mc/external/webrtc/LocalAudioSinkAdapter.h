#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/AudioSource.h"
#include "mc/external/webrtc/AudioTrackSinkInterface.h"

namespace webrtc {

class LocalAudioSinkAdapter : public ::webrtc::AudioTrackSinkInterface, public ::cricket::AudioSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk9b8599;
    ::ll::UntypedStorage<8, 40> mUnkd9f781;
    ::ll::UntypedStorage<4, 4>  mUnke84c4d;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalAudioSinkAdapter& operator=(LocalAudioSinkAdapter const&);
    LocalAudioSinkAdapter(LocalAudioSinkAdapter const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalAudioSinkAdapter() /*override*/;

    virtual void OnData(
        void const*            audio_data,
        int                    bits_per_sample,
        int                    sample_rate,
        uint64                 number_of_channels,
        uint64                 number_of_frames,
        ::std::optional<int64> absolute_capture_timestamp_ms
    ) /*override*/;

    virtual void OnData(
        void const* audio_data,
        int         bits_per_sample,
        int         sample_rate,
        uint64      number_of_channels,
        uint64      number_of_frames
    ) /*override*/;

    virtual int NumPreferredChannels() const /*override*/;

    virtual void SetSink(::cricket::AudioSource::Sink* sink) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LocalAudioSinkAdapter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnData(
        void const*            audio_data,
        int                    bits_per_sample,
        int                    sample_rate,
        uint64                 number_of_channels,
        uint64                 number_of_frames,
        ::std::optional<int64> absolute_capture_timestamp_ms
    );

    MCNAPI void $OnData(
        void const* audio_data,
        int         bits_per_sample,
        int         sample_rate,
        uint64      number_of_channels,
        uint64      number_of_frames
    );

    MCNAPI int $NumPreferredChannels() const;

    MCNAPI void $SetSink(::cricket::AudioSource::Sink* sink);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForAudioTrackSinkInterface();

    MCNAPI static void** $vftableForAudioSource();
    // NOLINTEND
};

} // namespace webrtc
