#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class EnchantmentInstance;
class ItemStackBase;
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
    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;

    virtual void applyPreVersion(::ItemStackBase& item, ::Random& random, ::LootTableContext&) /*override*/;

    virtual int
    applyPreVersion(::ItemStackBase& item, ::Random& random, ::LootTableContext&, ::Trade const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::EnchantmentInstance> _trySelectEnchantmentFromOptions(::Random& random) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static ::std::unique_ptr<::EnchantBookForTradingFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;

    MCAPI void $applyPreVersion(::ItemStackBase& item, ::Random& random, ::LootTableContext&);

    MCAPI int $applyPreVersion(::ItemStackBase& item, ::Random& random, ::LootTableContext&, ::Trade const&);


    // NOLINTEND
};
