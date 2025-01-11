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
// clang-format on

class IFoodItemComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFoodItemComponent() = default;

    // vIndex: 1
    virtual int getNutrition() const = 0;

    // vIndex: 2
    virtual float getSaturationModifier() const = 0;

    // vIndex: 3
    virtual bool canAlwaysEat() const = 0;

    // vIndex: 4
    virtual ::Item const* eatItem(::ItemStack&, ::Actor&, ::Level&) = 0;

    // vIndex: 5
    virtual void use(bool& result, ::ItemStack& item, ::Player& player) = 0;

    // vIndex: 6
    virtual ::Item const* useTimeDepleted(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&) = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> CAN_ALWAYS_EAT();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> NUTRITION();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SATURATION_MODIFIER();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
