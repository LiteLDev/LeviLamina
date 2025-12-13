#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RemoteBitrateObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnReceiveBitrateChanged(::std::vector<uint> const&, uint) = 0;

    virtual ~RemoteBitrateObserver() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
