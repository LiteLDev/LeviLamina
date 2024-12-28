#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
// clang-format on

class BlockReducer {
public:
    // BlockReducer inner types declare
    // clang-format off
    struct Reduction;
    // clang-format on

    // BlockReducer inner types define
    struct Reduction {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 152> mUnkd6e80f;
        ::ll::UntypedStorage<8, 24>  mUnk1e0fd9;
        // NOLINTEND

    public:
        // prevent constructor by default
        Reduction& operator=(Reduction const&);
        Reduction(Reduction const&);
        Reduction();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk301b24;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockReducer& operator=(BlockReducer const&);
    BlockReducer(BlockReducer const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockReducer();

    // vIndex: 1
    virtual void registerBlock(::ItemStack const& block, ::std::vector<::ItemStack> const& elements);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockReducer();

    MCAPI ::std::vector<::ItemStack> const* getReduction(::ItemStackBase const& block) const;

    MCAPI ::std::unordered_map<int, ::std::vector<::ItemStack>> const& getReductionMap() const;

    MCAPI ::ItemDescriptor tryGetItemDescriptorFromKey(int blockKey) const;
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
    MCAPI void $registerBlock(::ItemStack const& block, ::std::vector<::ItemStack> const& elements);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
