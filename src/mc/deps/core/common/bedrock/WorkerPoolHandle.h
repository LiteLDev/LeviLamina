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
    WorkerPoolHandle& operator=(WorkerPoolHandle const&) = delete;
    WorkerPoolHandle(WorkerPoolHandle const&)            = delete;
    WorkerPoolHandle()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?get\@WorkerPoolHandle\@Bedrock\@\@UEBA?AV?$not_null\@V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    virtual class gsl::not_null<class Bedrock::NonOwnerPointer<class WorkerPool>> get() const;
    // NOLINTEND
};

}; // namespace Bedrock
