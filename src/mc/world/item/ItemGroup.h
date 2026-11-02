#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemInstance.h"

class ItemGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance>     mItemTemplate;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mStackSize;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ItemGroup();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit ItemGroup(::ItemInstance const& itemInstance);

    MCNAPI ItemGroup(::ItemInstance const& itemInstance, int count);

    MCNAPI ::ItemInstance getItemInstanceCopy() const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ItemInstance const& itemInstance);

    MCNAPI void* $ctor(::ItemInstance const& itemInstance, int count);
#endif
    // NOLINTEND
};
