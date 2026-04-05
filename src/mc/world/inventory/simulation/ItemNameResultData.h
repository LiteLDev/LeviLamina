#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenActionResultData.h"

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
// clang-format on

struct ItemNameResultData : public ::ContainerScreenActionResultData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd28ec8;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemNameResultData& operator=(ItemNameResultData const&);
    ItemNameResultData(ItemNameResultData const&);
    ItemNameResultData();

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::optional<::std::string> getItemName(::ContainerScreenActionResult const& result);
#endif
    // NOLINTEND
};
