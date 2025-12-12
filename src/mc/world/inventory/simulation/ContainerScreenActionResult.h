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

public:
    // prevent constructor by default
    ContainerScreenActionResult& operator=(ContainerScreenActionResult const&);
    ContainerScreenActionResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ContainerScreenActionResult(::ContainerScreenActionResult const&);

    MCNAPI_C explicit ContainerScreenActionResult(::ContainerValidationResult const& validationResult);

    MCNAPI_C ::ContainerScreenActionResult& operator=(::ContainerScreenActionResult&&);

    MCNAPI_C ~ContainerScreenActionResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::ContainerScreenActionResult const&);

    MCNAPI_C void* $ctor(::ContainerValidationResult const& validationResult);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
