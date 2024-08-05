#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"
#include "mc/world/level/block/utils/DeprecatedSlabBlockItem.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class StoneSlabBlockItem : public ::DeprecatedSlabBlockItem {
public:
    // prevent constructor by default
    StoneSlabBlockItem& operator=(StoneSlabBlockItem const&);
    StoneSlabBlockItem(StoneSlabBlockItem const&);
    StoneSlabBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StoneSlabBlockItem() = default;

    // vIndex: 32
    virtual int getLevelDataForAuxValue(int auxValue) const;

    MCAPI StoneSlabBlockItem(std::string const& name, int id);

    // NOLINTEND
};
