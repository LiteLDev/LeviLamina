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

class CarryOverBlockEntityDataFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mDynamicProperties;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CarryOverBlockEntityDataFunction() /*override*/ = default;

    virtual void apply(::ItemStack& item, ::Random&, ::LootTableContext& context) /*override*/;

    virtual void apply(::ItemInstance& item, ::Random&, ::LootTableContext& context) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _apply(::ItemStackBase& item, ::LootTableContext& context);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value const& object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void $apply(::ItemStack& item, ::Random&, ::LootTableContext& context);
#else // LL_PLAT_C
    MCFOLD void $apply(::ItemStack& item, ::Random&, ::LootTableContext& context);
#endif

#ifdef LL_PLAT_S
    MCAPI void $apply(::ItemInstance& item, ::Random&, ::LootTableContext& context);
#else // LL_PLAT_C
    MCFOLD void $apply(::ItemInstance& item, ::Random&, ::LootTableContext& context);
#endif

    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
