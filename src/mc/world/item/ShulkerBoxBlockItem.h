#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/AuxDataBlockItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ShulkerBoxBlockItem : public ::AuxDataBlockItem {
public:
    // prevent constructor by default
    ShulkerBoxBlockItem& operator=(ShulkerBoxBlockItem const&);
    ShulkerBoxBlockItem(ShulkerBoxBlockItem const&);
    ShulkerBoxBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShulkerBoxBlockItem() = default;

    // vIndex: 32
    virtual int getLevelDataForAuxValue(int auxValue) const;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 84
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;

    MCAPI ShulkerBoxBlockItem(std::string const& name, int id, class Block const* parentBlock);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::string _buildContainedItemList(class CompoundTag const*) const;

    // NOLINTEND
};
