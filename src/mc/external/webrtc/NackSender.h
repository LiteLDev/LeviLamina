#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class NackSender {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void SendNack(::std::vector<ushort> const&, bool) = 0;

    // vIndex: 1
    virtual ~NackSender() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
