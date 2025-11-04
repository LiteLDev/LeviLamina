#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/threading/AsyncBase.h"
#include "mc/deps/core/threading/IAsyncGetResult.h"

namespace Bedrock::Threading {

template <typename T>
class IAsyncResult : public Bedrock::Threading::AsyncBase, public Bedrock::Threading::IAsyncGetResult<T> {
public:
    using Handle            = std::shared_ptr<Bedrock::Threading::IAsyncResult<T>>;
    using CompletionHandler = std::function<void(const Bedrock::Threading::IAsyncResult<T>&)>;

    virtual T addOnComplete(Bedrock::Threading::IAsyncResult<T>::CompletionHandler) = 0;
};

} // namespace Bedrock::Threading
