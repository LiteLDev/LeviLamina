#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ChemistryAuxDataBlockItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

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
    // vIndex: 0, symbol: __gen_??1ElementBlockItem@@UEAA@XZ
    virtual ~ElementBlockItem() = default;

    // vIndex: 91, symbol: ?fixupCommon@ElementBlockItem@@EEBAXAEAVItemStackBase@@@Z
    virtual void fixupCommon(class ItemStackBase& stack) const;

    // NOLINTEND
};
