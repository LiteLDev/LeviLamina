#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/WorkTargetItem.h"

namespace Bedrock::Threading::Burst::Details {

class WorkTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Burst::Details::WorkTargetItem>                mPrimary;
    ::ll::TypedStorage<8, 16, ::gsl::span<::Bedrock::Threading::Burst::Details::WorkTargetItem>>   mSecondaries;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::Threading::Burst::Details::WorkTargetItem>> mSecondariesStorage;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    WorkTarget();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit WorkTarget(uint64 secondaryWorkersCount);

    MCAPI ~WorkTarget();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(uint64 secondaryWorkersCount);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Bedrock::Threading::Burst::Details
