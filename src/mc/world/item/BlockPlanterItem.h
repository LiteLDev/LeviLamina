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

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol: __unk_vfn_57
    virtual void __unk_vfn_57();

    // vIndex: 58, symbol: __unk_vfn_58
    virtual void __unk_vfn_58();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 65, symbol: __unk_vfn_65
    virtual void __unk_vfn_65();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 81, symbol:
    // ?buildDescriptionId@BlockPlanterItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // vIndex: 102, symbol:
    // ?setIconInfo@BlockPlanterItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const& name, int);

    // vIndex: 103, symbol: ?getIconInfo@BlockPlanterItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo
    getIconInfo(class ItemStackBase const& itemStack, int, bool inInventoryPane) const;

    // symbol:
    // ??0BlockPlanterItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVBlock@@_N@Z
    MCAPI BlockPlanterItem(std::string const& name, int, class Block const& block, bool useBlockDescription);

    // NOLINTEND
};
