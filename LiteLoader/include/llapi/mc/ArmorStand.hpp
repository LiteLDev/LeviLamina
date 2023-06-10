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
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl 48
     * @symbol ?normalTick\@ArmorStand\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 68
     * @symbol __unk_vfn_68
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl 78
     * @symbol ?getShadowRadius\@ArmorStand\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 93
     * @symbol ?isPickable\@ArmorStand\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 104
     * @symbol __unk_vfn_104
     */
    virtual void __unk_vfn_104();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 132
     * @symbol ?isInvulnerableTo\@ArmorStand\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl 176
     * @symbol __unk_vfn_176
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl 190
     * @symbol __unk_vfn_190
     */
    virtual void __unk_vfn_190();
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 216
     * @symbol __unk_vfn_216
     */
    virtual void __unk_vfn_216();
    /**
     * @vftbl 222
     * @symbol ?getInteraction\@ArmorStand\@\@UEAA_NAEAVPlayer\@\@AEAVActorInteraction\@\@AEBVVec3\@\@\@Z
     */
    virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
    /**
     * @vftbl 232
     * @symbol __unk_vfn_232
     */
    virtual void __unk_vfn_232();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 236
     * @symbol ?kill\@ArmorStand\@\@UEAAXXZ
     */
    virtual void kill();
    /**
     * @vftbl 237
     * @symbol ?die\@ArmorStand\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl 250
     * @symbol ?updateEntitySpecificMolangVariables\@ArmorStand\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl 252
     * @symbol __unk_vfn_252
     */
    virtual void __unk_vfn_252();
    /**
     * @vftbl 253
     * @symbol ?_hurt\@ArmorStand\@\@UEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 256
     * @symbol ?readAdditionalSaveData\@ArmorStand\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 257
     * @symbol ?addAdditionalSaveData\@ArmorStand\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 267
     * @symbol __unk_vfn_267
     */
    virtual void __unk_vfn_267();
    /**
     * @vftbl 282
     * @symbol ?pushActors\@ArmorStand\@\@UEAAXXZ
     */
    virtual void pushActors();
    /**
     * @vftbl 293
     * @symbol __unk_vfn_293
     */
    virtual void __unk_vfn_293();
    /**
     * @vftbl 297
     * @symbol __unk_vfn_297
     */
    virtual void __unk_vfn_297();
    /**
     * @vftbl 343
     * @symbol __unk_vfn_343
     */
    virtual void __unk_vfn_343();
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
