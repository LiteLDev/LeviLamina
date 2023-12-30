#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class Parameter {
public:
    // prevent constructor by default
    Parameter& operator=(Parameter const&);
    Parameter(Parameter const&);
    Parameter();
};

}; // namespace dcsctp
