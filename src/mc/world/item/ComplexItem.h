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

class ComplexItem : public ::Item {
public:
    // prevent constructor by default
    ComplexItem& operator=(ComplexItem const&);
    ComplexItem(ComplexItem const&);
    ComplexItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ComplexItem();

    // vIndex: 55
    virtual bool isComplex() const;

    // vIndex: 119
    virtual std::unique_ptr<class Packet>
    getUpdatePacket(class ItemStack const& item, class Level& level, class Actor& player) const;

    MCAPI ComplexItem(std::string const& nameId, int id);

    // NOLINTEND
};
