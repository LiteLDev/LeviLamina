#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpCnameCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcpCnameCallback();

    virtual void OnCname(uint, ::std::string_view) = 0;
    // NOLINTEND
};

} // namespace webrtc
