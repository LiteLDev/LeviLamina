#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct ParameterDescriptor {
public:
    // prevent constructor by default
    ParameterDescriptor& operator=(ParameterDescriptor const&);
    ParameterDescriptor(ParameterDescriptor const&);
    ParameterDescriptor();
};

} // namespace dcsctp
