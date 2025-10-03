#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec {

struct IntermediateEndpointData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkf2b9fd;
    ::ll::UntypedStorage<8, 24> mUnk322959;
    // NOLINTEND

public:
    // prevent constructor by default
    IntermediateEndpointData& operator=(IntermediateEndpointData const&);
    IntermediateEndpointData(IntermediateEndpointData const&);
    IntermediateEndpointData();
};

} // namespace astc_codec
