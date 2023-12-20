#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class VideoBitrateAllocation {
public:
    // prevent constructor by default
    VideoBitrateAllocation& operator=(VideoBitrateAllocation const&);
    VideoBitrateAllocation(VideoBitrateAllocation const&);

public:
    // NOLINTBEGIN
    // symbol: ?GetBitrate@VideoBitrateAllocation@webrtc@@QEBAI_K0@Z
    MCAPI uint GetBitrate(uint64, uint64) const;

    // symbol:
    // ?GetSimulcastAllocations@VideoBitrateAllocation@webrtc@@QEBA?AV?$vector@V?$optional@VVideoBitrateAllocation@webrtc@@@std@@V?$allocator@V?$optional@VVideoBitrateAllocation@webrtc@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::optional<class webrtc::VideoBitrateAllocation>> GetSimulcastAllocations() const;

    // symbol: ?GetSpatialLayerSum@VideoBitrateAllocation@webrtc@@QEBAI_K@Z
    MCAPI uint GetSpatialLayerSum(uint64) const;

    // symbol: ?GetTemporalLayerSum@VideoBitrateAllocation@webrtc@@QEBAI_K0@Z
    MCAPI uint GetTemporalLayerSum(uint64, uint64) const;

    // symbol: ?HasBitrate@VideoBitrateAllocation@webrtc@@QEBA_N_K0@Z
    MCAPI bool HasBitrate(uint64, uint64) const;

    // symbol: ?IsSpatialLayerUsed@VideoBitrateAllocation@webrtc@@QEBA_N_K@Z
    MCAPI bool IsSpatialLayerUsed(uint64) const;

    // symbol: ?SetBitrate@VideoBitrateAllocation@webrtc@@QEAA_N_K0I@Z
    MCAPI bool SetBitrate(uint64, uint64, uint);

    // symbol:
    // ?ToString@VideoBitrateAllocation@webrtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ??0VideoBitrateAllocation@webrtc@@QEAA@XZ
    MCAPI VideoBitrateAllocation();

    // NOLINTEND
};

}; // namespace webrtc
