#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class Context {
public:
    // prevent constructor by default
    Context& operator=(Context const&);
    Context(Context const&);
    Context();
};

}; // namespace dcsctp
