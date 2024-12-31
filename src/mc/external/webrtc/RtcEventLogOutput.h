#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventLogOutput {
public:
    // prevent constructor by default
    RtcEventLogOutput& operator=(RtcEventLogOutput const&);
    RtcEventLogOutput(RtcEventLogOutput const&);
    RtcEventLogOutput();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtcEventLogOutput() = default;

    // vIndex: 1
    virtual bool IsActive() const = 0;

    // vIndex: 2
    virtual bool Write(::std::string_view) = 0;

    // vIndex: 3
    virtual void Flush();
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
