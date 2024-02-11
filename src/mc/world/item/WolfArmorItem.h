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

class WolfArmorItem : public ::Item {
public:
    // prevent constructor by default
    WolfArmorItem& operator=(WolfArmorItem const&);
    WolfArmorItem(WolfArmorItem const&);
    WolfArmorItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WolfArmorItem@@UEAA@XZ
    virtual ~WolfArmorItem() = default;

    // vIndex: 51, symbol: ?getArmorValue@WolfArmorItem@@UEBAHXZ
    virtual int getArmorValue() const;

    // NOLINTEND
};
