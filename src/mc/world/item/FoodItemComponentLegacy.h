#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/components/IFoodItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class Item;
class ItemStack;
class Level;
class Player;
namespace Json { class Value; }
// clang-format on

class FoodItemComponentLegacy : public ::IFoodItemComponent {
public:
    // FoodItemComponentLegacy inner types declare
    // clang-format off
    struct Effect;
    // clang-format on

    // FoodItemComponentLegacy inner types define
    enum class OnUseAction : int {
        None                 = -1,
        ChorusTeleport       = 0,
        SuspiciousStewEffect = 1,
    };

    struct Effect {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkd4071e;
        ::ll::UntypedStorage<8, 32> mUnk986c0d;
        ::ll::UntypedStorage<8, 32> mUnk12392a;
        ::ll::UntypedStorage<4, 4>  mUnk859cf2;
        ::ll::UntypedStorage<4, 4>  mUnk7b370d;
        ::ll::UntypedStorage<4, 4>  mUnk7abd7a;
        // NOLINTEND

    public:
        // prevent constructor by default
        Effect& operator=(Effect const&);
        Effect(Effect const&);
        Effect();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Effect();
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
    ::ll::UntypedStorage<8, 8>  mUnkf8f8b2;
    ::ll::UntypedStorage<4, 4>  mUnkb8975a;
    ::ll::UntypedStorage<4, 4>  mUnk7624e5;
    ::ll::UntypedStorage<8, 32> mUnkd89237;
    ::ll::UntypedStorage<4, 4>  mUnk53b0c6;
    ::ll::UntypedStorage<4, 12> mUnk98d6f7;
    ::ll::UntypedStorage<8, 48> mUnke0d0f2;
    ::ll::UntypedStorage<4, 4>  mUnk3e3015;
    ::ll::UntypedStorage<1, 1>  mUnk623916;
    ::ll::UntypedStorage<8, 24> mUnk3def49;
    ::ll::UntypedStorage<8, 24> mUnkb2b538;
    // NOLINTEND

public:
    // prevent constructor by default
    FoodItemComponentLegacy& operator=(FoodItemComponentLegacy const&);
    FoodItemComponentLegacy(FoodItemComponentLegacy const&);
    FoodItemComponentLegacy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual int getNutrition() const /*override*/;

    // vIndex: 2
    virtual float getSaturationModifier() const /*override*/;

    // vIndex: 3
    virtual bool canAlwaysEat() const /*override*/;

    // vIndex: 4
    virtual ::Item const* eatItem(::ItemStack& instance, ::Actor& actor, ::Level& level) /*override*/;

    // vIndex: 5
    virtual void use(bool& result, ::ItemStack& item, ::Player& player) /*override*/;

    // vIndex: 6
    virtual ::Item const* useTimeDepleted(
        ::ItemUseMethod& itemUseMethod,
        ::ItemStack const&,
        ::ItemStack& instance,
        ::Player&    player,
        ::Level&     level
    ) /*override*/;

    // vIndex: 0
    virtual ~FoodItemComponentLegacy() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _applyEatEffects(::ItemStack const& actor, ::Actor& level, ::Level&);

    MCAPI void _loadEffects(::Json::Value const& effectsData);

    MCAPI void _loadRemoveEffects(::Json::Value const& removeEffectsData);

    MCAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag() const;

    MCAPI bool init(::Json::Value const& data, ::MolangVersion);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Json::Value initializeFromNetwork(::CompoundTag const& tag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getNutrition() const;

    MCFOLD float $getSaturationModifier() const;

    MCAPI bool $canAlwaysEat() const;

    MCAPI ::Item const* $eatItem(::ItemStack& instance, ::Actor& actor, ::Level& level);

    MCAPI void $use(bool& result, ::ItemStack& item, ::Player& player);

    MCAPI ::Item const* $useTimeDepleted(
        ::ItemUseMethod& itemUseMethod,
        ::ItemStack const&,
        ::ItemStack& instance,
        ::Player&    player,
        ::Level&     level
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
