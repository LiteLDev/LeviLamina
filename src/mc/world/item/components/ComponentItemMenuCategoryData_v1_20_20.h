#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_19_40/item/ItemCategory.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemMenuCategoryData_v1_20_20 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk1d1c56;
    ::ll::UntypedStorage<8, 40> mUnkc1b1c6;
    ::ll::UntypedStorage<1, 2>  mUnk6be431;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemMenuCategoryData_v1_20_20(ComponentItemMenuCategoryData_v1_20_20 const&);
    ComponentItemMenuCategoryData_v1_20_20();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ComponentItemMenuCategoryData_v1_20_20& operator=(::ComponentItemMenuCategoryData_v1_20_20 const&);

    MCAPI ::ComponentItemMenuCategoryData_v1_20_20& operator=(::ComponentItemMenuCategoryData_v1_20_20&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void upgrade(
        ::std::optional<::SharedTypes::v1_19_40::ItemCategory::CreativeItemCategory>& oldData,
        ::std::optional<::ComponentItemMenuCategoryData_v1_20_20>&                    newData
    );
    // NOLINTEND
};
