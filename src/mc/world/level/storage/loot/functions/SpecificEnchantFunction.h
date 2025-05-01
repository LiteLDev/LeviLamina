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
        ::ll::UntypedStorage<1, 1> mUnk264825;
        ::ll::UntypedStorage<4, 8> mUnkcdc248;
        // NOLINTEND

    public:
        // prevent constructor by default
        EnchantInfo& operator=(EnchantInfo const&);
        EnchantInfo(EnchantInfo const&);
        EnchantInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6c924a;
    // NOLINTEND

public:
    // prevent constructor by default
    SpecificEnchantFunction& operator=(SpecificEnchantFunction const&);
    SpecificEnchantFunction(SpecificEnchantFunction const&);
    SpecificEnchantFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpecificEnchantFunction() /*override*/ = default;

    // vIndex: 4
    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;

    // vIndex: 2
    virtual void apply(::ItemInstance& itemInstance, ::Random& random, ::LootTableContext& context) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpecificEnchantFunction(
        ::std::vector<::std::unique_ptr<::LootItemCondition>>&       predicates,
        ::std::vector<::SpecificEnchantFunction::EnchantInfo> const& enchantments
    );

    MCNAPI void _applyInner(::ItemStackBase& item, ::Random& random, ::LootTableContext& allowNonVanilla, bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::vector<::std::unique_ptr<::LootItemCondition>>&       predicates,
        ::std::vector<::SpecificEnchantFunction::EnchantInfo> const& enchantments
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);

    MCNAPI void $apply(::ItemInstance& itemInstance, ::Random& random, ::LootTableContext& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
