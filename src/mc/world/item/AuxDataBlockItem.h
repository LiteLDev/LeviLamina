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

class AuxDataBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    AuxDataBlockItem& operator=(AuxDataBlockItem const&);
    AuxDataBlockItem(AuxDataBlockItem const&);
    AuxDataBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AuxDataBlockItem@@UEAA@XZ
    virtual ~AuxDataBlockItem() = default;

    // vIndex: 32, symbol: ?getLevelDataForAuxValue@AuxDataBlockItem@@UEBAHH@Z
    virtual int getLevelDataForAuxValue(int auxValue) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@AuxDataBlockItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // symbol: ??0AuxDataBlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HPEBVBlock@@@Z
    MCAPI AuxDataBlockItem(std::string const& name, int id, class Block const* parentBlock);

    // NOLINTEND
};
