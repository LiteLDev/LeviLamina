#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemColor.h"
#include "mc/world/level/block/BannerBlockType.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class LootTableContext;
class Random;
// clang-format on

class SetBannerDetailsFunction : public ::LootItemFunction {
public:
    // SetBannerDetailsFunction inner types define
    using Pattern = ::std::pair<uchar, ::ItemColor>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::BannerBlockType>                               mBannerType;
    ::ll::TypedStorage<1, 1, ::ItemColor>                                     mBaseColor;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<uchar, ::ItemColor>>> mBannerPatterns;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SetBannerDetailsFunction() /*override*/ = default;

    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&) /*override*/;

    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
