#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemTransferAmount {
public:
    // ItemTransferAmount inner types define
    enum class ItemTransferAmountTag : int {
        RequestAmount = 0,
        TakeType = 1,
        PlaceType = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc458f2;
    ::ll::UntypedStorage<4, 4> mUnkfbc2b6;
    ::ll::UntypedStorage<1, 1> mUnkf0fbfb;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemTransferAmount& operator=(ItemTransferAmount const&);
    ItemTransferAmount(ItemTransferAmount const&);
    ItemTransferAmount();

};
