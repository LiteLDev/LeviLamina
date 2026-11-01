#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "ll/api/data/SmallVector.h"

namespace Bedrock {

template <typename T0>
class small_vector_base : public ::ll::data::SmallVectorBase<T0> {
protected:
    using ::ll::data::SmallVectorBase<T0>::SmallVectorBase;
};

} // namespace Bedrock
