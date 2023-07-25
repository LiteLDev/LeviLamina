#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

namespace Bedrock {

class WorkerPoolHandle {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_WORKERPOOLHANDLE
public:
    WorkerPoolHandle& operator=(WorkerPoolHandle const&) = delete;
    WorkerPoolHandle(WorkerPoolHandle const&)            = delete;
    WorkerPoolHandle()                                   = delete;
#endif

public:
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
};

}; // namespace Bedrock
