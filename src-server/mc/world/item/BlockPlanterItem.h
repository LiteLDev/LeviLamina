#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItem.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
class Item;
class ItemDescriptor;
class ItemStackBase;
struct ResolvedItemIconInfo;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockPlanterItem : public ::ComponentItem {
public:
    // prevent constructor by default
    BlockPlanterItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 109
    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    // vIndex: 110
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    // vIndex: 89
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    // vIndex: 3
    virtual ::BlockPlanterItem& setDescriptionId(::std::string const& descriptionId) /*override*/;

    // vIndex: 0
    virtual ~BlockPlanterItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockPlanterItem(
        ::std::string const&     name,
        int                      id,
        ::cereal::ReflectionCtx& ctx,
        ::Block const&           block,
        bool                     useBlockDescription
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&     name,
        int                      id,
        ::cereal::ReflectionCtx& ctx,
        ::Block const&           block,
        bool                     useBlockDescription
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Item& $setIconInfo(::std::string const& name, int index);

    MCFOLD ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCFOLD ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCFOLD ::BlockPlanterItem& $setDescriptionId(::std::string const& descriptionId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
