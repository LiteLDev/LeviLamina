#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec {

struct Partition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk6cea3b;
    ::ll::UntypedStorage<4, 4> mUnkd65059;
    ::ll::UntypedStorage<4, 8> mUnk501dd2;
    ::ll::UntypedStorage<8, 24> mUnkc55f0e;
    // NOLINTEND

public:
    // prevent constructor by default
    Partition& operator=(Partition const&);
    Partition(Partition const&);
    Partition();

};

}
