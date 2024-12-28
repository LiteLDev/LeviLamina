#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec::base {

struct NulloptT {
public:
    // prevent constructor by default
    NulloptT& operator=(NulloptT const&);
    NulloptT(NulloptT const&);
    NulloptT();
};

} // namespace astc_codec::base
