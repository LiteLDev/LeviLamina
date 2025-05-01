#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioTrackSinkInterface {
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
    virtual ~AudioTrackSinkInterface() = default;
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
