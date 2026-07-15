#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/CompoundContainerType.h"
#include "mc/world/level/block/actor/LabTableReactionType.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
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
