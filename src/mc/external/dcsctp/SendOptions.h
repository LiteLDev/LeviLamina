#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct SendOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk470cf3;
    ::ll::UntypedStorage<4, 8>  mUnkb22f15;
    ::ll::UntypedStorage<8, 16> mUnkfaf874;
    ::ll::UntypedStorage<8, 8>  mUnk5caa18;
    // NOLINTEND

public:
    // prevent constructor by default
    SendOptions& operator=(SendOptions const&);
    SendOptions(SendOptions const&);
    SendOptions();
};

} // namespace dcsctp
