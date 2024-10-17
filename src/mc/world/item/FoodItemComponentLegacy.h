#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/components/IFoodItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FoodItemComponentLegacy : public ::IFoodItemComponent {
public:
    // FoodItemComponentLegacy inner types declare
    // clang-format off
    struct Effect;
    // clang-format on

    // FoodItemComponentLegacy inner types define
    struct Effect {
    public:
        // prevent constructor by default
        Effect& operator=(Effect const&);
        Effect(Effect const&);
        Effect();

    public:
        // NOLINTBEGIN
        MCAPI ~Effect();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FoodItemComponentLegacy& operator=(FoodItemComponentLegacy const&);
    FoodItemComponentLegacy(FoodItemComponentLegacy const&);
    FoodItemComponentLegacy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FoodItemComponentLegacy() = default;

    // vIndex: 1
    virtual int getNutrition() const;

    // vIndex: 2
    virtual float getSaturationModifier() const;

    // vIndex: 3
    virtual bool canAlwaysEat() const;

    // vIndex: 4
    virtual class Item const* eatItem(class ItemStack& instance, class Actor& actor, class Level& level);

    // vIndex: 5
    virtual bool use(class ItemStack& instance, class Player& player);

    // vIndex: 6
    virtual class Item const* useTimeDepleted(
        ::ItemUseMethod& itemUseMethod,
        class ItemStack const&,
        class ItemStack& instance,
        class Player&    player,
        class Level&     level
    );

    MCAPI std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    MCAPI bool init(class Json::Value const& data, class SemVersion const&);

    MCAPI static class Json::Value initializeFromNetwork(class CompoundTag const& tag);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _applyEatEffects(class ItemStack const&, class Actor& actor, class Level& level);

    MCAPI void _loadEffects(class Json::Value const& effectsData);

    MCAPI void _loadRemoveEffects(class Json::Value const& removeEffectsData);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool canAlwaysEat$() const;

    MCAPI class Item const* eatItem$(class ItemStack& instance, class Actor& actor, class Level& level);

    MCAPI int getNutrition$() const;

    MCAPI float getSaturationModifier$() const;

    MCAPI bool use$(class ItemStack& instance, class Player& player);

    MCAPI class Item const* useTimeDepleted$(
        ::ItemUseMethod& itemUseMethod,
        class ItemStack const&,
        class ItemStack& instance,
        class Player&    player,
        class Level&     level
    );

    // NOLINTEND
};
