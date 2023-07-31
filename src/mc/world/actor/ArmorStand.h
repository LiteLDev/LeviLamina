#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/Mob.h"

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
        Pose& operator=(Pose const&) = delete;
        Pose(Pose const&)            = delete;
        Pose()                       = delete;
    };

public:
    // prevent constructor by default
    ArmorStand& operator=(ArmorStand const&) = delete;
    ArmorStand(ArmorStand const&)            = delete;
    ArmorStand()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 43
     * @symbol ?normalTick\@ArmorStand\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@ArmorStand\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 82
     * @symbol ?isPickable\@ArmorStand\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@ArmorStand\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202();
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203();
    /**
     * @vftbl 209
     * @symbol ?getInteraction\@ArmorStand\@\@UEAA_NAEAVPlayer\@\@AEAVActorInteraction\@\@AEBVVec3\@\@\@Z
     */
    virtual bool getInteraction(class Player&, class ActorInteraction&, class Vec3 const&);
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl 223
     * @symbol ?kill\@ArmorStand\@\@UEAAXXZ
     */
    virtual void kill();
    /**
     * @vftbl 224
     * @symbol ?die\@ArmorStand\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const&);
    /**
     * @vftbl 237
     * @symbol ?updateEntitySpecificMolangVariables\@ArmorStand\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 240
     * @symbol ?_hurt\@ArmorStand\@\@UEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@ArmorStand\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@ArmorStand\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253();
    /**
     * @vftbl 266
     * @symbol ?pushActors\@ArmorStand\@\@UEAAXXZ
     */
    virtual void pushActors();
    /**
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276();
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280();
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARMORSTAND
    /**
     * @symbol ?interactPreventDefault\@ArmorStand\@\@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault();
#endif
    /**
     * @symbol
     * ??0ArmorStand\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI ArmorStand(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_causeDamage\@ArmorStand\@\@AEAAXM\@Z
     */
    MCAPI void _causeDamage(float);
    /**
     * @symbol ?_destroyWithEffects\@ArmorStand\@\@AEAAXPEAVActor\@\@\@Z
     */
    MCAPI void _destroyWithEffects(class Actor*);
    /**
     * @symbol ?_dropHeldItems\@ArmorStand\@\@AEAAXXZ
     */
    MCAPI void _dropHeldItems();
    /**
     * @symbol ?_dropHeldItemsAndResource\@ArmorStand\@\@AEAAXXZ
     */
    MCAPI void _dropHeldItemsAndResource();
    /**
     * @symbol ?_dropItem\@ArmorStand\@\@AEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void _dropItem(class ItemStack const&);
    /**
     * @symbol ?_trySwapItem\@ArmorStand\@\@AEAA_NAEAVPlayer\@\@W4EquipmentSlot\@\@\@Z
     */
    MCAPI bool _trySwapItem(class Player&, enum class EquipmentSlot);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?POSE_ATHENA\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_ATHENA;
    /**
     * @symbol ?POSE_BRANDISH\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_BRANDISH;
    /**
     * @symbol ?POSE_CANCAN_A\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_A;
    /**
     * @symbol ?POSE_CANCAN_B\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_B;
    /**
     * @symbol ?POSE_DEFAULT\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_DEFAULT;
    /**
     * @symbol ?POSE_ENTERTAIN\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_ENTERTAIN;
    /**
     * @symbol ?POSE_HERO\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_HERO;
    /**
     * @symbol ?POSE_HONOR\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_HONOR;
    /**
     * @symbol ?POSE_RIPOSTE\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_RIPOSTE;
    /**
     * @symbol ?POSE_SALUTE\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_SALUTE;
    /**
     * @symbol ?POSE_SOLEMN\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_SOLEMN;
    /**
     * @symbol ?POSE_ZERO_ROTATION\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_ZERO_ROTATION;
    /**
     * @symbol ?POSE_ZOMBIE\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_ZOMBIE;
    /**
     * @symbol ?STAND_POSES\@ArmorStand\@\@0PAPEBUPose\@1\@A
     */
    MCAPI static struct ArmorStand::Pose const* STAND_POSES[];
    // NOLINTEND
};
