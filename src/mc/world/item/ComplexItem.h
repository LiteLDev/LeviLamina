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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI void dtor$();

    MCAPI std::unique_ptr<class Packet>
          getUpdatePacket$(class ItemStack const& item, class Level& level, class Actor& player) const;

    MCAPI bool isComplex$() const;

    // NOLINTEND
};
