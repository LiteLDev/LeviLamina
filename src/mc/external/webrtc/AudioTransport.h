#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioTransport {
public:
    // prevent constructor by default
    AudioTransport& operator=(AudioTransport const&);
    AudioTransport(AudioTransport const&);
    AudioTransport();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual int RecordedDataIsAvailable(void const*, uint64, uint64, uint64, uint, uint, int, uint, bool, uint&) = 0;

    // vIndex: 0
    virtual int
    RecordedDataIsAvailable(void const*, uint64, uint64, uint64, uint, uint, int, uint, bool, uint&, ::std::optional<int64>);

    // vIndex: 2
    virtual int NeedMorePlayData(uint64, uint64, uint64, uint, void*, uint64&, int64*, int64*) = 0;

    // vIndex: 3
    virtual void PullRenderData(int, int, uint64, uint64, void*, int64*, int64*) = 0;

    // vIndex: 4
    virtual ~AudioTransport() = default;
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
