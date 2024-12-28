#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Intrusive {

template <typename T0, typename T1>
class list_standard_operations {
public:
    // prevent constructor by default
    list_standard_operations& operator=(list_standard_operations const&);
    list_standard_operations(list_standard_operations const&);
    list_standard_operations();
};

} // namespace Bedrock::Intrusive
