#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class EndCrystalItem : public ::Item {
public:
    // prevent constructor by default
    EndCrystalItem& operator=(EndCrystalItem const&);
    EndCrystalItem(EndCrystalItem const&);
    EndCrystalItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EndCrystalItem() = default;

    // vIndex: 38
    virtual bool isGlint(class ItemStackBase const& stack) const;

    // vIndex: 44
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor&, class BlockPos pos, uchar face, class Vec3 const& clickPos) const;

    MCAPI EndCrystalItem(std::string const& nameId, int id);

    // NOLINTEND
};
