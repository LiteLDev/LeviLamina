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
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~ArmorStand();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  49
     * @symbol  ?normalTick\@ArmorStand\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl  81
     * @symbol  ?getShadowRadius\@ArmorStand\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @vftbl  96
     * @symbol  ?isPickable\@ArmorStand\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @vftbl  135
     * @symbol  ?isInvulnerableTo\@ArmorStand\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl  231
     * @symbol  ?getInteraction\@ArmorStand\@\@UEAA_NAEAVPlayer\@\@AEAVActorInteraction\@\@AEBVVec3\@\@\@Z
     */
    virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @vftbl  246
     * @symbol  ?die\@ArmorStand\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl  260
     * @symbol  ?updateEntitySpecificMolangVariables\@ArmorStand\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @vftbl  263
     * @symbol  ?_hurt\@ArmorStand\@\@UEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@ArmorStand\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@ArmorStand\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @symbol  __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @vftbl  293
     * @symbol  ?pushActors\@ArmorStand\@\@UEAAXXZ
     */
    virtual void pushActors();
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @vftbl  308
     * @symbol  __unk_vfn_308
     */
    virtual void __unk_vfn_308();
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARMORSTAND
    /**
     * @symbol  ?interactPreventDefault\@ArmorStand\@\@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault();
#endif
    /**
     * @symbol  ??0ArmorStand\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI ArmorStand(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol  ?setPoseIndex\@ArmorStand\@\@QEAAXH\@Z
     */
    MCAPI void setPoseIndex(int);

//private:
    /**
     * @symbol  ?_causeDamage\@ArmorStand\@\@AEAAXM\@Z
     */
    MCAPI void _causeDamage(float);
    /**
     * @symbol  ?_destroyWithEffects\@ArmorStand\@\@AEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void _destroyWithEffects(class Vec3 const &);
    /**
     * @symbol  ?_dropHeldItems\@ArmorStand\@\@AEAAXXZ
     */
    MCAPI void _dropHeldItems();
    /**
     * @symbol  ?_dropHeldItemsAndResource\@ArmorStand\@\@AEAAXXZ
     */
    MCAPI void _dropHeldItemsAndResource();
    /**
     * @symbol  ?_dropItem\@ArmorStand\@\@AEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void _dropItem(class ItemStack const &);
    /**
     * @symbol  ?_trySwapItem\@ArmorStand\@\@AEAA_NAEAVPlayer\@\@W4EquipmentSlot\@\@\@Z
     */
    MCAPI bool _trySwapItem(class Player &, enum class EquipmentSlot);

private:
    /**
     * @symbol  ?POSE_ATHENA\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_ATHENA;
    /**
     * @symbol  ?POSE_BRANDISH\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_BRANDISH;
    /**
     * @symbol  ?POSE_CANCAN_A\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_A;
    /**
     * @symbol  ?POSE_CANCAN_B\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_B;
    /**
     * @symbol  ?POSE_DEFAULT\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_DEFAULT;
    /**
     * @symbol  ?POSE_ENTERTAIN\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_ENTERTAIN;
    /**
     * @symbol  ?POSE_HERO\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_HERO;
    /**
     * @symbol  ?POSE_HONOR\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_HONOR;
    /**
     * @symbol  ?POSE_RIPOSTE\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_RIPOSTE;
    /**
     * @symbol  ?POSE_SALUTE\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_SALUTE;
    /**
     * @symbol  ?POSE_SOLEMN\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_SOLEMN;
    /**
     * @symbol  ?POSE_ZERO_ROTATION\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_ZERO_ROTATION;
    /**
     * @symbol  ?POSE_ZOMBIE\@ArmorStand\@\@0UPose\@1\@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_ZOMBIE;
    /**
     * @symbol  ?STAND_POSES\@ArmorStand\@\@0PAPEBUPose\@1\@A
     */
    MCAPI static struct ArmorStand::Pose const * STAND_POSES[];

};