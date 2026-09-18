#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class CreativeItemRegistry;
struct CreativeItemNetIdTag;
// clang-format on

class CreativeItemEntry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CreativeItemRegistry*> mRegistry;
    ::ll::TypedStorage<4, 4, uint>                    mGroupIndex;
    ::ll::TypedStorage<4, 4, ::CreativeItemNetId>     mCreativeNetId;
    ::ll::TypedStorage<8, 128, ::ItemInstance>        mItemInstance;
    ::ll::TypedStorage<4, 4, uint>                    mIndex;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    CreativeItemEntry();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI CreativeItemEntry(
        ::CreativeItemRegistry*    registry,
        ::CreativeItemNetId const& creativeNetId,
        ::ItemInstance const&      item,
        uint                       index
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(
        ::CreativeItemRegistry*    registry,
        ::CreativeItemNetId const& creativeNetId,
        ::ItemInstance const&      item,
        uint                       index
    );
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
