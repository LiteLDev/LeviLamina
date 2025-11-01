#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct HdrMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 40> mUnke354d4;
    ::ll::UntypedStorage<4, 4>  mUnkea5bd6;
    ::ll::UntypedStorage<4, 4>  mUnkc41e8c;
    // NOLINTEND

public:
    // prevent constructor by default
    HdrMetadata& operator=(HdrMetadata const&);
    HdrMetadata(HdrMetadata const&);
    HdrMetadata();
};

} // namespace webrtc
