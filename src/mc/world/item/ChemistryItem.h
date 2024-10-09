#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

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
    // vIndex: 0
    virtual ~ChemistryItem();

    // vIndex: 92
    virtual void fixupCommon(class ItemStackBase& stack) const;

    MCAPI static void validate(class ItemStackBase& stack);

    // NOLINTEND
};
