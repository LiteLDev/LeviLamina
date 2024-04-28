#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/BoatItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ChestBoatItem : public ::BoatItem {
public:
    // prevent constructor by default
    ChestBoatItem& operator=(ChestBoatItem const&);
    ChestBoatItem(ChestBoatItem const&);
    ChestBoatItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ChestBoatItem@@UEAA@XZ
    virtual ~ChestBoatItem() = default;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@ChestBoatItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 119, symbol: ?_getActorType@ChestBoatItem@@EEBA?AW4ActorType@@XZ
    virtual ::ActorType _getActorType() const;

    // symbol: ??0ChestBoatItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z
    MCAPI ChestBoatItem(std::string const& name, int id, int woodType);

    // NOLINTEND
};
