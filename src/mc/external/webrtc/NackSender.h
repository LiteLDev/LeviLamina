#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class NackSender {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SendNack(::std::vector<ushort> const&, bool) = 0;

    virtual ~NackSender() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
