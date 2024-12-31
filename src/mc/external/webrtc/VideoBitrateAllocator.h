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
    // prevent constructor by default
    VideoBitrateAllocator& operator=(VideoBitrateAllocator const&);
    VideoBitrateAllocator(VideoBitrateAllocator const&);
    VideoBitrateAllocator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VideoBitrateAllocator() = default;

    // vIndex: 1
    virtual ::webrtc::VideoBitrateAllocation GetAllocation(uint, uint);

    // vIndex: 2
    virtual ::webrtc::VideoBitrateAllocation Allocate(::webrtc::VideoBitrateAllocationParameters);

    // vIndex: 3
    virtual void SetLegacyConferenceMode(bool);
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
