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

class SetSpawnEggFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnk9445a3;
    // NOLINTEND

public:
    // prevent constructor by default
    SetSpawnEggFunction& operator=(SetSpawnEggFunction const&);
    SetSpawnEggFunction(SetSpawnEggFunction const&);
    SetSpawnEggFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SetSpawnEggFunction() /*override*/ = default;

    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual void apply(::ItemInstance& itemInstance, ::Random&, ::LootTableContext& context) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);

    MCNAPI void $apply(::ItemInstance& itemInstance, ::Random&, ::LootTableContext& context);

    MCNAPI ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
