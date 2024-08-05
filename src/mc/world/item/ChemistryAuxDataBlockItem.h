#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/AuxDataBlockItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ChemistryAuxDataBlockItem : public ::AuxDataBlockItem {
public:
    // prevent constructor by default
    ChemistryAuxDataBlockItem& operator=(ChemistryAuxDataBlockItem const&);
    ChemistryAuxDataBlockItem(ChemistryAuxDataBlockItem const&);
    ChemistryAuxDataBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChemistryAuxDataBlockItem() = default;

    // vIndex: 92
    virtual void fixupCommon(class ItemStackBase& stack) const;

    // NOLINTEND
};
