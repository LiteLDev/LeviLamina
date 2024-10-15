#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/AuxDataBlockItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

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
    virtual std::string buildEffectDescriptionName(class ItemStackBase const& stack) const;

    MCAPI ShulkerBoxBlockItem(std::string const& name, int id, class Block const* parentBlock);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::string _buildContainedItemList(class CompoundTag const* containerList) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& name, int id, class Block const* parentBlock);

    MCAPI void appendFormattedHovertext$(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    MCAPI std::string buildEffectDescriptionName$(class ItemStackBase const& stack) const;

    MCAPI int getLevelDataForAuxValue$(int auxValue) const;

    // NOLINTEND
};
