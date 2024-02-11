#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableQueueForThread.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class EnableQueueForThread; }
// clang-format on

namespace Bedrock::Threading {

class EnableQueueForMainThread : public ::Bedrock::Threading::EnableQueueForThread {
public:
    // prevent constructor by default
    EnableQueueForMainThread& operator=(EnableQueueForMainThread const&);
    EnableQueueForMainThread(EnableQueueForMainThread const&);
    EnableQueueForMainThread();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EnableQueueForMainThread@Threading@Bedrock@@UEAA@XZ
    virtual ~EnableQueueForMainThread();

    // symbol:
    // ??0EnableQueueForMainThread@Threading@Bedrock@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit EnableQueueForMainThread(std::string name);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?flushMainThreadTasks@EnableQueueForMainThread@Threading@Bedrock@@IEAAXXZ
    MCAPI void flushMainThreadTasks();

    // symbol:
    // ?queueForMainThread@EnableQueueForMainThread@Threading@Bedrock@@IEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@$$QEAV?$function@$$A6AXXZ@5@@Z
    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
          queueForMainThread(std::function<void()>&& callback);

    // NOLINTEND
};

}; // namespace Bedrock::Threading
