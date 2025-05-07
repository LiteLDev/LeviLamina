#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class UnlockedRecipesServerComponent {
public:
    // UnlockedRecipesServerComponent inner types declare
    // clang-format off
    struct UnlockingInstruction;
    // clang-format on

    // UnlockedRecipesServerComponent inner types define
    struct UnlockingInstruction {
    public:
        // UnlockingInstruction inner types define
        enum class Instruction : int {
            UnlockRecipe     = 0,
            UnlockAllRecipes = 1,
            RemoveRecipe     = 2,
            RemoveAllRecipes = 3,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkf225ff;
        ::ll::UntypedStorage<8, 32> mUnk231057;
        // NOLINTEND

    public:
        // prevent constructor by default
        UnlockingInstruction& operator=(UnlockingInstruction const&);
        UnlockingInstruction(UnlockingInstruction const&);
        UnlockingInstruction();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~UnlockingInstruction();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                 mInventoryHasChanged;
    ::ll::TypedStorage<1, 1, bool>                                 mInitialDataSent;
    ::ll::TypedStorage<4, 4, uint>                                 mUsedContexts;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mUnlockedRecipes;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>>           mChangedInventorySlots;
    ::ll::TypedStorage<8, 24, ::std::vector<::UnlockedRecipesServerComponent::UnlockingInstruction>>
        mUnlockingInstructions;
    // NOLINTEND

public:
    // prevent constructor by default
    UnlockedRecipesServerComponent& operator=(UnlockedRecipesServerComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UnlockedRecipesServerComponent(::UnlockedRecipesServerComponent const&);

    MCNAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void addUnlockingInstruction(::UnlockedRecipesServerComponent::UnlockingInstruction instruction);

    MCNAPI ::UnlockedRecipesServerComponent& operator=(::UnlockedRecipesServerComponent&&);

    MCNAPI void readAdditionalSaveData(::Actor& tag, ::CompoundTag const&, ::DataLoadHelper&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& COMPONENT_TAG();

    MCNAPI static ::std::string const& UNLOCKED_RECIPES_TAG();

    MCNAPI static ::std::string const& USED_CONTEXTS_TAG();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UnlockedRecipesServerComponent const&);
    // NOLINTEND
};
