#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/common/bedrock/WorkerPoolManager.h"

// auto generated forward declare list
// clang-format off
class WorkerPool;
// clang-format on

namespace Bedrock {

class WorkerPoolHandle : public ::Bedrock::WorkerPoolManager::PoolHandleInterface {
public:
    // prevent constructor by default
    WorkerPoolHandle& operator=(WorkerPoolHandle const&);
    WorkerPoolHandle(WorkerPoolHandle const&);
    WorkerPoolHandle();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?get@WorkerPoolHandle@Bedrock@@UEBA?AV?$not_null@V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@@gsl@@XZ
    virtual gsl::not_null<class Bedrock::NonOwnerPointer<class WorkerPool>> get() const;

    // NOLINTEND
};

}; // namespace Bedrock
