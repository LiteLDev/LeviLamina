#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioTrackSinkInterface {
public:
    // prevent constructor by default
    AudioTrackSinkInterface& operator=(AudioTrackSinkInterface const&);
    AudioTrackSinkInterface(AudioTrackSinkInterface const&);
    AudioTrackSinkInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void OnData(void const*, int, int, uint64, uint64);

    // vIndex: 0
    virtual void OnData(void const*, int, int, uint64, uint64, ::std::optional<int64>);

    // vIndex: 2
    virtual int NumPreferredChannels() const;

    // vIndex: 3
    virtual ~AudioTrackSinkInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnData(void const*, int, int, uint64, uint64);

    MCAPI void $OnData(void const*, int, int, uint64, uint64, ::std::optional<int64>);

    MCAPI int $NumPreferredChannels() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
