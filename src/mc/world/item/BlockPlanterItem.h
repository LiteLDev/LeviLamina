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
    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    virtual ::BlockPlanterItem& setDescriptionId(::std::string const& descriptionId) /*override*/;
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

    // NOLINTEND
};
