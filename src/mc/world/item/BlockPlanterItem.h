#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/components/ComponentItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class BlockPlanterItem : public ::ComponentItem {
public:
    // prevent constructor by default
    BlockPlanterItem& operator=(BlockPlanterItem const&);
    BlockPlanterItem(BlockPlanterItem const&);
    BlockPlanterItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockPlanterItem@@UEAA@XZ
    virtual ~BlockPlanterItem() = default;

    // vIndex: 3, symbol:
    // ?setDescriptionId@BlockPlanterItem@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class BlockPlanterItem& setDescriptionId(std::string const&);

    // vIndex: 82, symbol:
    // ?buildDescriptionId@BlockPlanterItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 103, symbol:
    // ?setIconInfo@BlockPlanterItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104, symbol: ?getIconInfo@BlockPlanterItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool inInventoryPane) const;

    // symbol:
    // ??0BlockPlanterItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEAUReflectionCtx@cereal@@AEBVBlock@@_N@Z
    MCAPI BlockPlanterItem(std::string const&, int, struct cereal::ReflectionCtx&, class Block const&, bool);

    // NOLINTEND
};
