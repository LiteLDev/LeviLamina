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
    // vIndex: 0
    virtual ~EnableQueueForMainThread();

    MCAPI explicit EnableQueueForMainThread(std::string name);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void flushMainThreadTasks();

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
          queueForMainThread(std::function<void()>&& callback);

    // NOLINTEND
};

}; // namespace Bedrock::Threading
