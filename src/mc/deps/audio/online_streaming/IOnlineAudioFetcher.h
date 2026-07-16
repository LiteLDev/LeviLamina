#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

class IOnlineAudioFetcher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOnlineAudioFetcher() = default;

    virtual void start() = 0;

    virtual void update(float) = 0;

    virtual void notifyReadPosition(uint64) = 0;

    virtual void seekTo(uint64) = 0;

    virtual void stop() = 0;

    virtual bool isFetching() const = 0;

    virtual uint64 getNextFetchOffset() const = 0;

    virtual uint64 getTotalBytesRequested() const = 0;

    virtual uint getTotalRetries() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Audio
