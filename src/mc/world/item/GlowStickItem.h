#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/ChemistryStickItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class GlowStickItem : public ::ChemistryStickItem {
public:
    // prevent constructor by default
    GlowStickItem& operator=(GlowStickItem const&);
    GlowStickItem(GlowStickItem const&);
    GlowStickItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GlowStickItem() = default;

    // vIndex: 56
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 83
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    // vIndex: 108
    virtual struct Brightness getLightEmission(int auxValue) const;

    MCAPI GlowStickItem(std::string const& name, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& name, int id);

    MCAPI std::string
          buildDescriptionId$(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    MCAPI struct Brightness getLightEmission$(int auxValue) const;

    MCAPI bool isValidAuxValue$(int auxValue) const;

    MCAPI static ::ll::CArrayT<::ItemColor const>& COLORS();

    MCAPI static int const& MAX_ACTIVE_TICKS();

    // NOLINTEND
};
