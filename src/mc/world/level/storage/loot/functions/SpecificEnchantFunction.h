#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/item/enchanting/Enchant.h"
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

class SpecificEnchantFunction : public ::LootItemFunction {
public:
    // SpecificEnchantFunction inner types declare
    // clang-format off
    struct EnchantInfo;
    // clang-format on

    // SpecificEnchantFunction inner types define
    struct EnchantInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::Enchant::Type> enchantment;
        ::ll::TypedStorage<4, 8, ::IntRange>      levelRange;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SpecificEnchantFunction::EnchantInfo>> mEnchantments;
    // NOLINTEND

public:
    // prevent constructor by default
    SpecificEnchantFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpecificEnchantFunction() /*override*/ = default;

    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual void apply(::ItemInstance& itemInstance, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpecificEnchantFunction(
        ::std::vector<::std::unique_ptr<::LootItemCondition>>&       predicates,
        ::std::vector<::SpecificEnchantFunction::EnchantInfo> const& enchantments
    );

    MCAPI void _applyInner(::ItemStackBase& item, ::Random& random, ::LootTableContext&, bool allowNonVanilla);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::vector<::std::unique_ptr<::LootItemCondition>>&       predicates,
        ::std::vector<::SpecificEnchantFunction::EnchantInfo> const& enchantments
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);

    MCAPI void $apply(::ItemInstance& itemInstance, ::Random& random, ::LootTableContext& context);

    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
