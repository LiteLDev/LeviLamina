#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class BitrateStatisticsObserver {
public:
    // prevent constructor by default
    BitrateStatisticsObserver& operator=(BitrateStatisticsObserver const&);
    BitrateStatisticsObserver(BitrateStatisticsObserver const&);
    BitrateStatisticsObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BitrateStatisticsObserver() = default;

    // vIndex: 1
    virtual void Notify(uint, uint, uint) = 0;
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
