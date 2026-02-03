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

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(uint64 secondaryWorkersCount);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Threading::Burst::Details
