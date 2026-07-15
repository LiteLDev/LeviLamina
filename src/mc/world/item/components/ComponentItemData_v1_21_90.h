#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/item/ItemDeprecatedComponentData.h"
#include "mc/deps/shared_types/v1_21_60/item/ItemDescription.h"
#include "mc/deps/shared_types/v1_21_90/item/ComponentItemComponentData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_21_90 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::SharedTypes::v1_21_60::ItemDescription>              mDescription;
    ::ll::TypedStorage<8, 1344, ::SharedTypes::v1_21_90::ComponentItemComponentData> mItemComponents;
    ::ll::TypedStorage<8, 872, ::SharedTypes::v1_20_50::ItemDeprecatedComponentData> mDeprecatedItemComponents;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};
