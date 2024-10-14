#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Panda : public ::Animal {
public:
    // prevent constructor by default
    Panda& operator=(Panda const&);
    Panda(Panda const&);
    Panda();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~Panda() = default;

    // vIndex: 68
    virtual ::Puv::Legacy::LevelSoundEvent getAmbientSound() const;

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 183
    virtual void setTransitioningSitting(bool value);

    MCAPI Panda(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI float getLieOnBackAmount(float a) const;

    MCAPI float getSitAmount(float a) const;

    MCAPI void postNormalTick();

    MCAPI void updateLaying();

    MCAPI void updateRollAmount();

    MCAPI void updateSitting();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI ::Puv::Legacy::LevelSoundEvent getAmbientSound$() const;

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void setTransitioningSitting$(bool value);

    // NOLINTEND
};
