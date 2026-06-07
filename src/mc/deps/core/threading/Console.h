#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading::Burst { struct QueueConfig; }
namespace Bedrock::Threading::Burst::Details { class WorkTarget; }
// clang-format on

namespace Bedrock::Threading::Burst::Strategy {

class Console {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mPrimaryWorkerCount;
    ::ll::TypedStorage<8, 8, uint64> mSecondaryWorkerCount;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    Console();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit Console(::Bedrock::Threading::Burst::QueueConfig const& config);

    MCAPI void fillTarget(uint64, uint64 totalItems, ::Bedrock::Threading::Burst::Details::WorkTarget& workTarget);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::Bedrock::Threading::Burst::QueueConfig const& config);
#endif
    // NOLINTEND
};

} // namespace Bedrock::Threading::Burst::Strategy
