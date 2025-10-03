#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct NetworkAdapter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>    mUnk10ab0a;
    ::ll::UntypedStorage<4, 4>    mUnk9967c7;
    ::ll::UntypedStorage<1, 1>    mUnk4ed148;
    ::ll::UntypedStorage<8, 2856> mUnk165a44;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkAdapter& operator=(NetworkAdapter const&);
    NetworkAdapter(NetworkAdapter const&);
    NetworkAdapter();
};

} // namespace RakNet
