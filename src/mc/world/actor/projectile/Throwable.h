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

class Throwable : public ::PredictableProjectile {
public:
    // prevent constructor by default
    Throwable& operator=(Throwable const&);
    Throwable(Throwable const&);
    Throwable();

public:
    // NOLINTBEGIN
    // vIndex: 6, symbol:
    // ?initializeComponents@Throwable@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(enum ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: ??1Throwable@@UEAA@XZ
    virtual ~Throwable();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 27, symbol: ?lerpMotion@Throwable@@UEAAXAEBVVec3@@@Z
    virtual void lerpMotion(class Vec3 const& delta);

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 100, symbol: ?getSourceUniqueID@Throwable@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 164, symbol: ?readAdditionalSaveData@Throwable@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 165, symbol: ?addAdditionalSaveData@Throwable@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 169, symbol: ?getThrowPower@Throwable@@UEAAMXZ
    virtual float getThrowPower();

    // vIndex: 170, symbol: ?getThrowUpAngleOffset@Throwable@@MEAAMXZ
    virtual float getThrowUpAngleOffset();

    // vIndex: 171, symbol: ?getGravity@Throwable@@MEAAMXZ
    virtual float getGravity();

    // symbol: ?canMakeStepSound@Throwable@@MEBA_NXZ
    MCVAPI bool canMakeStepSound() const;

    // symbol: ??0Throwable@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Throwable(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?shoot@Throwable@@QEAAXAEAVMob@@@Z
    MCAPI void shoot(class Mob& shooter);

    // symbol: ?shoot@Throwable@@QEAAXAEBVVec3@@MM0@Z
    MCAPI void shoot(class Vec3 const& dir, float pow, float uncertainty, class Vec3 const& baseSpeed);

    // symbol: ?spawnPlayerProjectile@Throwable@@SAPEAVActor@@AEBUActorDefinitionIdentifier@@AEAVPlayer@@@Z
    MCAPI static class Actor* spawnPlayerProjectile(struct ActorDefinitionIdentifier const&, class Player&);

    // NOLINTEND
};
