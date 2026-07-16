#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class LootTableContext;
class Random;
// clang-format on

class SetBookContentsFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                mTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                mAuthor;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mPages;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SetBookContentsFunction() /*override*/ = default;

    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&) /*override*/;

    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
