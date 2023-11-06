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
    // vIndex: 10, symbol: ??1@@UEAA@XZ
    virtual ~ArmorStand();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 29, symbol: ?normalTick@ArmorStand@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: ?getShadowRadius@ArmorStand@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 51, symbol: ?isPickable@ArmorStand@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 79, symbol: ?isInvulnerableTo@ArmorStand@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 120, symbol: __unk_vfn_120
    virtual void __unk_vfn_120();

    // vIndex: 141, symbol: ?getInteraction@ArmorStand@@UEAA_NAEAVPlayer@@AEAVActorInteraction@@AEBVVec3@@@Z
    virtual bool getInteraction(class Player&, class ActorInteraction&, class Vec3 const&);

    // vIndex: 142, symbol: __unk_vfn_142
    virtual void __unk_vfn_142();

    // vIndex: 143, symbol: __unk_vfn_143
    virtual void __unk_vfn_143();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 149, symbol: ?kill@ArmorStand@@UEAAXXZ
    virtual void kill();

    // vIndex: 150, symbol: ?die@ArmorStand@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 154, symbol: __unk_vfn_154
    virtual void __unk_vfn_154();

    // vIndex: 163, symbol: ?updateEntitySpecificMolangVariables@ArmorStand@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@ArmorStand@@UEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 167, symbol: ?readAdditionalSaveData@ArmorStand@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 168, symbol: ?addAdditionalSaveData@ArmorStand@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 182, symbol: ?pushActors@ArmorStand@@UEAAXXZ
    virtual void pushActors();

    // vIndex: 204, symbol: __unk_vfn_204
    virtual void __unk_vfn_204();

    // vIndex: 212, symbol: __unk_vfn_212
    virtual void __unk_vfn_212();

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
    static auto& $POSE_ATHENA() { return POSE_ATHENA; }

    static auto& $POSE_BRANDISH() { return POSE_BRANDISH; }

    static auto& $POSE_CANCAN_A() { return POSE_CANCAN_A; }

    static auto& $POSE_CANCAN_B() { return POSE_CANCAN_B; }

    static auto& $POSE_DEFAULT() { return POSE_DEFAULT; }

    static auto& $POSE_ENTERTAIN() { return POSE_ENTERTAIN; }

    static auto& $POSE_HERO() { return POSE_HERO; }

    static auto& $POSE_HONOR() { return POSE_HONOR; }

    static auto& $POSE_RIPOSTE() { return POSE_RIPOSTE; }

    static auto& $POSE_SALUTE() { return POSE_SALUTE; }

    static auto& $POSE_SOLEMN() { return POSE_SOLEMN; }

    static auto& $POSE_ZERO_ROTATION() { return POSE_ZERO_ROTATION; }

    static auto& $POSE_ZOMBIE() { return POSE_ZOMBIE; }

    static auto& $STAND_POSES() { return STAND_POSES; }

    // NOLINTEND
};
