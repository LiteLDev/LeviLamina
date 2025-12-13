#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Item;
class ItemDescriptor;
class ItemInstance;
// clang-format on

class PotionBrewing {
public:
    // PotionBrewing inner types declare
    // clang-format off
    class Ingredient;
    template<typename T0> class Mix;
    // clang-format on

    // PotionBrewing inner types define
    class Ingredient {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mItemId;
        ::ll::TypedStorage<4, 4, int> mData;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool equals(::ItemDescriptor const& input) const;
        // NOLINTEND
    };

    template <typename T0>
    class Mix {};

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    addContainerRecipe(::Item const& from, ::PotionBrewing::Ingredient const& ingredient, ::Item const& to);

    MCAPI static void addPotionMix(
        ::ItemDescriptor const&            from,
        ::PotionBrewing::Ingredient const& ingredient,
        ::ItemDescriptor const&            to
    );

    MCAPI static ::ItemInstance getChemistryMix(::ItemDescriptor const& from, ::ItemDescriptor const& ingredient);

    MCAPI static int getFuelValue(::ItemDescriptor const& item);

    MCAPI static bool hasMix(::ItemInstance const& source, ::ItemDescriptor const& ingredient);

    MCAPI static void initPotionBrewing();

    MCAPI static bool isContainerIngredient(::ItemDescriptor const& item);

    MCAPI static bool isFuel(::ItemDescriptor const& item);

    MCAPI static bool isPotionContainer(::ItemDescriptor const& item);

    MCAPI static bool isPotionIngredient(::ItemDescriptor const& item);

    MCAPI static bool isPotionRecipeInput(::ItemDescriptor const& item);

    MCAPI static ::ItemInstance mix(::ItemDescriptor const& ingredient, ::ItemInstance const& source);

    MCAPI static void shutdown();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::PotionBrewing::Mix<::ItemInstance>>& mChemistryMixes();

    MCAPI static ::std::vector<::PotionBrewing::Mix<::Item const&>>& mContainerMixes();

    MCAPI static bool& mIsInitialized();

    MCAPI static ::std::vector<::PotionBrewing::Mix<::ItemDescriptor>>& mPotionMixes();

    MCAPI static ::std::vector<::PotionBrewing::Ingredient>& mValidContainers();

    MCAPI static ::std::unordered_set<::PotionBrewing::Ingredient>& mValidIngredients();

    MCAPI static ::std::unordered_set<::PotionBrewing::Ingredient>& mValidRecipeInputs();
    // NOLINTEND
};
