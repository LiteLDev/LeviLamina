#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ItemPlaceType.h"
#include "mc/world/containers/controllers/ItemTakeType.h"

struct ItemTransferAmount {
public:
    // ItemTransferAmount inner types define
    enum class ItemTransferAmountTag : int {
        RequestAmount = 0,
        TakeType      = 1,
        PlaceType     = 2,
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

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit ItemTransferAmount(::ItemPlaceType placeType);

    MCNAPI explicit ItemTransferAmount(int requestAmount);

    MCNAPI explicit ItemTransferAmount(::ItemTakeType takeType);

    MCNAPI ::ItemTransferAmount fromMaxStackSize() const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ItemPlaceType placeType);

    MCNAPI void* $ctor(int requestAmount);

    MCNAPI void* $ctor(::ItemTakeType takeType);
#endif
    // NOLINTEND
};
