#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0>
class Copyable {
public:
    // prevent constructor by default
    Copyable& operator=(Copyable const&);
    Copyable(Copyable const&);
    Copyable();
};

} // namespace Bedrock
