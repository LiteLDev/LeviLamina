#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/item/components/ComponentItem.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Item;
class ItemDescriptor;
class ItemStackBase;
struct ResolvedItemIconInfo;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RecordItem : public ::ComponentItem {
public:
    // prevent constructor by default
    RecordItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    virtual ::RecordItem& setDescriptionId(::std::string const& descriptionId) /*override*/;

    virtual ~RecordItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RecordItem(
        ::std::string const&                   name,
        int                                    id,
        ::cereal::ReflectionCtx&               ctx,
        ::SharedTypes::Legacy::LevelSoundEvent soundEvent
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                   name,
        int                                    id,
        ::cereal::ReflectionCtx&               ctx,
        ::SharedTypes::Legacy::LevelSoundEvent soundEvent
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCFOLD ::Item& $setIconInfo(::std::string const& name, int index);

    MCFOLD ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCFOLD ::RecordItem& $setDescriptionId(::std::string const& descriptionId);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
