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
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getStatus\@?$AsyncResultBase\@PEAUXAsyncBlock\@\@\@Threading\@Bedrock\@\@UEBA?AW4AsyncStatus\@23\@XZ
     */
    virtual enum class Bedrock::Threading::AsyncStatus getStatus() const;
    /**
     * @vftbl 2
     * @symbol ?getError\@?$AsyncResultBase\@PEAUXAsyncBlock\@\@\@Threading\@Bedrock\@\@UEBA?AVerror_code\@std\@\@XZ
     */
    virtual std::error_code getError() const;
    /**
     * @vftbl 3
     * @symbol
     * ?getException\@?$AsyncResultBase\@PEAUXAsyncBlock\@\@\@Threading\@Bedrock\@\@UEBA?AVexception_ptr\@std\@\@XZ
     */
    virtual std::exception_ptr getException() const;
    /**
     * @vftbl 4
     * @symbol ?getResult\@?$AsyncResultBase\@PEAUXAsyncBlock\@\@\@Threading\@Bedrock\@\@UEBAPEAUXAsyncBlock\@\@XZ
     */
    virtual struct XAsyncBlock* getResult() const;
    /**
     * @vftbl 5
     * @symbol ?cancel\@?$AsyncResultBase\@PEAUXAsyncBlock\@\@\@Threading\@Bedrock\@\@UEAAXXZ
     */
    virtual void cancel();
    /**
     * @vftbl 6
     * @symbol
     * ?addOnComplete\@?$AsyncResultBase\@PEAUXAsyncBlock\@\@\@Threading\@Bedrock\@\@UEAAXV?$function\@$$A6AXAEBV?$IAsyncResult\@PEAUXAsyncBlock\@\@\@Threading\@Bedrock\@\@\@Z\@std\@\@\@Z
     */
    virtual void addOnComplete(std::function<void(class Bedrock::Threading::IAsyncResult<struct XAsyncBlock*> const&)>);
    /**
     * @symbol
     * ?create\@ToXAsyncBlock\@AsyncResult\@Threading\@Bedrock\@\@SA?AV?$shared_ptr\@VToXAsyncBlock\@AsyncResult\@Threading\@Bedrock\@\@\@std\@\@PEAUXTaskQueueObject\@\@\@Z
     */
    MCAPI static std::shared_ptr<class Bedrock::Threading::AsyncResult::ToXAsyncBlock> create(struct XTaskQueueObject*);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_getAsyncBlock\@ToXAsyncBlock\@AsyncResult\@Threading\@Bedrock\@\@AEAAPEAUXAsyncBlock\@\@XZ
     */
    MCAPI struct XAsyncBlock* _getAsyncBlock();
    /**
     * @symbol ?_handleResult\@ToXAsyncBlock\@AsyncResult\@Threading\@Bedrock\@\@AEAAXJ\@Z
     */
    MCAPI void _handleResult(long);
    // NOLINTEND
};

}; // namespace Bedrock::Threading::AsyncResult
