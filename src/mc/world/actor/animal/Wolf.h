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
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/item/components/ItemUseMethod.h"

class Wolf : public ::Animal {
public:
    // prevent constructor by default
    Wolf& operator=(Wolf const&);
    Wolf(Wolf const&);
    Wolf();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Wolf@@UEAA@XZ
    virtual ~Wolf() = default;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 33, symbol: ?addPassenger@Wolf@@UEAAXAEAVActor@@@Z
    virtual void addPassenger(class Actor&);

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

    // vIndex: 70, symbol: ?setSitting@Wolf@@UEAAX_N@Z
    virtual void setSitting(bool);

    // vIndex: 78, symbol: ?getAmbientSound@Wolf@@UEBA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getAmbientSound() const;

    // vIndex: 84, symbol: ?handleEntityEvent@Wolf@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 99, symbol: ?load@Wolf@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual bool load(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 114, symbol: ?onSynchedDataUpdate@Wolf@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int);

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@Wolf@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 189, symbol: ?isAlliedTo@Wolf@@UEAA_NPEAVMob@@@Z
    virtual bool isAlliedTo(class Mob*);

    // vIndex: 204, symbol: ?onBorn@Wolf@@UEAAXAEAVActor@@0@Z
    virtual void onBorn(class Actor&, class Actor&);

    // vIndex: 211, symbol: ?newServerAiStep@Wolf@@UEAAXXZ
    virtual void newServerAiStep();

    // symbol: ??0Wolf@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Wolf(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getHeadRollAngle@Wolf@@QEAAMM@Z
    MCAPI float getHeadRollAngle(float);

    // symbol: ?getShakeAnim@Wolf@@QEBAMXZ
    MCAPI float getShakeAnim() const;

    // symbol: ?getTailAngle@Wolf@@QEAAMXZ
    MCAPI float getTailAngle();

    // symbol: ?isShaking@Wolf@@QEBA_NXZ
    MCAPI bool isShaking() const;

    // symbol: ?postNormalTick@Wolf@@QEAAXXZ
    MCAPI void postNormalTick();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_avoidSnowBury@Wolf@@AEAAXXZ
    MCAPI void _avoidSnowBury();

    // NOLINTEND
};
