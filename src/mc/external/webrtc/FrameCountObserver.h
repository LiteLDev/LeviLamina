#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct FrameCounts; }
// clang-format on

namespace webrtc {

class FrameCountObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FrameCountObserver() = default;

    virtual void FrameCountUpdated(::webrtc::FrameCounts const&, uint) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
