#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RemoteBitrateObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void OnReceiveBitrateChanged(::std::vector<uint> const&, uint) = 0;

    // vIndex: 1
    virtual ~RemoteBitrateObserver() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
