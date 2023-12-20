#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoLayersAllocation {
public:
    // VideoLayersAllocation inner types declare
    // clang-format off
    struct SpatialLayer;
    // clang-format on

    // VideoLayersAllocation inner types define
    struct SpatialLayer {
    public:
        // prevent constructor by default
        SpatialLayer& operator=(SpatialLayer const&);
        SpatialLayer();

    public:
        // NOLINTBEGIN
        // symbol: ??0SpatialLayer@VideoLayersAllocation@webrtc@@QEAA@AEBU012@@Z
        MCAPI SpatialLayer(struct webrtc::VideoLayersAllocation::SpatialLayer const&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    VideoLayersAllocation& operator=(VideoLayersAllocation const&);
    VideoLayersAllocation();

public:
    // NOLINTBEGIN
    // symbol: ??0VideoLayersAllocation@webrtc@@QEAA@$$QEAU01@@Z
    MCAPI VideoLayersAllocation(struct webrtc::VideoLayersAllocation&&);

    // symbol: ??0VideoLayersAllocation@webrtc@@QEAA@AEBU01@@Z
    MCAPI VideoLayersAllocation(struct webrtc::VideoLayersAllocation const&);

    // symbol: ??1VideoLayersAllocation@webrtc@@QEAA@XZ
    MCAPI ~VideoLayersAllocation();

    // NOLINTEND
};

}; // namespace webrtc
