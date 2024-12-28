#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Intrusive {

template <typename T0>
class list_base_hook {
public:
    // prevent constructor by default
    list_base_hook& operator=(list_base_hook const&);
    list_base_hook(list_base_hook const&);
    list_base_hook();
};

} // namespace Bedrock::Intrusive
