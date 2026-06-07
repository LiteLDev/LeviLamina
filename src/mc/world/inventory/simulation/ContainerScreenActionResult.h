#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenActionResultData.h"

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
    ContainerScreenActionResult& operator=(ContainerScreenActionResult const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ContainerScreenActionResult();

    MCNAPI ContainerScreenActionResult(::ContainerScreenActionResult const&);

    MCNAPI ::std::shared_ptr<::ContainerScreenActionResultData const>
    tryGetResultData(::ContainerScreenActionResultData::Type type) const;

    MCNAPI ~ContainerScreenActionResult();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ContainerScreenActionResult const&);
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
