#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct CloudQueryResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkff821e;
    ::ll::UntypedStorage<8, 16> mUnk1e0774;
    ::ll::UntypedStorage<8, 16> mUnkb461d3;
    ::ll::UntypedStorage<1, 1> mUnk63efe8;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudQueryResult& operator=(CloudQueryResult const&);
    CloudQueryResult(CloudQueryResult const&);
    CloudQueryResult();

};

}
