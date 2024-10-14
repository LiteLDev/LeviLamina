#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/AbstractCompassItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
