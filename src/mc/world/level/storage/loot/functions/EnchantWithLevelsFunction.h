#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/RandomValueBounds.h"
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
    ::ll::TypedStorage<4, 8, ::RandomValueBounds> mLevels;
    ::ll::TypedStorage<1, 1, bool>                mTreasure;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantWithLevelsFunction() /*override*/ = default;

    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual int
    apply(::ItemStack& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context) /*override*/;

    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual int
    apply(::ItemInstance& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);
#else // LL_PLAT_C
    MCFOLD void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);
#endif

#ifdef LL_PLAT_S
    MCAPI int $apply(::ItemStack& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);
#else // LL_PLAT_C
    MCFOLD int $apply(::ItemStack& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);
#endif

#ifdef LL_PLAT_S
    MCAPI void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);
#else // LL_PLAT_C
    MCFOLD void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);
#endif

#ifdef LL_PLAT_S
    MCAPI int $apply(::ItemInstance& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);
#else // LL_PLAT_C
    MCFOLD int $apply(::ItemInstance& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);
#endif

    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
