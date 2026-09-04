#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
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
        ::ll::TypedStorage<8, 152, ::ItemStack>               mInput;
        ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mOutput;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::vector<::ItemStack>>> mBlockToElements;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockReducer() = default;

    virtual void registerBlock(::ItemStack const& block, ::std::vector<::ItemStack> const& elements);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::ItemStack> const* getReduction(::ItemStackBase const& block) const;

#ifdef LL_PLAT_C
    MCAPI ::ItemDescriptor tryGetItemDescriptorFromKey(int blockKey) const;
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $registerBlock(::ItemStack const& block, ::std::vector<::ItemStack> const& elements);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
