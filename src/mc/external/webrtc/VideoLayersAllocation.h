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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkbc067d;
        ::ll::UntypedStorage<4, 4>  mUnkb9e9b7;
        ::ll::UntypedStorage<8, 40> mUnkc39312;
        ::ll::UntypedStorage<2, 2>  mUnk4af1e5;
        ::ll::UntypedStorage<2, 2>  mUnkf332ae;
        ::ll::UntypedStorage<1, 1>  mUnk54d5a3;
        // NOLINTEND

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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk8071e8;
    ::ll::UntypedStorage<1, 1>   mUnkf72c9c;
    ::ll::UntypedStorage<8, 232> mUnka78e9e;
    // NOLINTEND

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
