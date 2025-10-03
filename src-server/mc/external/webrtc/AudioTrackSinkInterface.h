#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioTrackSinkInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void OnData(
        void const* audio_data,
        int         bits_per_sample,
        int         sample_rate,
        uint64      number_of_channels,
        uint64      number_of_frames
    );

    // vIndex: 0
    virtual void OnData(
        void const*            audio_data,
        int                    bits_per_sample,
        int                    sample_rate,
        uint64                 number_of_channels,
        uint64                 number_of_frames,
        ::std::optional<int64> absolute_capture_timestamp_ms
    );

    // vIndex: 2
    virtual int NumPreferredChannels() const;

    // vIndex: 3
    virtual ~AudioTrackSinkInterface() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnData(
        void const* audio_data,
        int         bits_per_sample,
        int         sample_rate,
        uint64      number_of_channels,
        uint64      number_of_frames
    );

    MCNAPI void $OnData(
        void const*            audio_data,
        int                    bits_per_sample,
        int                    sample_rate,
        uint64                 number_of_channels,
        uint64                 number_of_frames,
        ::std::optional<int64> absolute_capture_timestamp_ms
    );

    MCNAPI int $NumPreferredChannels() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
