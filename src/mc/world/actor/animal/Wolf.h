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
    Wolf& operator=(Wolf const&) = delete;
    Wolf(Wolf const&)            = delete;
    Wolf()                       = delete;

public:
    // NOLINTBEGIN
    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 48, symbol: ?addPassenger@Wolf@@UEAAXAEAVActor@@@Z
    virtual void addPassenger(class Actor&);

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 86, symbol: __unk_vfn_86
    virtual void __unk_vfn_86();

    // vIndex: 93, symbol: __unk_vfn_93
    virtual void __unk_vfn_93();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 96, symbol: __unk_vfn_96
    virtual void __unk_vfn_96();

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 107, symbol: ?setSitting@Wolf@@UEAAX_N@Z
    virtual void setSitting(bool);

    // vIndex: 119, symbol: ?getAmbientSound@Wolf@@UEBA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getAmbientSound() const;

    // vIndex: 127, symbol: ?handleEntityEvent@Wolf@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 151, symbol: ?load@Wolf@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual bool load(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 173, symbol: ?onSynchedDataUpdate@Wolf@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int);

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 240, symbol: ?_hurt@Wolf@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 276, symbol: __unk_vfn_276
    virtual void __unk_vfn_276();

    // vIndex: 278, symbol: ?isAlliedTo@Wolf@@UEAA_NPEAVMob@@@Z
    virtual bool isAlliedTo(class Mob*);

    // vIndex: 280, symbol: __unk_vfn_280
    virtual void __unk_vfn_280();

    // vIndex: 307, symbol: ?onBorn@Wolf@@UEAAXAEAVActor@@0@Z
    virtual void onBorn(class Actor&, class Actor&);

    // vIndex: 318, symbol: ?newServerAiStep@Wolf@@UEAAXXZ
    virtual void newServerAiStep();

    // vIndex: 323, symbol: __unk_vfn_323
    virtual void __unk_vfn_323();

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
