#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Item;
class ItemStack;
class Level;
class Player;
struct ItemOnUseResult;
// clang-format on

class IFoodItemComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFoodItemComponent() = default;

    virtual int getNutrition() const = 0;

    virtual float getSaturationModifier() const = 0;

    virtual bool canAlwaysEat() const = 0;

    virtual ::Item const* eatItem(::ItemStack& instance, ::Actor& actor, ::Level& level) = 0;

    virtual void use(::ItemOnUseResult& result, ::ItemStack& instance, ::Player& player) = 0;

    virtual ::Item const* useTimeDepleted(
        ::ItemUseMethod&   itemUseMethod,
        ::ItemStack const& initialInstance,
        ::ItemStack&       instance,
        ::Player&          player,
        ::Level&           level
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
