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
        // member functions
        // NOLINTBEGIN
        MCNAPI SpatialLayer(::webrtc::VideoLayersAllocation::SpatialLayer const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::VideoLayersAllocation::SpatialLayer const&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    VideoLayersAllocation& operator=(VideoLayersAllocation const&);
    VideoLayersAllocation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoLayersAllocation(::webrtc::VideoLayersAllocation&&);

    MCNAPI VideoLayersAllocation(::webrtc::VideoLayersAllocation const&);

    MCNAPI ~VideoLayersAllocation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::VideoLayersAllocation&&);

    MCNAPI void* $ctor(::webrtc::VideoLayersAllocation const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
