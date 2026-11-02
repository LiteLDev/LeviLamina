#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResultData;
struct ContainerValidationResult;
// clang-format on

struct ContainerScreenActionResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                                 mActionSucceeded;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerValidationResult>>                          mValidationResults;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ContainerScreenActionResultData>>> mResultData;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ContainerScreenActionResult();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit ContainerScreenActionResult(::ContainerValidationResult const& validationResult);

    MCNAPI void appendResult(::ContainerScreenActionResult const& result);

    MCNAPI ~ContainerScreenActionResult();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ContainerValidationResult const& validationResult);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
