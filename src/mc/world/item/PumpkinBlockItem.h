#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class PumpkinBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    PumpkinBlockItem& operator=(PumpkinBlockItem const&);
    PumpkinBlockItem(PumpkinBlockItem const&);
    PumpkinBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PumpkinBlockItem() = default;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 97
    virtual ::ActorLocation getEquipLocation() const;

    // vIndex: 98
    virtual ::Puv::Legacy::LevelSoundEvent getEquipSound() const;

    MCAPI PumpkinBlockItem(std::string const& name, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& name, int id);

    MCAPI int getEnchantSlot$() const;

    MCAPI ::ActorLocation getEquipLocation$() const;

    MCAPI ::Puv::Legacy::LevelSoundEvent getEquipSound$() const;

    // NOLINTEND
};
