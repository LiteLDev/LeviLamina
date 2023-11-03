#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
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
    // vIndex: 4, symbol: ?reloadHardcoded@Squid@@MEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 84, symbol: ?handleEntityEvent@Squid@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: __unk_vfn_148
    virtual void __unk_vfn_148();

    // vIndex: 163, symbol: ?updateEntitySpecificMolangVariables@Squid@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@Squid@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 181, symbol: ?aiStep@Squid@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 183, symbol: ?checkSpawnRules@Squid@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool);

    // vIndex: 184, symbol: ?checkSpawnObstruction@Squid@@UEBA_NXZ
    virtual bool checkSpawnObstruction() const;

    // vIndex: 216, symbol: ?_getInkSquirtSoundEvent@Squid@@MEBA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent _getInkSquirtSoundEvent() const;

    // symbol: ??1Squid@@UEAA@XZ
    MCVAPI ~Squid();

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
