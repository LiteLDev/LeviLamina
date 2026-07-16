#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RSAParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkddc7cf;
    ::ll::UntypedStorage<4, 4> mUnk61a0c3;
    // NOLINTEND

public:
    // prevent constructor by default
    RSAParams& operator=(RSAParams const&);
    RSAParams(RSAParams const&);
    RSAParams();
};

} // namespace webrtc
