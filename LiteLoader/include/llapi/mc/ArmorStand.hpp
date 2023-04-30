/**
 * @file  ArmorStand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ArmorStand.
 *
 */
class ArmorStand : public Mob {

#define AFTER_EXTRA
// Add Member There
public:
struct Pose {
    Pose() = delete;
    Pose(Pose const&) = delete;
    Pose(Pose const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORSTAND
public:
    class ArmorStand& operator=(class ArmorStand const &) = delete;
    ArmorStand(class ArmorStand const &) = delete;
    ArmorStand() = delete;
#endif

public:
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 49
     * @symbol ?normalTick\@ArmorStand\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 69
     * @symbol __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl 80
     * @symbol ?getShadowRadius\@ArmorStand\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl 85
     * @symbol __unk_vfn_85
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl 88
     * @symbol __unk_vfn_88
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl 95
     * @symbol ?isPickable\@ArmorStand\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 99
     * @symbol __unk_vfn_99
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 111
     * @symbol __unk_vfn_111
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl 134
     * @symbol ?isInvulnerableTo\@ArmorStand\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 192
     * @symbol __unk_vfn_192
     */
    virtual void __unk_vfn_192();
    /**
     * @vftbl 217
     * @symbol __unk_vfn_217
     */
    virtual void __unk_vfn_217();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 230
     * @symbol ?getInteraction\@ArmorStand\@\@UEAA_NAEAVPlayer\@\@AEAVActorInteraction\@\@AEBVVec3\@\@\@Z
     */
    virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
    /**
     * @vftbl 240
     * @symbol __unk_vfn_240
     */
    virtual void __unk_vfn_240();
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 244
     * @symbol ?kill\@ArmorStand\@\@UEAAXXZ
     */
    virtual void kill();
    /**
     * @vftbl 245
     * @symbol ?die\@ArmorStand\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl 258
     * @symbol ?updateEntitySpecificMolangVariables\@ArmorStand\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 261
     * @symbol ?_hurt\@ArmorStand\@\@UEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 264
     * @symbol ?readAdditionalSaveData\@ArmorStand\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 265
     * @symbol ?addAdditionalSaveData\@ArmorStand\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl 275
     * @symbol __unk_vfn_275
     */
    virtual void __unk_vfn_275();
    /**
     * @vftbl 290
     * @symbol ?pushActors\@ArmorStand\@\@UEAAXXZ
     */
    virtual void pushActors();
    /**
     * @vftbl 301
     * @symbol __unk_vfn_301
     */
    virtual void __unk_vfn_301();
    /**
     * @vftbl 305
     * @symbol __unk_vfn_305
     */
    virtual void __unk_vfn_305();
    /**
     * @vftbl 351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARMORSTAND
    /**
     * @symbol ?interactPreventDefault\@ArmorStand\@\@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault();
#endif
    /**
     * @symbol ??0ArmorStand\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI ArmorStand(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

//private:
    /**
     * @symbol ?_causeDamage\@ArmorStand\@\@AEAAXM\@Z
     */
    MCAPI void _causeDamage(float);
    /**
     * @symbol ?_destroyWithEffects\@ArmorStand\@\@AEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void _destroyWithEffects(class Vec3 const &);
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
    MCAPI void _dropItem(class ItemStack const &);
    /**
     * @symbol ?_trySwapItem\@ArmorStand\@\@AEAA_NAEAVPlayer\@\@W4EquipmentSlot\@\@\@Z
     */
    MCAPI bool _trySwapItem(class Player &, enum class EquipmentSlot);

private:
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
    MCAPI static struct ArmorStand::Pose const * STAND_POSES[];

};
