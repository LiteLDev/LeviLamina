#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct FrameCounts; }
// clang-format on

namespace webrtc {

class FrameCountObserver {
public:
    // prevent constructor by default
    FrameCountObserver& operator=(FrameCountObserver const&);
    FrameCountObserver(FrameCountObserver const&);
    FrameCountObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FrameCountObserver();

    // vIndex: 1
    virtual void FrameCountUpdated(::webrtc::FrameCounts const&, uint) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
