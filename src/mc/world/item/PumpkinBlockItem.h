#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/world/item/BlockItem.h"

class PumpkinBlockItem : public ::BlockItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getEnchantSlot() const /*override*/;

    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const /*override*/;

    virtual ~PumpkinBlockItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getEnchantSlot() const;

    MCFOLD ::SharedTypes::Legacy::ActorLocation $getEquipLocation() const;

    MCFOLD ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
