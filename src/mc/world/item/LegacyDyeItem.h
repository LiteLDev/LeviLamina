#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/DyePowderItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

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
    // vIndex: 0, symbol: __gen_??1LegacyDyeItem@@UEAA@XZ
    virtual ~LegacyDyeItem() = default;

    // vIndex: 15, symbol: ?isDye@LegacyDyeItem@@UEBA_NXZ
    virtual bool isDye() const;

    // symbol:
    // ??0LegacyDyeItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4ItemColor@@_N@Z
    MCAPI LegacyDyeItem(std::string const&, int, ::ItemColor, bool);

    // NOLINTEND
};
