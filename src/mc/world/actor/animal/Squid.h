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
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

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
    // vIndex: 4, symbol: ?reloadHardcoded@Squid@@MEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: ??1Squid@@UEAA@XZ
    virtual ~Squid();

    // vIndex: 75, symbol: ?handleEntityEvent@Squid@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 146, symbol: ?updateEntitySpecificMolangVariables@Squid@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 148, symbol: ?_hurt@Squid@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 162, symbol: ?checkSpawnRules@Squid@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool fromSpawner);

    // vIndex: 163, symbol: ?checkSpawnObstruction@Squid@@UEBA_NXZ
    virtual bool checkSpawnObstruction() const;

    // vIndex: 192, symbol: ?_getInkSquirtSoundEvent@Squid@@MEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent _getInkSquirtSoundEvent() const;

    // symbol:
    // ??0Squid@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@AEBVColor@mce@@@Z
    MCAPI
    Squid(class ActorDefinitionGroup* definitions, struct ActorDefinitionIdentifier const& definitionName, class EntityContext& entityContext, class mce::Color const&);

    // symbol: ?postAiStep@Squid@@QEAAXXZ
    MCAPI void postAiStep();

    // symbol: ?spawnInkParticles@Squid@@QEAAXXZ
    MCAPI void spawnInkParticles();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_randomInkDir@Squid@@AEAA?AVVec3@@XZ
    MCAPI class Vec3 _randomInkDir();

    // NOLINTEND
};
