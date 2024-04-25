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
    // vIndex: 0, symbol: __gen_??1ShulkerBoxBlockItem@@UEAA@XZ
    virtual ~ShulkerBoxBlockItem() = default;

    // vIndex: 32, symbol: ?getLevelDataForAuxValue@ShulkerBoxBlockItem@@UEBAHH@Z
    virtual int getLevelDataForAuxValue(int auxValue) const;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@ShulkerBoxBlockItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 83, symbol:
    // ?buildEffectDescriptionName@ShulkerBoxBlockItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;

    // symbol:
    // ??0ShulkerBoxBlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HPEBVBlock@@@Z
    MCAPI ShulkerBoxBlockItem(std::string const& name, int id, class Block const* parentBlock);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_buildContainedItemList@ShulkerBoxBlockItem@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVCompoundTag@@@Z
    MCAPI std::string _buildContainedItemList(class CompoundTag const*) const;

    // NOLINTEND
};
