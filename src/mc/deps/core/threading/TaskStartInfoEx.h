#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/threading/TaskStartInfoBase.h"

template <typename T0>
struct TaskStartInfoEx : public TaskStartInfoBase {
public:
    std::shared_ptr<Bedrock::Threading::IAsyncResult<T0>> predecessor;
};
