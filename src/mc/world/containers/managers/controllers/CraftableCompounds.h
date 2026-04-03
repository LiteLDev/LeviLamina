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
    ::ll::UntypedStorage<8, 64> mUnke6f603;
    ::ll::UntypedStorage<8, 64> mUnk7112c4;
    ::ll::UntypedStorage<8, 64> mUnk34bcd8;
    ::ll::UntypedStorage<8, 64> mUnk938d66;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftableCompounds& operator=(CraftableCompounds const&);
    CraftableCompounds(CraftableCompounds const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftableCompounds();

    virtual void _registerCompound(
        ::std::vector<::ItemStack> const&,
        ::ItemStack const&,
        ::LabTableReactionType,
        ::CompoundContainerType
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CraftableCompounds();

    MCNAPI ::std::string _getCompoundId(::std::vector<::ItemStack> const& input);

    MCNAPI void _registerCompound(
        ::std::vector<::ChemistryIngredient> const& input,
        ::ItemStack const&                          result,
        ::LabTableReactionType                      reaction,
        ::CompoundContainerType                     containerOverride
    );

    MCNAPI void _registerCompound(
        ::std::vector<::ChemistryIngredient> const& input,
        ::CompoundType                              result,
        ::LabTableReactionType                      reaction,
        ::CompoundContainerType                     containerOverride,
        int                                         stackCount
    );

    MCNAPI ::std::vector<::ItemStack> const* getComponents(::ItemDescriptor const& compound) const;

    MCNAPI ::ItemStack const& getCompound(::std::vector<::ItemStack> const& components);

    MCNAPI_C ::CompoundContainerType getContainerType(::std::vector<::ItemStack> const& components);

    MCNAPI ::LabTableReactionType getReaction(::std::vector<::ItemStack> const& components);

    MCNAPI void registerCompounds();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI_C void* $ctor(::CraftableCompounds const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
