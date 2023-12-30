#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

template <typename T0>
class AnyInvocable {
public:
    // prevent constructor by default
    AnyInvocable& operator=(AnyInvocable const&);
    AnyInvocable(AnyInvocable const&);
    AnyInvocable();
};

}; // namespace absl
