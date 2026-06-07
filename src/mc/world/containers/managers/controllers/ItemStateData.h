#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

struct ItemStateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnke5af18;
    ::ll::UntypedStorage<8, 32>  mUnkc44bbe;
    ::ll::UntypedStorage<4, 4>   mUnk143794;
    ::ll::UntypedStorage<1, 1>   mUnk115f53;
    ::ll::UntypedStorage<1, 1>   mUnkb0fcb5;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStateData& operator=(ItemStateData const&);
    ItemStateData(ItemStateData const&);
    ItemStateData();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ItemStateData(::ItemStack const& item, ::std::string const& collectionName, int collectionIndex);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ItemStack const& item, ::std::string const& collectionName, int collectionIndex);
#endif
    // NOLINTEND
};
