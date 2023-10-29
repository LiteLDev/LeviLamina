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
    // vIndex: 12, symbol:
    // ?initializeComponents@Throwable@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 41, symbol: ?lerpMotion@Throwable@@UEAAXAEBVVec3@@@Z
    virtual void lerpMotion(class Vec3 const&);

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 67, symbol: ?getShadowHeightOffs@Throwable@@UEAAMXZ
    virtual float getShadowHeightOffs();

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

    // vIndex: 153, symbol: ?getSourceUniqueID@Throwable@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

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

    // vIndex: 239, symbol: ?readAdditionalSaveData@Throwable@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 240, symbol: ?addAdditionalSaveData@Throwable@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 249, symbol: ?getThrowPower@Throwable@@UEAAMXZ
    virtual float getThrowPower();

    // vIndex: 250, symbol: __unk_vfn_250
    virtual void __unk_vfn_250();

    // vIndex: 251, symbol: ?getThrowUpAngleOffset@Throwable@@MEAAMXZ
    virtual float getThrowUpAngleOffset();

    // vIndex: 252, symbol: ?getGravity@Throwable@@MEAAMXZ
    virtual float getGravity();

    // vIndex: 253, symbol: ?getParticleType@Throwable@@MEAA?AW4ParticleType@@XZ
    virtual ::ParticleType getParticleType();

    // symbol: ?canMakeStepSound@Throwable@@MEBA_NXZ
    MCVAPI bool canMakeStepSound() const;

    // symbol: ?onHit@Throwable@@MEAAXAEBVHitResult@@@Z
    MCVAPI void onHit(class HitResult const&);

    // symbol: ?stopUponGroundCollision@Throwable@@UEBA_NXZ
    MCVAPI bool stopUponGroundCollision() const;

    // symbol: ??1Throwable@@UEAA@XZ
    MCVAPI ~Throwable();

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
