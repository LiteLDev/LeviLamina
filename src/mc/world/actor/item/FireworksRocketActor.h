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
    FireworksRocketActor& operator=(FireworksRocketActor const&);
    FireworksRocketActor(FireworksRocketActor const&);
    FireworksRocketActor();

public:
    // NOLINTBEGIN
    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 41, symbol: ?lerpMotion@FireworksRocketActor@@UEAAXAEBVVec3@@@Z
    virtual void lerpMotion(class Vec3 const&);

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 68, symbol: ?getShadowRadius@FireworksRocketActor@@UEBAMXZ
    virtual float getShadowRadius() const;

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

    // vIndex: 125, symbol: ?handleEntityEvent@FireworksRocketActor@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 169, symbol: ?onSynchedDataUpdate@FireworksRocketActor@@UEAAXH@Z
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

    // vIndex: 239, symbol: ?readAdditionalSaveData@FireworksRocketActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 240, symbol: ?addAdditionalSaveData@FireworksRocketActor@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

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
