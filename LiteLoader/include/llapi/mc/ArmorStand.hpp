/**
 * @file  MC/ArmorStand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~ArmorStand();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   735285492
     * @vftbl  48
     * @symbol ?normalTick@ArmorStand@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   999945215
     * @vftbl  79
     * @symbol ?getShadowRadius@ArmorStand@@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
    /**
     * @hash   -1259537225
     * @vftbl  94
     * @symbol ?isPickable@ArmorStand@@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl  95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @symbol __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @hash   -1314713675
     * @vftbl  134
     * @symbol ?isInvulnerableTo@ArmorStand@@UEBA_NAEBVActorDamageSource@@@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  221
     * @symbol __unk_vfn_221
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @hash   -811658288
     * @vftbl  238
     * @symbol ?getInteraction@ArmorStand@@UEAA_NAEAVPlayer@@AEAVActorInteraction@@AEBVVec3@@@Z
     */
    virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
    /**
     * @vftbl  248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @symbol __unk_vfn_251
     */
    virtual void __unk_vfn_251();
    /**
     * @hash   -14235142
     * @vftbl  253
     * @symbol ?die@ArmorStand@@UEAAXAEBVActorDamageSource@@@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @hash   -365023521
     * @vftbl  268
     * @symbol ?updateEntitySpecificMolangVariables@ArmorStand@@UEAAXAEAVRenderParams@@@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   7501504
     * @vftbl  271
     * @symbol ?_hurt@ArmorStand@@UEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -1250126848
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@ArmorStand@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   855608253
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@ArmorStand@@UEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   199930008
     * @vftbl  302
     * @symbol ?pushActors@ArmorStand@@UEAAXXZ
     */
    virtual void pushActors();
    /**
     * @vftbl  313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @vftbl  317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @vftbl  351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARMORSTAND
    /**
     * @hash   1573520353
     * @symbol ?interactPreventDefault@ArmorStand@@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault();
#endif
    /**
     * @hash   1549166659
     * @symbol ??0ArmorStand@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI ArmorStand(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -2072453674
     * @symbol ?setPoseIndex@ArmorStand@@QEAAXH@Z
     */
    MCAPI void setPoseIndex(int);

//private:
    /**
     * @hash   -528048812
     * @symbol ?_causeDamage@ArmorStand@@AEAAXM@Z
     */
    MCAPI void _causeDamage(float);
    /**
     * @hash   -1760488076
     * @symbol ?_destroyWithEffects@ArmorStand@@AEAAXAEBVVec3@@@Z
     */
    MCAPI void _destroyWithEffects(class Vec3 const &);
    /**
     * @hash   -1821759934
     * @symbol ?_dropHeldItems@ArmorStand@@AEAAXXZ
     */
    MCAPI void _dropHeldItems();
    /**
     * @hash   551779341
     * @symbol ?_dropHeldItemsAndResource@ArmorStand@@AEAAXXZ
     */
    MCAPI void _dropHeldItemsAndResource();
    /**
     * @hash   -571605890
     * @symbol ?_dropItem@ArmorStand@@AEAAXAEBVItemStack@@@Z
     */
    MCAPI void _dropItem(class ItemStack const &);
    /**
     * @hash   111112580
     * @symbol ?_trySwapItem@ArmorStand@@AEAA_NAEAVPlayer@@W4EquipmentSlot@@@Z
     */
    MCAPI bool _trySwapItem(class Player &, enum EquipmentSlot);

private:
    /**
     * @hash   552815583
     * @symbol ?POSE_ATHENA@ArmorStand@@0UPose@1@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_ATHENA;
    /**
     * @hash   684109235
     * @symbol ?POSE_BRANDISH@ArmorStand@@0UPose@1@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_BRANDISH;
    /**
     * @hash   -601377986
     * @symbol ?POSE_CANCAN_A@ArmorStand@@0UPose@1@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_A;
    /**
     * @hash   1550388991
     * @symbol ?POSE_CANCAN_B@ArmorStand@@0UPose@1@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_B;
    /**
     * @hash   -598430559
     * @symbol ?POSE_DEFAULT@ArmorStand@@0UPose@1@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_DEFAULT;
    /**
     * @hash   -1434592854
     * @symbol ?POSE_ENTERTAIN@ArmorStand@@0UPose@1@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_ENTERTAIN;
    /**
     * @hash   796021302
     * @symbol ?POSE_HERO@ArmorStand@@0UPose@1@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_HERO;
    /**
     * @hash   359851914
     * @symbol ?POSE_HONOR@ArmorStand@@0UPose@1@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_HONOR;
    /**
     * @hash   1314695470
     * @symbol ?POSE_RIPOSTE@ArmorStand@@0UPose@1@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_RIPOSTE;
    /**
     * @hash   -923996892
     * @symbol ?POSE_SALUTE@ArmorStand@@0UPose@1@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_SALUTE;
    /**
     * @hash   493955762
     * @symbol ?POSE_SOLEMN@ArmorStand@@0UPose@1@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_SOLEMN;
    /**
     * @hash   -1240981483
     * @symbol ?POSE_ZERO_ROTATION@ArmorStand@@0UPose@1@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_ZERO_ROTATION;
    /**
     * @hash   -1845689278
     * @symbol ?POSE_ZOMBIE@ArmorStand@@0UPose@1@B
     */
    MCAPI static struct ArmorStand::Pose const POSE_ZOMBIE;
    /**
     * @hash   -1563150078
     * @symbol ?STAND_POSES@ArmorStand@@0PAPEBUPose@1@A
     */
    MCAPI static struct ArmorStand::Pose const * STAND_POSES[];

};