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
    MCNAPI static void
    addContainerRecipe(::Item const& from, ::PotionBrewing::Ingredient const& ingredient, ::Item const& to);

    MCNAPI static void addPotionMix(
        ::ItemDescriptor const&            from,
        ::PotionBrewing::Ingredient const& ingredient,
        ::ItemDescriptor const&            to
    );

    MCNAPI static ::ItemInstance getChemistryMix(::ItemDescriptor const& from, ::ItemDescriptor const& ingredient);

    MCNAPI static int getFuelValue(::ItemDescriptor const& item);

    MCNAPI static bool hasMix(::ItemInstance const& source, ::ItemDescriptor const& ingredient);

    MCNAPI static void initPotionBrewing();

    MCNAPI static bool isContainerIngredient(::ItemDescriptor const& item);

    MCNAPI static bool isFuel(::ItemDescriptor const& item);

    MCNAPI static bool isPotionContainer(::ItemDescriptor const& item);

    MCNAPI static bool isPotionIngredient(::ItemDescriptor const& item);

    MCNAPI static bool isPotionRecipeInput(::ItemDescriptor const& item);

    MCNAPI static ::ItemInstance mix(::ItemDescriptor const& ingredient, ::ItemInstance const& source);

    MCNAPI static void shutdown();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::PotionBrewing::Mix<::ItemInstance>>& mChemistryMixes();

    MCNAPI static ::std::vector<::PotionBrewing::Mix<::Item const&>>& mContainerMixes();

    MCNAPI static bool& mIsInitialized();

    MCNAPI static ::std::vector<::PotionBrewing::Mix<::ItemDescriptor>>& mPotionMixes();

    MCNAPI static ::std::vector<::PotionBrewing::Ingredient>& mValidContainers();

    MCNAPI static ::std::unordered_set<::PotionBrewing::Ingredient>& mValidIngredients();

    MCNAPI static ::std::unordered_set<::PotionBrewing::Ingredient>& mValidRecipeInputs();
    // NOLINTEND
};
