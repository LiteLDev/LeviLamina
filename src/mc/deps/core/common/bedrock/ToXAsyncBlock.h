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
    // vIndex: 0, symbol: __gen_??1ToXAsyncBlock@AsyncResult@Threading@Bedrock@@UEAA@XZ
    virtual ~ToXAsyncBlock() = default;

    // vIndex: 1, symbol: ?getStatus@?$AsyncResultBase@PEAUXAsyncBlock@@@Threading@Bedrock@@UEBA?AW4AsyncStatus@23@XZ
    virtual ::Bedrock::Threading::AsyncStatus getStatus() const;

    // vIndex: 2, symbol: ?getError@?$AsyncResultBase@PEAUXAsyncBlock@@@Threading@Bedrock@@UEBA?AVerror_code@std@@XZ
    virtual std::error_code getError() const;

    // vIndex: 3, symbol: ?getResult@?$AsyncResultBase@PEAUXAsyncBlock@@@Threading@Bedrock@@UEBAPEAUXAsyncBlock@@XZ
    virtual struct XAsyncBlock* getResult() const;

    // vIndex: 4, symbol: ?cancel@?$AsyncResultBase@PEAUXAsyncBlock@@@Threading@Bedrock@@UEAAXXZ
    virtual void cancel();

    // vIndex: 5, symbol:
    // ?addOnComplete@?$AsyncResultBase@PEAUXAsyncBlock@@@Threading@Bedrock@@UEAAXV?$function@$$A6AXAEBV?$IAsyncResult@PEAUXAsyncBlock@@@Threading@Bedrock@@@Z@std@@@Z
    virtual void
    addOnComplete(std::function<void(class Bedrock::Threading::IAsyncResult<struct XAsyncBlock*> const&)> callback);

    // symbol:
    // ?create@ToXAsyncBlock@AsyncResult@Threading@Bedrock@@SA?AV?$shared_ptr@VToXAsyncBlock@AsyncResult@Threading@Bedrock@@@std@@PEAUXTaskQueueObject@@@Z
    MCAPI static std::shared_ptr<class Bedrock::Threading::AsyncResult::ToXAsyncBlock>
    create(struct XTaskQueueObject* queue);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getAsyncBlock@ToXAsyncBlock@AsyncResult@Threading@Bedrock@@AEAAPEAUXAsyncBlock@@XZ
    MCAPI struct XAsyncBlock* _getAsyncBlock();

    // symbol: ?_handleResult@ToXAsyncBlock@AsyncResult@Threading@Bedrock@@AEAAXJ@Z
    MCAPI void _handleResult(long);

    // NOLINTEND
};

}; // namespace Bedrock::Threading::AsyncResult
