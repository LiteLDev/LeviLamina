#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace Bedrock {

template <typename T0>
class Owner : public Bedrock::EnableNonOwnerReferences {
public:
    T0 mValue;
};

} // namespace Bedrock
