#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/DyePowderItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class LegacyDyeItem : public ::DyePowderItem {
public:
    // prevent constructor by default
    LegacyDyeItem& operator=(LegacyDyeItem const&);
    LegacyDyeItem(LegacyDyeItem const&);
    LegacyDyeItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyDyeItem() = default;

    // vIndex: 15
    virtual bool isDye() const;

    MCAPI LegacyDyeItem(std::string const& name, int id, ::ItemColor color, bool allowLegacyUseAsDye);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& name, int id, ::ItemColor color, bool allowLegacyUseAsDye);

    MCAPI bool isDye$() const;

    // NOLINTEND
};
