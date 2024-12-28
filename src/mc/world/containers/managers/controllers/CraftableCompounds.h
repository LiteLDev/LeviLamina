#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/CompoundContainerType.h"
#include "mc/world/item/CompoundType.h"
#include "mc/world/level/block/actor/LabTableReactionType.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
class ItemStack;
struct ChemistryIngredient;
// clang-format on

class CraftableCompounds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk5ed814;
    ::ll::UntypedStorage<8, 64> mUnkf8c572;
    ::ll::UntypedStorage<8, 64> mUnk66c4f9;
    ::ll::UntypedStorage<8, 64> mUnka6490c;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftableCompounds& operator=(CraftableCompounds const&);
    CraftableCompounds(CraftableCompounds const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftableCompounds();

    // vIndex: 1
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

    MCAPI ::std::vector<::ItemStack> const* getComponents(::ItemDescriptor const& compound) const;

    MCAPI ::ItemStack const& getCompound(::std::vector<::ItemStack> const& components);

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
