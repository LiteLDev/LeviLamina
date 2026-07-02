#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioTrackSinkInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnData(
        void const* audio_data,
        int         bits_per_sample,
        int         sample_rate,
        uint64      number_of_channels,
        uint64      number_of_frames
    );

    virtual void OnData(
        void const*            audio_data,
        int                    bits_per_sample,
        int                    sample_rate,
        uint64                 number_of_channels,
        uint64                 number_of_frames,
        ::std::optional<int64> absolute_capture_timestamp_ms
    );

    virtual int NumPreferredChannels() const;

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
