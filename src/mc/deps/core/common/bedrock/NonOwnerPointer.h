#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0>
class NonOwnerPointer {

public:
    // prevent constructor by default
    NonOwnerPointer& operator=(NonOwnerPointer const&) = delete;
    NonOwnerPointer(NonOwnerPointer const&)            = delete;
    NonOwnerPointer()                                  = delete;
};

}; // namespace Bedrock
