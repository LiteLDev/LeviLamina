#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class VideoBitrateAllocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnka9dff0;
    ::ll::UntypedStorage<4, 160> mUnk83ac0d;
    ::ll::UntypedStorage<1, 1>   mUnk31ebe8;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoBitrateAllocation& operator=(VideoBitrateAllocation const&);
    VideoBitrateAllocation(VideoBitrateAllocation const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint GetBitrate(uint64, uint64) const;

    MCAPI ::std::vector<::std::optional<::webrtc::VideoBitrateAllocation>> GetSimulcastAllocations() const;

    MCAPI uint GetSpatialLayerSum(uint64) const;

    MCAPI uint GetTemporalLayerSum(uint64, uint64) const;

    MCAPI bool HasBitrate(uint64, uint64) const;

    MCAPI bool IsSpatialLayerUsed(uint64) const;

    MCAPI bool SetBitrate(uint64, uint64, uint);

    MCAPI ::std::string ToString() const;

    MCAPI VideoBitrateAllocation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace webrtc
