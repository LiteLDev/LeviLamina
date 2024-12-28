#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec::base {

struct InplaceT {
public:
    // prevent constructor by default
    InplaceT& operator=(InplaceT const&);
    InplaceT(InplaceT const&);
    InplaceT();
};

} // namespace astc_codec::base
