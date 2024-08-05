#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ChemistryBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    ChemistryBlockItem& operator=(ChemistryBlockItem const&);
    ChemistryBlockItem(ChemistryBlockItem const&);
    ChemistryBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChemistryBlockItem() = default;

    // vIndex: 92
    virtual void fixupCommon(class ItemStackBase& stack) const;

    // NOLINTEND
};
