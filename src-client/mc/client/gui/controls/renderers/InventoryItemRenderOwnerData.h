#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PropertyBag;
// clang-format on

struct InventoryItemRenderOwnerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PropertyBag const&> mPropertyBag;
    ::ll::TypedStorage<4, 4, float>                mScreenAlignedX;
    ::ll::TypedStorage<4, 4, float>                mScreenAlignedY;
    ::ll::TypedStorage<4, 4, float>                mScale;
    ::ll::TypedStorage<4, 4, int>                  mZOrder;
    // NOLINTEND

public:
    // prevent constructor by default
    InventoryItemRenderOwnerData& operator=(InventoryItemRenderOwnerData const&);
    InventoryItemRenderOwnerData(InventoryItemRenderOwnerData const&);
    InventoryItemRenderOwnerData();
};
