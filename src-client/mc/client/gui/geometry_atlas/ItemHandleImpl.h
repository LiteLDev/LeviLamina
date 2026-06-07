#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IItemHandle.h"
#include "mc/client/gui/geometry_atlas/ItemHandleData.h"

namespace GeometryAtlas {

class ItemHandleImpl : public ::GeometryAtlas::IItemHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::GeometryAtlas::ItemHandleData> mData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isAnimated() const /*override*/;

    virtual uint64 hash() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isAnimated() const;

    MCFOLD uint64 $hash() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace GeometryAtlas
