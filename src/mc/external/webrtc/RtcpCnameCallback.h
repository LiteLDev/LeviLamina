#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpCnameCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcpCnameCallback() = default;

    virtual void OnCname(uint, ::std::string_view) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
