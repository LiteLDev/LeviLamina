#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::SignalingEvents {

struct PingSent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk14c103;
    // NOLINTEND

public:
    // prevent constructor by default
    PingSent& operator=(PingSent const&);
    PingSent(PingSent const&);
    PingSent();
};

} // namespace NetherNet::SignalingEvents
