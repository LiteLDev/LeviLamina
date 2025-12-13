#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventLogOutput {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcEventLogOutput() = default;

    virtual bool IsActive() const = 0;

    virtual bool Write(::std::string_view) = 0;

    virtual void Flush();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
