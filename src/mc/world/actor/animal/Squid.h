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
    virtual void reloadHardcoded(::ActorInitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: ??1Squid@@UEAA@XZ
    virtual ~Squid();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 83, symbol: ?handleEntityEvent@Squid@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(enum ActorEvent id, int data);

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 160, symbol: ?updateEntitySpecificMolangVariables@Squid@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: ?_hurt@Squid@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 179, symbol: ?checkSpawnRules@Squid@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool fromSpawner);

    // vIndex: 180, symbol: ?checkSpawnObstruction@Squid@@UEBA_NXZ
    virtual bool checkSpawnObstruction() const;

    // vIndex: 210, symbol: ?_getInkSquirtSoundEvent@Squid@@MEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent _getInkSquirtSoundEvent() const;

    // symbol:
    // ??0Squid@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@AEBVColor@mce@@@Z
    MCAPI
    Squid(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&, class mce::Color const&);

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
