#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoBitrateAllocation; }
namespace webrtc { struct VideoBitrateAllocationParameters; }
// clang-format on

namespace webrtc {

class VideoBitrateAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VideoBitrateAllocator() = default;

    virtual ::webrtc::VideoBitrateAllocation GetAllocation(uint, uint);

    virtual ::webrtc::VideoBitrateAllocation Allocate(::webrtc::VideoBitrateAllocationParameters);

    virtual void SetLegacyConferenceMode(bool);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
