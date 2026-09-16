#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/deps/core/threading/IAsyncResult.h"

namespace Bedrock::Threading {

template <typename T0>
class SharedAsync {
public:
    std::shared_ptr<::Bedrock::Threading::IAsyncResult<T0>> mResult;
};

} // namespace Bedrock::Threading
