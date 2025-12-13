#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/ContainerScreenActionResultData.h"

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
struct RecipeNetIdTag;
// clang-format on

struct CraftResultData : public ::ContainerScreenActionResultData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdeb516;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftResultData& operator=(CraftResultData const&);
    CraftResultData(CraftResultData const&);
    CraftResultData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::std::optional<::RecipeNetId> getRecipeId(::ContainerScreenActionResult const& result);
    // NOLINTEND
};
