#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoBitrateAllocation; }
// clang-format on

namespace webrtc {

class VideoBitrateAllocationObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VideoBitrateAllocationObserver() = default;

    // vIndex: 1
    virtual void OnBitrateAllocationUpdated(::webrtc::VideoBitrateAllocation const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
