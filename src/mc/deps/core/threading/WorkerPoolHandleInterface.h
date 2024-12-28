#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class WorkerPool;
// clang-format on

namespace Bedrock {

class WorkerPoolHandleInterface {
public:
    // prevent constructor by default
    WorkerPoolHandleInterface& operator=(WorkerPoolHandleInterface const&);
    WorkerPoolHandleInterface(WorkerPoolHandleInterface const&);
    WorkerPoolHandleInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorkerPoolHandleInterface();

    // vIndex: 1
    virtual ::Bedrock::NotNullNonOwnerPtr<::WorkerPool> get() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
