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
namespace Json { class Value; }
// clang-format on

class SetItemDamageFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::RandomValueBounds> mDamage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SetItemDamageFunction() /*override*/ = default;

    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCFOLD void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);
#else // LL_PLAT_C
    MCAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);
#endif

#ifdef LL_PLAT_S
    MCFOLD void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);
#else // LL_PLAT_C
    MCAPI void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);
#endif

    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND
};
