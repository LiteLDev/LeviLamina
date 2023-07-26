#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { enum class AsyncStatus; }
struct XAsyncBlock;
struct XTaskQueueObject;
// clang-format on

namespace Bedrock::Threading::AsyncResult {

class ToXAsyncBlock {

public:
    // prevent constructor by default
    ToXAsyncBlock& operator=(ToXAsyncBlock const&) = delete;
    ToXAsyncBlock(ToXAsyncBlock const&)            = delete;
    ToXAsyncBlock()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @symbol
     * ?create\@ToXAsyncBlock\@AsyncResult\@Threading\@Bedrock\@\@SA?AV?$shared_ptr\@VToXAsyncBlock\@AsyncResult\@Threading\@Bedrock\@\@\@std\@\@PEAUXTaskQueueObject\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class Bedrock::Threading::AsyncResult::ToXAsyncBlock>
    create(struct XTaskQueueObject*); // NOLINT

    // private:
    /**
     * @symbol ?_getAsyncBlock\@ToXAsyncBlock\@AsyncResult\@Threading\@Bedrock\@\@AEAAPEAUXAsyncBlock\@\@XZ
     */
    MCAPI struct XAsyncBlock* _getAsyncBlock(); // NOLINT
    /**
     * @symbol ?_handleResult\@ToXAsyncBlock\@AsyncResult\@Threading\@Bedrock\@\@AEAAXJ\@Z
     */
    MCAPI void _handleResult(long); // NOLINT

private:
};

}; // namespace Bedrock::Threading::AsyncResult
