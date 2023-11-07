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
#include "mc/world/actor/monster/HumanoidMonster.h"
#include "mc/world/item/components/ItemUseMethod.h"

class Witch : public ::HumanoidMonster {
public:
    // prevent constructor by default
    Witch& operator=(Witch const&);
    Witch(Witch const&);
    Witch();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Witch@@UEAA@XZ
    virtual ~Witch() = default;

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 15, symbol: ?getFiringPos@Witch@@UEBA?AVVec3@@XZ
    virtual class Vec3 getFiringPos() const;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 64, symbol: ?canAttack@Witch@@UEBA_NPEAVActor@@_N@Z
    virtual bool canAttack(class Actor*, bool) const;

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 84, symbol: ?handleEntityEvent@Witch@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 120, symbol: __unk_vfn_120
    virtual void __unk_vfn_120();

    // vIndex: 142, symbol: __unk_vfn_142
    virtual void __unk_vfn_142();

    // vIndex: 143, symbol: __unk_vfn_143
    virtual void __unk_vfn_143();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 154, symbol: __unk_vfn_154
    virtual void __unk_vfn_154();

    // vIndex: 163, symbol: ?updateEntitySpecificMolangVariables@Witch@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 171, symbol: ?_onSizeUpdated@Witch@@EEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 202, symbol: ?getDamageAfterEnchantReduction@Witch@@MEBAMAEBVActorDamageSource@@M@Z
    virtual float getDamageAfterEnchantReduction(class ActorDamageSource const&, float) const;

    // vIndex: 204, symbol: __unk_vfn_204
    virtual void __unk_vfn_204();

    // vIndex: 212, symbol: __unk_vfn_212
    virtual void __unk_vfn_212();

    // symbol: ??0Witch@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Witch(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?preAiStep@Witch@@QEAAXXZ
    MCAPI void preAiStep();

    // NOLINTEND
};
