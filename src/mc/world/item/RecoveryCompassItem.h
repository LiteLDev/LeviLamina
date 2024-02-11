#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/AbstractCompassItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class RecoveryCompassItem : public ::AbstractCompassItem {
public:
    // prevent constructor by default
    RecoveryCompassItem& operator=(RecoveryCompassItem const&);
    RecoveryCompassItem(RecoveryCompassItem const&);
    RecoveryCompassItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RecoveryCompassItem@@UEAA@XZ
    virtual ~RecoveryCompassItem() = default;

    // symbol: ??0RecoveryCompassItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI RecoveryCompassItem(std::string const& name, int id);

    // NOLINTEND
};
