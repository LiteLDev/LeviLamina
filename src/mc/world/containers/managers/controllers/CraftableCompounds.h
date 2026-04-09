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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    CraftableCompounds& operator=(CraftableCompounds const&);
    CraftableCompounds(CraftableCompounds const&);

#else // LL_PLAT_C
public:
    // prevent constructor by default
    CraftableCompounds& operator=(CraftableCompounds const&);

#endif
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
    MCNAPI CraftableCompounds();

#ifdef LL_PLAT_C
    MCNAPI CraftableCompounds(::CraftableCompounds const&);
#endif

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

#ifdef LL_PLAT_C
    MCNAPI ::CompoundContainerType getContainerType(::std::vector<::ItemStack> const& components);
#endif

    MCNAPI ::LabTableReactionType getReaction(::std::vector<::ItemStack> const& components);

    MCNAPI void registerCompounds();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::CraftableCompounds const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_registerCompound(
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
