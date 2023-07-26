#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0>
class NonOwnerPointer {

public:

    std::shared_ptr<T0> mPtr;

    NonOwnerPointer(T0& a1) { mPtr = std::make_shared<T0>(a1); }
};

}; // namespace Bedrock
