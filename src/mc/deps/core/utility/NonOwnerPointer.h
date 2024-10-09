#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0>
class NonOwnerPointer {
public:
    // prevent constructor by default
    NonOwnerPointer& operator=(NonOwnerPointer const&);
    NonOwnerPointer(NonOwnerPointer const&);
    NonOwnerPointer();
};

}; // namespace Bedrock
