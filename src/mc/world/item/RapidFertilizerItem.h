#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/FertilizerItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class RapidFertilizerItem : public ::FertilizerItem {
public:
    // prevent constructor by default
    RapidFertilizerItem& operator=(RapidFertilizerItem const&);
    RapidFertilizerItem(RapidFertilizerItem const&);
    RapidFertilizerItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RapidFertilizerItem@@UEAA@XZ
    virtual ~RapidFertilizerItem() = default;

    // vIndex: 91, symbol: ?fixupCommon@RapidFertilizerItem@@UEBAXAEAVItemStackBase@@@Z
    virtual void fixupCommon(class ItemStackBase& stack) const;

    // NOLINTEND
};
