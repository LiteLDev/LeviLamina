#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
struct Trade;
namespace Json { class Value; }
// clang-format on

class EnchantWithLevelsFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk3632ac;
    ::ll::UntypedStorage<1, 1> mUnkc5975e;
    // NOLINTEND

public:
    // prevent constructor by default
    EnchantWithLevelsFunction& operator=(EnchantWithLevelsFunction const&);
    EnchantWithLevelsFunction(EnchantWithLevelsFunction const&);
    EnchantWithLevelsFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnchantWithLevelsFunction() /*override*/ = default;

    // vIndex: 4
    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;

    // vIndex: 3
    virtual int
    apply(::ItemStack& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context) /*override*/;

    // vIndex: 2
    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context) /*override*/;

    // vIndex: 1
    virtual int
    apply(::ItemInstance& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);

    MCFOLD int $apply(::ItemStack& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);

    MCFOLD void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);

    MCFOLD int $apply(::ItemInstance& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
