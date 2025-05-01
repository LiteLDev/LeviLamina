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
    MCNAPI uint GetBitrate(uint64, uint64) const;

    MCNAPI ::std::vector<::std::optional<::webrtc::VideoBitrateAllocation>> GetSimulcastAllocations() const;

    MCNAPI uint GetSpatialLayerSum(uint64) const;

    MCNAPI uint GetTemporalLayerSum(uint64, uint64) const;

    MCNAPI bool HasBitrate(uint64, uint64) const;

    MCNAPI bool IsSpatialLayerUsed(uint64) const;

    MCNAPI bool SetBitrate(uint64, uint64, uint);

    MCNAPI ::std::string ToString() const;

    MCNAPI VideoBitrateAllocation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace webrtc
