#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/ChemistryAuxDataBlockItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ElementBlockItem : public ::ChemistryAuxDataBlockItem {
public:
    // prevent constructor by default
    ElementBlockItem& operator=(ElementBlockItem const&);
    ElementBlockItem(ElementBlockItem const&);
    ElementBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ElementBlockItem() = default;

    // vIndex: 92
    virtual void fixupCommon(class ItemStackBase& stack) const;

    // NOLINTEND
};
