#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/profiler/ThreadFrameType.h"

// auto generated forward declare list
// clang-format off
struct WorkerPoolConfig;
namespace Bedrock { class WorkerPoolHandleInterface; }
// clang-format on

namespace Bedrock {

class WorkerPoolManager : public ::Bedrock::EnableNonOwnerReferences,
                          public ::Bedrock::ImplBase<::Bedrock::WorkerPoolManager> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void init() = 0;

    virtual ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface> createWorkerPool(
        ::std::string_view               name,
        ::Core::Profile::ThreadFrameType frameType,
        ::WorkerPoolConfig const&        config
    ) = 0;

    virtual void tick() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
