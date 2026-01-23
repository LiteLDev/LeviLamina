#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/item/ItemCategory.h"

// auto generated forward declare list
// clang-format off
struct ComponentItemMenuCategoryData_v1_21_60;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemMenuCategoryData_v1_21_110 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory> mCreativeCategory;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                              mCreativeGroupName;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                        mIsHiddenInCommands;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemMenuCategoryData_v1_21_110& operator=(ComponentItemMenuCategoryData_v1_21_110 const&);
    ComponentItemMenuCategoryData_v1_21_110(ComponentItemMenuCategoryData_v1_21_110 const&);
    ComponentItemMenuCategoryData_v1_21_110();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ComponentItemMenuCategoryData_v1_21_110& operator=(::ComponentItemMenuCategoryData_v1_21_110&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void
    upgrade(::ComponentItemMenuCategoryData_v1_21_60& oldData, ::ComponentItemMenuCategoryData_v1_21_110& newData);
    // NOLINTEND
};
