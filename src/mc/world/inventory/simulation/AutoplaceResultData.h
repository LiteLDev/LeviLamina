#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenActionResultData.h"

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
// clang-format on

struct AutoplaceResultData : public ::ContainerScreenActionResultData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf8ae2d;
    // NOLINTEND

public:
    // prevent constructor by default
    AutoplaceResultData& operator=(AutoplaceResultData const&);
    AutoplaceResultData(AutoplaceResultData const&);
    AutoplaceResultData();

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::optional<int> getRemaining(::ContainerScreenActionResult const& result);
#endif
    // NOLINTEND
};
