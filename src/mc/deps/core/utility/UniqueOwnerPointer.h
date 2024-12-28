#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0>
class UniqueOwnerPointer {
public:
    // prevent constructor by default
    UniqueOwnerPointer& operator=(UniqueOwnerPointer const&);
    UniqueOwnerPointer(UniqueOwnerPointer const&);
    UniqueOwnerPointer();
};

} // namespace Bedrock
