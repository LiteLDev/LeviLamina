#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/ParticleType.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/projectile/Fireball.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DragonFireball : public ::Fireball {
public:
    // prevent constructor by default
    DragonFireball& operator=(DragonFireball const&);
    DragonFireball(DragonFireball const&);
    DragonFireball();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1DragonFireball@@UEAA@XZ
    virtual ~DragonFireball() = default;

    // vIndex: 45, symbol: ?isPickable@DragonFireball@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 148, symbol: ?_hurt@DragonFireball@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 154, symbol: ?getTrailParticle@DragonFireball@@MEAA?AW4ParticleType@@XZ
    virtual ::ParticleType getTrailParticle();

    // vIndex: 155, symbol: ?shouldBurn@DragonFireball@@MEAA_NXZ
    virtual bool shouldBurn();

    // symbol: ??0DragonFireball@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI DragonFireball(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?SPLASH_RANGE@DragonFireball@@2MA
    MCAPI static float SPLASH_RANGE;

    // NOLINTEND
};
