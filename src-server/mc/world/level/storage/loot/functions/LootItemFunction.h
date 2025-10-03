#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ItemInstance;
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
struct Trade;
namespace Json { class Value; }
// clang-format on

class LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd6cdfe;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemFunction& operator=(LootItemFunction const&);
    LootItemFunction(LootItemFunction const&);
    LootItemFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LootItemFunction();

    // vIndex: 4
    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&) = 0;

    // vIndex: 3
    virtual int apply(::ItemStack& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);

    // vIndex: 2
    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&) = 0;

    // vIndex: 1
    virtual int apply(::ItemInstance& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, bool usingUpcomingCreatorFeaturesExperiment);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<
        ::HashedString,
        ::std::function<::std::unique_ptr<
            ::LootItemFunction>(::Json::Value&, ::std::vector<::std::unique_ptr<::LootItemCondition>>&)>> const&
    mLootingFunctions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $apply(::ItemStack& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);

    MCNAPI int $apply(::ItemInstance& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
