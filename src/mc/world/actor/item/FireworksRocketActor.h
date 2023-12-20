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
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FireworksRocketActor : public ::PredictableProjectile {
public:
    // prevent constructor by default
    FireworksRocketActor& operator=(FireworksRocketActor const&);
    FireworksRocketActor(FireworksRocketActor const&);
    FireworksRocketActor();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1FireworksRocketActor@@UEAA@XZ
    virtual ~FireworksRocketActor() = default;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 27, symbol: ?lerpMotion@FireworksRocketActor@@UEAAXAEBVVec3@@@Z
    virtual void lerpMotion(class Vec3 const&);

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: ?getShadowRadius@FireworksRocketActor@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 83, symbol: ?handleEntityEvent@FireworksRocketActor@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 112, symbol: ?onSynchedDataUpdate@FireworksRocketActor@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int);

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 164, symbol: ?readAdditionalSaveData@FireworksRocketActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 165, symbol: ?addAdditionalSaveData@FireworksRocketActor@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

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

    // symbol:
    // ?initData@FireworksRocketActor@@SAXAEAVSynchedActorDataEntityWrapper@@AEBVCompoundTag@@AEBVVec3@@UActorUniqueID@@@Z
    MCAPI static void
    initData(class SynchedActorDataEntityWrapper&, class CompoundTag const&, class Vec3 const&, struct ActorUniqueID);

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
