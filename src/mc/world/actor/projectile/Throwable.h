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
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Throwable : public ::PredictableProjectile {
public:
    // prevent constructor by default
    Throwable& operator=(Throwable const&);
    Throwable(Throwable const&);
    Throwable();

public:
    // NOLINTBEGIN
    // vIndex: 6
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~Throwable();

    // vIndex: 24
    virtual void lerpMotion(class Vec3 const& delta);

    // vIndex: 90
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 151
    virtual float getThrowPower();

    // vIndex: 152
    virtual float getThrowUpAngleOffset();

    // vIndex: 153
    virtual float getGravity();

    MCAPI Throwable(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void shoot(class Mob& shooter);

    MCAPI void shoot(class Vec3 const& dir, float pow, float uncertainty, class Vec3 const& baseSpeed);

    MCAPI static class Actor* spawnPlayerProjectile(struct ActorDefinitionIdentifier const& id, class Player& player);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void dtor$();

    MCAPI void addAdditionalSaveData$(class CompoundTag& tag) const;

    MCAPI float getGravity$();

    MCAPI struct ActorUniqueID getSourceUniqueID$() const;

    MCAPI float getThrowPower$();

    MCAPI float getThrowUpAngleOffset$();

    MCAPI void initializeComponents$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI void lerpMotion$(class Vec3 const& delta);

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // NOLINTEND
};
