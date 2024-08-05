#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        // prevent constructor by default
        Ingredient& operator=(Ingredient const&);
        Ingredient(Ingredient const&);
        Ingredient();

    public:
        // NOLINTBEGIN
        MCAPI explicit Ingredient(class ItemInstance const& item);

        MCAPI bool equals(class ItemDescriptor const& input) const;

        MCAPI int getData() const;

        MCAPI int getItemId() const;

        // NOLINTEND
    };

    template <typename T0>
    class Mix {
    public:
        // prevent constructor by default
        Mix& operator=(Mix const&);
        Mix(Mix const&);
        Mix();
    };

public:
    // prevent constructor by default
    PotionBrewing& operator=(PotionBrewing const&);
    PotionBrewing(PotionBrewing const&);
    PotionBrewing();

public:
    // NOLINTBEGIN
    MCAPI static void
    addContainerRecipe(class Item const& from, class PotionBrewing::Ingredient const& ingredient, class Item const& to);

    MCAPI static void addPotionMix(
        class ItemDescriptor const&            from,
        class PotionBrewing::Ingredient const& ingredient,
        class ItemDescriptor const&            to
    );

    MCAPI static int getFuelValue(class ItemDescriptor const& item);

    MCAPI static bool hasMix(class ItemInstance const& source, class ItemDescriptor const& ingredient);

    MCAPI static void initPotionBrewing();

    MCAPI static bool isFuel(class ItemDescriptor const& item);

    MCAPI static bool isIngredient(class ItemDescriptor const& item);

    MCAPI static bool isPotionRecipeInput(class ItemDescriptor const& item);

    MCAPI static class ItemInstance mix(class ItemDescriptor const& ingredient, class ItemInstance const& source);

    MCAPI static void shutdown();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void addChemistryMix(
        class ItemInstance const&              from,
        class PotionBrewing::Ingredient const& ingredient,
        class ItemInstance const&              to
    );

    MCAPI static class ItemInstance
    getChemistryMix(class ItemDescriptor const& from, class ItemDescriptor const& ingredient);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::vector<class PotionBrewing::Mix<class ItemInstance>> mChemistryMixes;

    MCAPI static std::vector<class PotionBrewing::Mix<class Item const&>> mContainerMixes;

    MCAPI static bool mIsInitialized;

    MCAPI static std::vector<class PotionBrewing::Mix<class ItemDescriptor>> mPotionMixes;

    MCAPI static std::vector<class PotionBrewing::Ingredient> mValidContainers;

    MCAPI static std::unordered_set<class PotionBrewing::Ingredient> mValidIngredients;

    MCAPI static std::unordered_set<class PotionBrewing::Ingredient> mValidRecipeInputs;

    // NOLINTEND
};
