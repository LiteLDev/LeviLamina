#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec {

struct IntermediateEndpointData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkf2b9fd;
    ::ll::UntypedStorage<8, 24> mUnk6f4e54;
    // NOLINTEND

public:
    // prevent constructor by default
    IntermediateEndpointData& operator=(IntermediateEndpointData const&);
    IntermediateEndpointData(IntermediateEndpointData const&);
    IntermediateEndpointData();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~IntermediateEndpointData();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace astc_codec
