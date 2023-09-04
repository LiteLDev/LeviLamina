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
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/components/ItemUseMethod.h"

class FireworksRocketActor : public ::PredictableProjectile {
public:
    // prevent constructor by default
    FireworksRocketActor& operator=(FireworksRocketActor const&) = delete;
    FireworksRocketActor(FireworksRocketActor const&)            = delete;
    FireworksRocketActor()                                       = delete;

public:
    // NOLINTBEGIN
    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 41, symbol: ?lerpMotion@FireworksRocketActor@@UEAAXAEBVVec3@@@Z
    virtual void lerpMotion(class Vec3 const&);

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 69, symbol: ?getShadowRadius@FireworksRocketActor@@UEBAMXZ
    virtual float getShadowRadius() const;

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

    // vIndex: 127, symbol: ?handleEntityEvent@FireworksRocketActor@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 173, symbol: ?onSynchedDataUpdate@FireworksRocketActor@@UEAAXH@Z
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

    // vIndex: 243, symbol: ?readAdditionalSaveData@FireworksRocketActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 244, symbol: ?addAdditionalSaveData@FireworksRocketActor@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // symbol:
    // ??0FireworksRocketActor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI
    FireworksRocketActor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?init@FireworksRocketActor@@QEAAXAEAVLevel@@AEBVVec3@@AEBVCompoundTag@@1UActorUniqueID@@_N@Z
    MCAPI void
    init(class Level&, class Vec3 const&, class CompoundTag const&, class Vec3 const&, struct ActorUniqueID, bool);

    // symbol: ?isAttachedToEntity@FireworksRocketActor@@QEBA_NXZ
    MCAPI bool isAttachedToEntity() const;

    // symbol: ?postNormalTick@FireworksRocketActor@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?setDispensed@FireworksRocketActor@@QEAAX_N@Z
    MCAPI void setDispensed(bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?checkAchievement@FireworksRocketActor@@AEBAXXZ
    MCAPI void checkAchievement() const;

    // symbol: ?dealExplosionDamage@FireworksRocketActor@@AEAAXXZ
    MCAPI void dealExplosionDamage();

    // symbol: ?initTagData@FireworksRocketActor@@AEAAXAEAVRandom@@@Z
    MCAPI void initTagData(class Random&);

    // NOLINTEND
};
