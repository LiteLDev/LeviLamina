#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ItemStackBase;
class LootItemCondition;
class LootTableContext;
class Random;
struct Trade;
namespace Json { class Value; }
// clang-format on

class LootItemFunction {
public:
    // LootItemFunction inner types declare
    // clang-format off
    struct ApplyArguments;
    // clang-format on

    // LootItemFunction inner types define
    enum class FunctionType : int {
        SetItemCount             = 0,
        SetItemData              = 1,
        SetItemDamage            = 2,
        LootingEnchant           = 3,
        EnchantWithLevels        = 4,
        EnchantBookForTrading    = 5,
        EnchantRandomly          = 6,
        SmeltItem                = 7,
        SetDataFromColorIndex    = 8,
        EnchantRandomEquipment   = 9,
        RandomAuxValue           = 10,
        RandomBlockState         = 11,
        RandomDye                = 12,
        ExplorationMap           = 13,
        SetBannerDetails         = 14,
        ExplosionDecay           = 15,
        SetItemName              = 16,
        SetItemLore              = 17,
        SpecificEnchant          = 18,
        FillContainer            = 19,
        SetSpawnEgg              = 20,
        SetBookContents          = 21,
        SetStewEffect            = 22,
        SetOminousBottle         = 23,
        SetArmorTrim             = 24,
        SetPotion                = 25,
        CarryOverBlockEntityData = 26,
        Count                    = 27,
    };

    struct ApplyArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ItemStackBase&>    mItem;
        ::ll::TypedStorage<8, 8, ::Random&>           mRandom;
        ::ll::TypedStorage<8, 8, ::LootTableContext&> mContext;
        ::ll::TypedStorage<8, 8, ::Trade const*>      mTrade;
        ::ll::TypedStorage<8, 24, ::SemVersion>       mVersion;
        // NOLINTEND

    public:
        // prevent constructor by default
        ApplyArguments& operator=(ApplyArguments const&);
        ApplyArguments(ApplyArguments const&);
        ApplyArguments();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LootItemCondition>>> mPredicates;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~LootItemFunction() = default;
#else // LL_PLAT_C
    virtual ~LootItemFunction();
#endif

    virtual ::LootItemFunction::FunctionType getFunctionType() const = 0;

    virtual void applyPreVersion(::ItemStackBase& item, ::Random& random, ::LootTableContext& context) = 0;

    virtual int applyPreVersion(::ItemStackBase& item, ::Random& random, ::LootTableContext& context, ::Trade const&);

    virtual void apply26U5(::ItemStackBase& item, ::Random& random, ::LootTableContext& context);

    virtual int apply26U5(::ItemStackBase& item, ::Random& random, ::LootTableContext& context, ::Trade const& trade);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int apply(::LootItemFunction::ApplyArguments arguments);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, bool usingUpcomingCreatorFeaturesExperiment);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<
        ::HashedString,
        ::std::function<::std::unique_ptr<
            ::LootItemFunction>(::Json::Value&, ::std::vector<::std::unique_ptr<::LootItemCondition>>&)>> const&
    mLootingExperimentalFunctions();

    MCAPI static ::std::unordered_map<
        ::HashedString,
        ::std::function<::std::unique_ptr<
            ::LootItemFunction>(::Json::Value&, ::std::vector<::std::unique_ptr<::LootItemCondition>>&)>> const&
    mLootingFunctions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $applyPreVersion(::ItemStackBase& item, ::Random& random, ::LootTableContext& context, ::Trade const&);

    MCAPI void $apply26U5(::ItemStackBase& item, ::Random& random, ::LootTableContext& context);

    MCAPI int $apply26U5(::ItemStackBase& item, ::Random& random, ::LootTableContext& context, ::Trade const& trade);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
