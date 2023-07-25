#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"

namespace Bedrock::Threading {

class EnableQueueForMainThread {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_THREADING_ENABLEQUEUEFORMAINTHREAD
public:
    EnableQueueForMainThread& operator=(EnableQueueForMainThread const&) = delete;
    EnableQueueForMainThread(EnableQueueForMainThread const&)            = delete;
    EnableQueueForMainThread()                                           = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_THREADING_ENABLEQUEUEFORMAINTHREAD
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EnableQueueForMainThread();
#endif
    /**
     * @symbol
     * ??0EnableQueueForMainThread\@Threading\@Bedrock\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI EnableQueueForMainThread(std::string);

    // protected:
    /**
     * @symbol ?flushMainThreadTasks\@EnableQueueForMainThread\@Threading\@Bedrock\@\@IEAAXXZ
     */
    MCAPI void flushMainThreadTasks();
    /**
     * @symbol
     * ?queueForMainThread\@EnableQueueForMainThread\@Threading\@Bedrock\@\@IEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@$$QEAV?$function\@$$A6AXXZ\@5\@\@Z
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    queueForMainThread(class std::function<void(void)>&&);

protected:
};

}; // namespace Bedrock::Threading
