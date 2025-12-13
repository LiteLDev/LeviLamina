#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/WorkerPoolHandleInterface.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class WorkerPool;
// clang-format on

namespace Bedrock {

class WorkerPoolHandleImpl : public ::Bedrock::WorkerPoolHandleInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk12adf5;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkerPoolHandleImpl& operator=(WorkerPoolHandleImpl const&);
    WorkerPoolHandleImpl(WorkerPoolHandleImpl const&);
    WorkerPoolHandleImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorkerPoolHandleImpl() /*override*/ = default;

    virtual ::Bedrock::NotNullNonOwnerPtr<::WorkerPool> get() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorkerPoolHandleImpl(::Bedrock::NotNullNonOwnerPtr<::WorkerPool> workerPool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::WorkerPool> workerPool);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::WorkerPool> $get() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
