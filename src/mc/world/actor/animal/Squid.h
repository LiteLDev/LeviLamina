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
#include "mc/world/actor/Mob.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Squid : public ::Mob {
public:
    // prevent constructor by default
    Squid& operator=(Squid const&);
    Squid(Squid const&);
    Squid();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~Squid();

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 144
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 160
    virtual bool checkSpawnRules(bool fromSpawner);

    // vIndex: 161
    virtual bool checkSpawnObstruction() const;

    // vIndex: 190
    virtual ::Puv::Legacy::LevelSoundEvent _getInkSquirtSoundEvent() const;

    MCAPI Squid(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext,
        class mce::Color const&                 inkParticleColor
    );

    MCAPI void postAiStep();

    MCAPI void spawnInkParticles();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Vec3 _randomInkDir();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext,
        class mce::Color const&                 inkParticleColor
    );

    MCAPI void dtor$();

    MCAPI ::Puv::Legacy::LevelSoundEvent _getInkSquirtSoundEvent$() const;

    MCAPI bool _hurt$(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI bool checkSpawnObstruction$() const;

    MCAPI bool checkSpawnRules$(bool fromSpawner);

    MCAPI void handleEntityEvent$(::ActorEvent id, int data);

    MCAPI void reloadHardcoded$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI void updateEntitySpecificMolangVariables$(class RenderParams& renderParams);

    // NOLINTEND
};
