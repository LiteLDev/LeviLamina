#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpCnameCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtcpCnameCallback() = default;

    // vIndex: 1
    virtual void OnCname(uint, ::std::string_view) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
