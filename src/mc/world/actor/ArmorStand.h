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
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

class ArmorStand : public ::Mob {
public:
    // ArmorStand inner types declare
    // clang-format off
    struct Pose;
    // clang-format on

    // ArmorStand inner types define
    struct Pose {
    public:
        // prevent constructor by default
        Pose& operator=(Pose const&);
        Pose(Pose const&);
        Pose();
    };

public:
    // prevent constructor by default
    ArmorStand& operator=(ArmorStand const&);
    ArmorStand(ArmorStand const&);
    ArmorStand();

public:
    // NOLINTBEGIN
    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 43, symbol: ?normalTick@ArmorStand@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 69, symbol: ?getShadowRadius@ArmorStand@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 82, symbol: ?isPickable@ArmorStand@@UEAA_NXZ
    virtual bool isPickable();

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

    // vIndex: 120, symbol: ?isInvulnerableTo@ArmorStand@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 209, symbol: ?getInteraction@ArmorStand@@UEAA_NAEAVPlayer@@AEAVActorInteraction@@AEBVVec3@@@Z
    virtual bool getInteraction(class Player&, class ActorInteraction&, class Vec3 const&);

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 223, symbol: ?kill@ArmorStand@@UEAAXXZ
    virtual void kill();

    // vIndex: 224, symbol: ?die@ArmorStand@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 237, symbol: ?updateEntitySpecificMolangVariables@ArmorStand@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 240, symbol: ?_hurt@ArmorStand@@UEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 243, symbol: ?readAdditionalSaveData@ArmorStand@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 244, symbol: ?addAdditionalSaveData@ArmorStand@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 266, symbol: ?pushActors@ArmorStand@@UEAAXXZ
    virtual void pushActors();

    // vIndex: 276, symbol: __unk_vfn_276
    virtual void __unk_vfn_276();

    // vIndex: 280, symbol: __unk_vfn_280
    virtual void __unk_vfn_280();

    // vIndex: 323, symbol: __unk_vfn_323
    virtual void __unk_vfn_323();

    // symbol: ?interactPreventDefault@ArmorStand@@UEAA_NXZ
    MCVAPI bool interactPreventDefault();

    // symbol: ??0ArmorStand@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ArmorStand(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_causeDamage@ArmorStand@@AEAAXM@Z
    MCAPI void _causeDamage(float);

    // symbol: ?_destroyWithEffects@ArmorStand@@AEAAXPEAVActor@@@Z
    MCAPI void _destroyWithEffects(class Actor*);

    // symbol: ?_dropHeldItems@ArmorStand@@AEAAXXZ
    MCAPI void _dropHeldItems();

    // symbol: ?_dropHeldItemsAndResource@ArmorStand@@AEAAXXZ
    MCAPI void _dropHeldItemsAndResource();

    // symbol: ?_dropItem@ArmorStand@@AEAAXAEBVItemStack@@@Z
    MCAPI void _dropItem(class ItemStack const&);

    // symbol: ?_trySwapItem@ArmorStand@@AEAA_NAEAVPlayer@@W4EquipmentSlot@@@Z
    MCAPI bool _trySwapItem(class Player&, ::EquipmentSlot);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?POSE_ATHENA@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_ATHENA;

    // symbol: ?POSE_BRANDISH@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_BRANDISH;

    // symbol: ?POSE_CANCAN_A@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_A;

    // symbol: ?POSE_CANCAN_B@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_B;

    // symbol: ?POSE_DEFAULT@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_DEFAULT;

    // symbol: ?POSE_ENTERTAIN@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_ENTERTAIN;

    // symbol: ?POSE_HERO@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_HERO;

    // symbol: ?POSE_HONOR@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_HONOR;

    // symbol: ?POSE_RIPOSTE@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_RIPOSTE;

    // symbol: ?POSE_SALUTE@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_SALUTE;

    // symbol: ?POSE_SOLEMN@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_SOLEMN;

    // symbol: ?POSE_ZERO_ROTATION@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_ZERO_ROTATION;

    // symbol: ?POSE_ZOMBIE@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_ZOMBIE;

    // symbol: ?STAND_POSES@ArmorStand@@0PAPEBUPose@1@A
    MCAPI static struct ArmorStand::Pose const* STAND_POSES[];

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $POSE_ATHENA() { return POSE_ATHENA; }

    auto& $POSE_BRANDISH() { return POSE_BRANDISH; }

    auto& $POSE_CANCAN_A() { return POSE_CANCAN_A; }

    auto& $POSE_CANCAN_B() { return POSE_CANCAN_B; }

    auto& $POSE_DEFAULT() { return POSE_DEFAULT; }

    auto& $POSE_ENTERTAIN() { return POSE_ENTERTAIN; }

    auto& $POSE_HERO() { return POSE_HERO; }

    auto& $POSE_HONOR() { return POSE_HONOR; }

    auto& $POSE_RIPOSTE() { return POSE_RIPOSTE; }

    auto& $POSE_SALUTE() { return POSE_SALUTE; }

    auto& $POSE_SOLEMN() { return POSE_SOLEMN; }

    auto& $POSE_ZERO_ROTATION() { return POSE_ZERO_ROTATION; }

    auto& $POSE_ZOMBIE() { return POSE_ZOMBIE; }

    auto& $STAND_POSES() { return STAND_POSES; }

    // NOLINTEND
};
