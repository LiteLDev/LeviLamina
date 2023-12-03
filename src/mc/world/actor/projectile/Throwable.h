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
#include "mc/enums/ParticleType.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/components/ItemUseMethod.h"

class Throwable : public ::PredictableProjectile {
public:
    // prevent constructor by default
    Throwable& operator=(Throwable const&);
    Throwable(Throwable const&);
    Throwable();

public:
    // NOLINTBEGIN
    // vIndex: 6, symbol:
    // ?initializeComponents@Throwable@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: ??1Throwable@@UEAA@XZ
    virtual ~Throwable();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 27, symbol: ?lerpMotion@Throwable@@UEAAXAEBVVec3@@@Z
    virtual void lerpMotion(class Vec3 const&);

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

    // vIndex: 102, symbol: ?getSourceUniqueID@Throwable@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 167, symbol: ?readAdditionalSaveData@Throwable@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 168, symbol: ?addAdditionalSaveData@Throwable@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 173, symbol: ?getThrowPower@Throwable@@UEAAMXZ
    virtual float getThrowPower();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 175, symbol: ?getThrowUpAngleOffset@Throwable@@MEAAMXZ
    virtual float getThrowUpAngleOffset();

    // vIndex: 176, symbol: ?getGravity@Throwable@@MEAAMXZ
    virtual float getGravity();

    // vIndex: 177, symbol: ?getParticleType@Throwable@@MEAA?AW4ParticleType@@XZ
    virtual ::ParticleType getParticleType();

    // symbol: ?canMakeStepSound@Throwable@@MEBA_NXZ
    MCVAPI bool canMakeStepSound() const;

    // symbol: ?onHit@Throwable@@MEAAXAEBVHitResult@@@Z
    MCVAPI void onHit(class HitResult const&);

    // symbol: ?stopUponGroundCollision@Throwable@@UEBA_NXZ
    MCVAPI bool stopUponGroundCollision() const;

    // symbol: ??0Throwable@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Throwable(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?shoot@Throwable@@QEAAXAEAVMob@@@Z
    MCAPI void shoot(class Mob&);

    // symbol: ?shoot@Throwable@@QEAAXAEBVVec3@@MM0@Z
    MCAPI void shoot(class Vec3 const&, float, float, class Vec3 const&);

    // symbol: ?spawnPlayerProjectile@Throwable@@SAPEAVActor@@AEBUActorDefinitionIdentifier@@AEAVPlayer@@@Z
    MCAPI static class Actor* spawnPlayerProjectile(struct ActorDefinitionIdentifier const&, class Player&);

    // NOLINTEND
};
