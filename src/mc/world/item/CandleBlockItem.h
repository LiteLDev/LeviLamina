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

class CandleBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    CandleBlockItem& operator=(CandleBlockItem const&);
    CandleBlockItem(CandleBlockItem const&);
    CandleBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CandleBlockItem() = default;

    // vIndex: 12
    virtual bool isCandle() const;

    // vIndex: 32
    virtual int getLevelDataForAuxValue(int auxValue) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const&) const;

    MCAPI CandleBlockItem(std::string const& name, int id);

    // NOLINTEND
};
