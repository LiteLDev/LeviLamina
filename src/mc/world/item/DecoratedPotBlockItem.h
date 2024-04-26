#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class DecoratedPotBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    DecoratedPotBlockItem& operator=(DecoratedPotBlockItem const&);
    DecoratedPotBlockItem(DecoratedPotBlockItem const&);
    DecoratedPotBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DecoratedPotBlockItem@@UEAA@XZ
    virtual ~DecoratedPotBlockItem() = default;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@DecoratedPotBlockItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 91, symbol: ?fixupCommon@DecoratedPotBlockItem@@UEBAXAEAVItemStackBase@@@Z
    virtual void fixupCommon(class ItemStackBase&) const;

    // symbol: ??0DecoratedPotBlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI DecoratedPotBlockItem(std::string const&, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?buildIngredientItemList@DecoratedPotBlockItem@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVCompoundTag@@@Z
    MCAPI std::string buildIngredientItemList(class CompoundTag const*) const;

    // NOLINTEND
};
