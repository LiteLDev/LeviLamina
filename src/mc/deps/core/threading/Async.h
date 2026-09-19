#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/deps/core/threading/IAsyncResult.h"

namespace Bedrock::Threading {

/// @brief The game spells this as an `AsyncImplBase<T>` base subobject holding the handle; a member
///        at the same offset is layout-identical, and the destructor stays type-erased through the
///        shared_ptr, so IAsyncResult<T> never has to be complete.
template <typename T0>
class Async {
public:
    std::shared_ptr<::Bedrock::Threading::IAsyncResult<T0>> mResult;
};

} // namespace Bedrock::Threading
