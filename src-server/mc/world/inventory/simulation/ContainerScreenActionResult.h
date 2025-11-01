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
};
