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

class ChemistryItem : public ::Item {
public:
    // prevent constructor by default
    ChemistryItem& operator=(ChemistryItem const&);
    ChemistryItem(ChemistryItem const&);
    ChemistryItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ChemistryItem@@UEAA@XZ
    virtual ~ChemistryItem();

    // vIndex: 91, symbol: ?fixupCommon@ChemistryItem@@UEBAXAEAVItemStackBase@@@Z
    virtual void fixupCommon(class ItemStackBase& stack) const;

    // symbol: ?validate@ChemistryItem@@SAXAEAVItemStackBase@@@Z
    MCAPI static void validate(class ItemStackBase& stack);

    // NOLINTEND
};
