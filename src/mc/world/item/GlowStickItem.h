#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ChemistryStickItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

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
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 108
    virtual struct Brightness getLightEmission(int auxValue) const;

    MCAPI GlowStickItem(std::string const& name, int id);

    MCAPI static ::ItemColor const COLORS[];

    MCAPI static int const MAX_ACTIVE_TICKS;

    // NOLINTEND
};
