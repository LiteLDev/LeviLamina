#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SpatialLayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkd917a7;
    ::ll::UntypedStorage<2, 2> mUnkc963dc;
    ::ll::UntypedStorage<4, 4> mUnkbf75a2;
    ::ll::UntypedStorage<1, 1> mUnk388753;
    ::ll::UntypedStorage<4, 4> mUnkbc6858;
    ::ll::UntypedStorage<4, 4> mUnk95f01b;
    ::ll::UntypedStorage<4, 4> mUnk6aa1dc;
    ::ll::UntypedStorage<4, 4> mUnk7af55a;
    ::ll::UntypedStorage<1, 1> mUnk91dc02;
    // NOLINTEND

public:
    // prevent constructor by default
    SpatialLayer& operator=(SpatialLayer const&);
    SpatialLayer(SpatialLayer const&);
    SpatialLayer();

};

}
