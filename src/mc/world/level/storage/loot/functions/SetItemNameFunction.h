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
namespace Json { class Value; }
// clang-format on

class SetItemNameFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    SetItemNameFunction();

#else // LL_PLAT_C
#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SetItemNameFunction() /*override*/ = default;

    virtual void apply(::ItemStack& item, ::Random&, ::LootTableContext&) /*override*/;

    virtual void apply(::ItemInstance& itemInstance, ::Random&, ::LootTableContext&) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI
    SetItemNameFunction(::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates, ::std::string const& name);
#endif
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
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates, ::std::string const& name);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCFOLD void $apply(::ItemStack& item, ::Random&, ::LootTableContext&);
#else // LL_PLAT_C
    MCAPI void $apply(::ItemStack& item, ::Random&, ::LootTableContext&);
#endif

#ifdef LL_PLAT_S
    MCFOLD void $apply(::ItemInstance& itemInstance, ::Random&, ::LootTableContext&);
#else // LL_PLAT_C
    MCAPI void $apply(::ItemInstance& itemInstance, ::Random&, ::LootTableContext&);
#endif

    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND
};
