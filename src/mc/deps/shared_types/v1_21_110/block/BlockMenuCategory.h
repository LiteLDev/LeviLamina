#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/item/ItemCategory.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct BlockMenuCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory> mCategory;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                              mGroupName;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                        mIsHiddenInCommands;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMenuCategory& operator=(BlockMenuCategory const&);
    BlockMenuCategory(BlockMenuCategory const&);
    BlockMenuCategory();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_110::BlockDefinition::BlockMenuCategory&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::BlockMenuCategory&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
