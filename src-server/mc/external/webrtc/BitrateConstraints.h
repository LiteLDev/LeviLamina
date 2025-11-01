#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct BitrateConstraints {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8f9214;
    ::ll::UntypedStorage<4, 4> mUnkfd9460;
    ::ll::UntypedStorage<4, 4> mUnk3a9e78;
    // NOLINTEND

public:
    // prevent constructor by default
    BitrateConstraints& operator=(BitrateConstraints const&);
    BitrateConstraints(BitrateConstraints const&);
    BitrateConstraints();

};

}
