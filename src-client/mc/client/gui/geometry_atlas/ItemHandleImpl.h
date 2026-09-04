#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IItemHandle.h"
#include "mc/client/gui/geometry_atlas/ItemHandleData.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class InventoryItemRenderer;
class PropertyBag;
// clang-format on

namespace GeometryAtlas {

class ItemHandleImpl : public ::GeometryAtlas::IItemHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::GeometryAtlas::ItemHandleData> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemHandleImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isAnimated() const /*override*/;

    virtual uint64 hash() const /*override*/;

    virtual void
    visitItem(::brstd::function_ref<void(::InventoryItemRenderer&) const, void(::InventoryItemRenderer&)> visitor) const
        /*override*/;

    virtual ::PropertyBag const& getBag() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemHandleImpl(::GeometryAtlas::ItemHandleData&& data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GeometryAtlas::ItemHandleData&& data);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isAnimated() const;

    MCFOLD uint64 $hash() const;

    MCAPI void $visitItem(
        ::brstd::function_ref<void(::InventoryItemRenderer&) const, void(::InventoryItemRenderer&)> visitor
    ) const;

    MCFOLD ::PropertyBag const& $getBag() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace GeometryAtlas
