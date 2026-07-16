#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class InventoryItemRenderer;
class PropertyBag;
// clang-format on

namespace GeometryAtlas {

class IItemHandle {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IItemHandle() = default;

    virtual bool isAnimated() const = 0;

    virtual uint64 hash() const = 0;

    virtual ::PropertyBag const& getBag() const = 0;

    virtual void visitItem(
        ::brstd::function_ref<void(::InventoryItemRenderer&) const, void(::InventoryItemRenderer&)> visitor
    ) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace GeometryAtlas
