#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/CompoundContainerType.h"
#include "mc/world/item/CompoundType.h"
#include "mc/world/level/block/actor/LabTableReactionType.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
struct ChemistryIngredient;
// clang-format on

class CraftableCompounds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ItemStack>>            mComponentsToCompound;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::vector<::ItemStack>>>       mCompoundToComponents;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::LabTableReactionType>> mComponentsToReaction;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::CompoundContainerType>>
        mComponentsToContainerOverride;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftableCompounds();

    virtual void _registerCompound(
        ::std::vector<::ItemStack> const& input,
        ::ItemStack const&                result,
        ::LabTableReactionType            reaction,
        ::CompoundContainerType           containerOverride
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CraftableCompounds();

    MCAPI ::std::string _getCompoundId(::std::vector<::ItemStack> const& input);

    MCAPI void _registerCompound(
        ::std::vector<::ChemistryIngredient> const& input,
        ::ItemStack const&                          result,
        ::LabTableReactionType                      reaction,
        ::CompoundContainerType                     containerOverride
    );

    MCAPI void _registerCompound(
        ::std::vector<::ChemistryIngredient> const& input,
        ::CompoundType                              result,
        ::LabTableReactionType                      reaction,
        ::CompoundContainerType                     containerOverride,
        int                                         stackCount
    );

    MCAPI ::ItemStack const& getCompound(::std::vector<::ItemStack> const& components);

#ifdef LL_PLAT_C
    MCAPI ::CompoundContainerType getContainerType(::std::vector<::ItemStack> const& components);
#endif

    MCAPI ::LabTableReactionType getReaction(::std::vector<::ItemStack> const& components);

    MCAPI void registerCompounds();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_registerCompound(
        ::std::vector<::ItemStack> const& input,
        ::ItemStack const&                result,
        ::LabTableReactionType            reaction,
        ::CompoundContainerType           containerOverride
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
