/**
 * @file  Agent.hpp
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
 * @brief MC class Agent.
 *
 */
class Agent : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENT
public:
    class Agent& operator=(class Agent const &) = delete;
    Agent(class Agent const &) = delete;
    Agent() = delete;
#endif

public:
    /**
     * @hash   -1494498213
     * @vftbl  10
     * @symbol ?initializeComponents@Agent@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Agent();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   55889794
     * @vftbl  43
     * @symbol ?teleportTo@Agent@@UEAAXAEBVVec3@@_NHH1@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @hash   1052062774
     * @vftbl  48
     * @symbol ?normalTick@Agent@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @hash   210068950
     * @vftbl  58
     * @symbol ?isInvisible@Agent@@UEBA_NXZ
     */
    virtual bool isInvisible() const;
    /**
     * @hash   -1832431531
     * @vftbl  59
     * @symbol ?canShowNameTag@Agent@@UEBA_NXZ
     */
    virtual bool canShowNameTag() const;
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @hash   687481438
     * @vftbl  64
     * @symbol ?getFormattedNameTag@Agent@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getFormattedNameTag() const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
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
     * @hash   -652177447
     * @vftbl  94
     * @symbol ?isPickable@Agent@@UEAA_NXZ
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
     * @hash   -1222773215
     * @vftbl  141
     * @symbol ?handleEntityEvent@Agent@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @hash   2026154695
     * @vftbl  160
     * @symbol ?setCarriedItem@Agent@@UEAAXAEBVItemStack@@@Z
     */
    virtual void setCarriedItem(class ItemStack const &);
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @hash   906421160
     * @vftbl  193
     * @symbol ?canBePulledIntoVehicle@Agent@@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @hash   -657005209
     * @vftbl  211
     * @symbol ?canBeAffected@Agent@@UEBA_NAEBVMobEffectInstance@@@Z
     */
    virtual bool canBeAffected(class MobEffectInstance const &) const;
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
     * @hash   582224134
     * @vftbl  230
     * @symbol ?isWorldBuilder@Agent@@UEBA_NXZ
     */
    virtual bool isWorldBuilder() const;
    /**
     * @hash   249474777
     * @vftbl  232
     * @symbol ?isAdventure@Agent@@UEBA_NXZ
     */
    virtual bool isAdventure() const;
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
     * @hash   -331473024
     * @vftbl  252
     * @symbol ?kill@Agent@@UEAAXXZ
     */
    virtual void kill();
    /**
     * @hash   1887868093
     * @vftbl  268
     * @symbol ?updateEntitySpecificMolangVariables@Agent@@UEAAXAEAVRenderParams@@@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   -625180284
     * @vftbl  271
     * @symbol ?_hurt@Agent@@EEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
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
     * @hash   -529339767
     * @vftbl  286
     * @symbol ?knockback@Agent@@UEAAXPEAVActor@@HMMMMM@Z
     */
    virtual void knockback(class Actor *, int, float, float, float, float, float);
    /**
     * @hash   -23854474
     * @vftbl  297
     * @symbol ?travel@Agent@@UEAAXMMM@Z
     */
    virtual void travel(float, float, float);
    /**
     * @hash   1948124918
     * @vftbl  300
     * @symbol ?aiStep@Agent@@UEAAXXZ
     */
    virtual void aiStep();
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
     * @hash   -1796912736
     * @vftbl  343
     * @symbol ?createAIGoals@Agent@@UEAA_NXZ
     */
    virtual bool createAIGoals();
    /**
     * @hash   1399604311
     * @vftbl  350
     * @symbol ?canExistWhenDisallowMob@Agent@@UEBA_NXZ
     */
    virtual bool canExistWhenDisallowMob() const;
    /**
     * @vftbl  351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @hash   2030663786
     * @vftbl  356
     * @symbol ?initBodyControl@Agent@@EEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENT
    /**
     * @hash   856794764
     * @symbol ?breaksFallingBlocks@Agent@@UEBA_NXZ
     */
    MCVAPI bool breaksFallingBlocks() const;
    /**
     * @hash   50542560
     * @symbol ?getAlwaysShowNameTag@Agent@@UEBA_NXZ
     */
    MCVAPI bool getAlwaysShowNameTag() const;
    /**
     * @hash   2092753139
     * @symbol ?interactPreventDefault@Agent@@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault();
    /**
     * @hash   -830800280
     * @symbol ?isTargetable@Agent@@UEBA_NXZ
     */
    MCVAPI bool isTargetable() const;
#endif
    /**
     * @hash   1909352913
     * @symbol ??0Agent@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Agent(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -563215022
     * @symbol ?doServerTravel@Agent@@QEAA?AVVec3@@VAABB@@W4AgentTravelType@@@Z
     */
    MCAPI class Vec3 doServerTravel(class AABB, enum AgentTravelType);
    /**
     * @hash   2112457324
     * @symbol ?getMoveSpeedScalar@Agent@@QEBAMXZ
     */
    MCAPI float getMoveSpeedScalar() const;
    /**
     * @hash   1159648934
     * @symbol ?getSelectedSlot@Agent@@QEBAHXZ
     */
    MCAPI int getSelectedSlot() const;
    /**
     * @hash   146803365
     * @symbol ?isValidSlotNum@Agent@@QEAA_NH@Z
     */
    MCAPI bool isValidSlotNum(int);
    /**
     * @hash   -693055530
     * @symbol ?setMoveTarget@Agent@@QEAAXAEBVVec3@@@Z
     */
    MCAPI void setMoveTarget(class Vec3 const &);
    /**
     * @hash   743928242
     * @symbol ?setNameTagFromOwner@Agent@@QEAAXAEBVPlayer@@@Z
     */
    MCAPI void setNameTagFromOwner(class Player const &);
    /**
     * @hash   158947403
     * @symbol ?startCommandMode@Agent@@QEAAXXZ
     */
    MCAPI void startCommandMode();
    /**
     * @hash   1669220797
     * @symbol ?stopCommandMode@Agent@@QEAAXXZ
     */
    MCAPI void stopCommandMode();
    /**
     * @hash   1777870964
     * @symbol ?swingAnimationCompleted@Agent@@QEAA_NXZ
     */
    MCAPI bool swingAnimationCompleted();
    /**
     * @hash   1489224031
     * @symbol ?swingArm@Agent@@QEAAXXZ
     */
    MCAPI void swingArm();
    /**
     * @hash   -1910759918
     * @symbol ?tryFireCreateEvent@Agent@@QEAAXAEAVPlayer@@@Z
     */
    MCAPI void tryFireCreateEvent(class Player &);
    /**
     * @hash   -280327478
     * @symbol ?roundTeleportPos@Agent@@SA?AVVec3@@AEBV2@@Z
     */
    MCAPI static class Vec3 roundTeleportPos(class Vec3 const &);
    /**
     * @hash   -721841515
     * @symbol ?tryGetFromEntity@Agent@@SAPEAV1@AEAVEntityContext@@_N@Z
     */
    MCAPI static class Agent * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @hash   -768114724
     * @symbol ?_getContainerComponent@Agent@@AEAAPEAVContainerComponent@@XZ
     */
    MCAPI class ContainerComponent * _getContainerComponent();

private:

};