#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/WorkerPoolHandleInterface.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class WorkerPool;
namespace Bedrock { class WorkerPoolHandleInterface; }
// clang-format on

namespace Bedrock {

class WorkerPoolHandleImpl : public ::Bedrock::WorkerPoolHandleInterface {
public:
    // prevent constructor by default
    WorkerPoolHandleImpl& operator=(WorkerPoolHandleImpl const&);
    WorkerPoolHandleImpl(WorkerPoolHandleImpl const&);
    WorkerPoolHandleImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorkerPoolHandleImpl() = default;

    // vIndex: 1
    virtual Bedrock::NotNullNonOwnerPtr<class WorkerPool> get() const;

    // NOLINTEND
};

}; // namespace Bedrock
