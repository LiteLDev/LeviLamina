#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemEnchantOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnka469d5;
    ::ll::UntypedStorage<8, 80> mUnk896d11;
    ::ll::UntypedStorage<8, 32> mUnk3c0c94;
    ::ll::UntypedStorage<4, 4>  mUnkec81cf;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemEnchantOption& operator=(ItemEnchantOption const&);
    ItemEnchantOption(ItemEnchantOption const&);
    ItemEnchantOption();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemEnchantOption(::ItemEnchantOption&&);

    MCNAPI ~ItemEnchantOption();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemEnchantOption&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
