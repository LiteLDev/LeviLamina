#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoBitrateAllocation; }
// clang-format on

namespace webrtc {

class VideoBitrateAllocationObserver {
public:
    // prevent constructor by default
    VideoBitrateAllocationObserver& operator=(VideoBitrateAllocationObserver const&);
    VideoBitrateAllocationObserver(VideoBitrateAllocationObserver const&);
    VideoBitrateAllocationObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VideoBitrateAllocationObserver();

    // vIndex: 1
    virtual void OnBitrateAllocationUpdated(::webrtc::VideoBitrateAllocation const&) = 0;
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
