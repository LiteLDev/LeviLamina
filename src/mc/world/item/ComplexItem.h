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

class ComplexItem : public ::Item {
public:
    // prevent constructor by default
    ComplexItem& operator=(ComplexItem const&);
    ComplexItem(ComplexItem const&);
    ComplexItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ComplexItem@@UEAA@XZ
    virtual ~ComplexItem();

    // vIndex: 55, symbol: ?isComplex@ComplexItem@@UEBA_NXZ
    virtual bool isComplex() const;

    // vIndex: 119, symbol:
    // ?getUpdatePacket@ComplexItem@@UEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEBVItemStack@@AEAVLevel@@AEAVActor@@@Z
    virtual std::unique_ptr<class Packet>
    getUpdatePacket(class ItemStack const& item, class Level& level, class Actor& player) const;

    // symbol: ??0ComplexItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ComplexItem(std::string const& nameId, int id);

    // NOLINTEND
};
