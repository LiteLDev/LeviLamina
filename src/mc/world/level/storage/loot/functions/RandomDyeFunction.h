#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class ItemStackBase;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class RandomDyeFunction : public ::LootItemFunction {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomDyeFunction() /*override*/ = default;

    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext&) /*override*/;

    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext&) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _applyBase(::ItemStackBase& item, ::Random& random);

#ifdef LL_PLAT_S
    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCFOLD void $apply(::ItemStack& item, ::Random& random, ::LootTableContext&);
#else // LL_PLAT_C
    MCAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext&);
#endif

#ifdef LL_PLAT_S
    MCFOLD void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext&);
#else // LL_PLAT_C
    MCAPI void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext&);
#endif

    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND
};
