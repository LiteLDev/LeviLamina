#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class EnchantmentInstance;
class ItemInstance;
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
struct Trade;
namespace Json { class Value; }
// clang-format on

class EnchantBookForTradingFunction : public ::LootItemFunction {
public:
    // EnchantBookForTradingFunction inner types declare
    // clang-format off
    struct EnchantmentOption;
    // clang-format on

    // EnchantBookForTradingFunction inner types define
    struct EnchantmentOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mEnchantmentName;
        ::ll::TypedStorage<4, 4, int>            mMinLevel;
        ::ll::TypedStorage<4, 4, int>            mMaxLevel;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~EnchantmentOption();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                                mBaseCost;
    ::ll::TypedStorage<4, 4, int>                                                                mRandomBaseCost;
    ::ll::TypedStorage<4, 4, int>                                                                mRandomPerLevelCost;
    ::ll::TypedStorage<4, 4, int>                                                                mPerLevelCost;
    ::ll::TypedStorage<8, 24, ::std::vector<::EnchantBookForTradingFunction::EnchantmentOption>> mEnchantmentOptions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantBookForTradingFunction() /*override*/ = default;

    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext&) /*override*/;

    virtual int
    apply(::ItemStack& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context) /*override*/;

    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext&) /*override*/;

    virtual int
    apply(::ItemInstance& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::EnchantmentInstance _getRandomEnchantInstance(::Random& random) const;

    MCAPI ::std::optional<::EnchantmentInstance> _trySelectEnchantmentFromOptions(::Random& random) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::EnchantBookForTradingFunction::EnchantmentOption>
    _parseEnchantmentOption(::Json::Value const& enchantOptionData);

    MCAPI static ::std::unique_ptr<::EnchantBookForTradingFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $apply(::ItemStack& item, ::Random& random, ::LootTableContext&);

    MCFOLD int $apply(::ItemStack& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);

    MCFOLD void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext&);

    MCFOLD int $apply(::ItemInstance& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);

    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
