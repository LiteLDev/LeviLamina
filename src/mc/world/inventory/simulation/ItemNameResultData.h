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
    ::ll::UntypedStorage<8, 32> mUnkec4356;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemNameResultData& operator=(ItemNameResultData const&);
    ItemNameResultData(ItemNameResultData const&);
    ItemNameResultData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::std::optional<::std::string> getItemName(::ContainerScreenActionResult const& result);
    // NOLINTEND
};
