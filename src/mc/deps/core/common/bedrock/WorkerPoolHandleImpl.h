#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/common/bedrock/WorkerPoolHandleInterface.h"

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
    // vIndex: 0, symbol: __gen_??1WorkerPoolHandleImpl@Bedrock@@UEAA@XZ
    virtual ~WorkerPoolHandleImpl() = default;

    // vIndex: 1, symbol:
    // ?get@WorkerPoolHandleImpl@Bedrock@@UEBA?AV?$not_null@V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@@gsl@@XZ
    virtual Bedrock::NotNullNonOwnerPtr<class WorkerPool> get() const;

    // NOLINTEND
};

}; // namespace Bedrock
