#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
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
    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 47, symbol: ?addPassenger@Wolf@@UEAAXAEAVActor@@@Z
    virtual void addPassenger(class Actor&);

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 82, symbol: __unk_vfn_82
    virtual void __unk_vfn_82();

    // vIndex: 85, symbol: __unk_vfn_85
    virtual void __unk_vfn_85();

    // vIndex: 92, symbol: __unk_vfn_92
    virtual void __unk_vfn_92();

    // vIndex: 94, symbol: __unk_vfn_94
    virtual void __unk_vfn_94();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 97, symbol: __unk_vfn_97
    virtual void __unk_vfn_97();

    // vIndex: 106, symbol: ?setSitting@Wolf@@UEAAX_N@Z
    virtual void setSitting(bool);

    // vIndex: 118, symbol: ?getAmbientSound@Wolf@@UEBA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getAmbientSound() const;

    // vIndex: 125, symbol: ?handleEntityEvent@Wolf@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 149, symbol: ?load@Wolf@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual bool load(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 169, symbol: ?onSynchedDataUpdate@Wolf@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int);

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@Wolf@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 272, symbol: ?isAlliedTo@Wolf@@UEAA_NPEAVMob@@@Z
    virtual bool isAlliedTo(class Mob*);

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // vIndex: 301, symbol: ?onBorn@Wolf@@UEAAXAEAVActor@@0@Z
    virtual void onBorn(class Actor&, class Actor&);

    // vIndex: 312, symbol: ?newServerAiStep@Wolf@@UEAAXXZ
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
