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

class PumpkinBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    PumpkinBlockItem& operator=(PumpkinBlockItem const&);
    PumpkinBlockItem(PumpkinBlockItem const&);
    PumpkinBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PumpkinBlockItem@@UEAA@XZ
    virtual ~PumpkinBlockItem() = default;

    // vIndex: 50, symbol: ?getEnchantSlot@PumpkinBlockItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 97, symbol: ?getEquipLocation@PumpkinBlockItem@@UEBA?AW4ActorLocation@@XZ
    virtual ::ActorLocation getEquipLocation() const;

    // vIndex: 98, symbol: ?getEquipSound@PumpkinBlockItem@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getEquipSound() const;

    // symbol: ??0PumpkinBlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI PumpkinBlockItem(std::string const& name, int id);

    // NOLINTEND
};
