#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableQueueForMainThread.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class EnableQueueForMainThread; }
// clang-format on

namespace Bedrock::Threading {

class EnableFIFOQueueForMainThread : public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // prevent constructor by default
    EnableFIFOQueueForMainThread& operator=(EnableFIFOQueueForMainThread const&);
    EnableFIFOQueueForMainThread(EnableFIFOQueueForMainThread const&);
    EnableFIFOQueueForMainThread();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EnableFIFOQueueForMainThread@Threading@@@UEAA@XZ
    virtual ~EnableFIFOQueueForMainThread();

    // NOLINTEND
};

}; // namespace Bedrock::Threading
