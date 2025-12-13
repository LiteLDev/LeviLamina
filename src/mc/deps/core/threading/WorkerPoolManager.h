#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class WorkerPoolHandleInterface; }
namespace Bedrock::Threading { class OSThreadPriority; }
// clang-format on

namespace Bedrock {

class WorkerPoolManager : public ::Bedrock::EnableNonOwnerReferences,
                          public ::Bedrock::ImplBase<::Bedrock::WorkerPoolManager> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void init() = 0;

    virtual ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface> createWorkerPool(
        ::std::string,
        uint64,
        ::Bedrock::Threading::OSThreadPriority const&,
        ::std::optional<uint64> const,
        bool,
        ::std::optional<int> const
    ) = 0;

    virtual void tick() = 0;

    virtual ~WorkerPoolManager() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
