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
    // vIndex: 0
    virtual ~RecoveryCompassItem() = default;

    MCAPI RecoveryCompassItem(std::string const& name, int id);

    // NOLINTEND
};
