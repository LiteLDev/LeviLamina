#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/AsyncStatus.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
struct XAsyncBlock;
struct XTaskQueueObject;
// clang-format on

namespace Bedrock::Threading::AsyncResult {

class ToXAsyncBlock {
public:
    // prevent constructor by default
    ToXAsyncBlock& operator=(ToXAsyncBlock const&);
    ToXAsyncBlock(ToXAsyncBlock const&);
    ToXAsyncBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ToXAsyncBlock() = default;

    // vIndex: 1
    virtual ::Bedrock::Threading::AsyncStatus getStatus() const;

    // vIndex: 2
    virtual std::error_code getError() const;

    // vIndex: 3
    virtual void cancel();

    // vIndex: 4
    virtual struct XAsyncBlock* getResult() const;

    // vIndex: 5
    virtual void
    addOnComplete(std::function<void(class Bedrock::Threading::IAsyncResult<struct XAsyncBlock*> const&)> callback);

    MCAPI static std::shared_ptr<class Bedrock::Threading::AsyncResult::ToXAsyncBlock>
    create(struct XTaskQueueObject* queue);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct XAsyncBlock* _getAsyncBlock();

    MCAPI void _handleResult(long);

    // NOLINTEND
};

}; // namespace Bedrock::Threading::AsyncResult
