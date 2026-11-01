#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "ll/api/data/SmallVector.h"
#include "mc/deps/core/container/small_vector_base.h"

namespace Bedrock {

template <typename T0, int T1>
class small_vector : public ::ll::data::SmallVector<T0, T1> {
    using Base = ::ll::data::SmallVector<T0, T1>;

public:
    using Base::Base;
    using Base::operator=;
};

} // namespace Bedrock
