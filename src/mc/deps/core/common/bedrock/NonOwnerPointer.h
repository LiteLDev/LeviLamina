#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

namespace Bedrock {

template <typename T0>
class NonOwnerPointer {

public:
    std::shared_ptr<Bedrock::EnableNonOwnerReferences::ControlBlock> mPtr;
};

}; // namespace Bedrock
