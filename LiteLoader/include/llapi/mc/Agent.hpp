/**
 * @file  Agent.hpp
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
     * @hash   -2146609749
     * @vftbl  12
     * @symbol  ?initializeComponents\@Agent\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~Agent();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   -596144862
     * @vftbl  44
     * @symbol  ?teleportTo\@Agent\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @hash   399920486
     * @vftbl  49
     * @symbol  ?normalTick\@Agent\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @hash   -442073338
     * @vftbl  60
     * @symbol  ?isInvisible\@Agent\@\@UEBA_NXZ
     */
    virtual bool isInvisible() const;
    /**
     * @hash   -1732533659
     * @vftbl  61
     * @symbol  ?canShowNameTag\@Agent\@\@UEBA_NXZ
     */
    virtual bool canShowNameTag() const;
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @hash   35323774
     * @vftbl  66
     * @symbol  ?getFormattedNameTag\@Agent\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getFormattedNameTag() const;
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
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
     * @hash   -1304319735
     * @vftbl  96
     * @symbol  ?isPickable\@Agent\@\@UEAA_NXZ
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
     * @hash   -1874884751
     * @vftbl  142
     * @symbol  ?handleEntityEvent\@Agent\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @hash   1374043159
     * @vftbl  159
     * @symbol  ?setCarriedItem\@Agent\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setCarriedItem(class ItemStack const &);
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @hash   1007041704
     * @vftbl  191
     * @symbol  ?canBePulledIntoVehicle\@Agent\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @hash   -1510802754
     * @vftbl  208
     * @symbol  ?canBeAffected\@Agent\@\@UEBA_NI\@Z
     */
    virtual bool canBeAffected(unsigned int) const;
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
     * @hash   -69918154
     * @vftbl  223
     * @symbol  ?isWorldBuilder\@Agent\@\@UEBA_NXZ
     */
    virtual bool isWorldBuilder() const;
    /**
     * @hash   -402698263
     * @vftbl  225
     * @symbol  ?isAdventure\@Agent\@\@UEBA_NXZ
     */
    virtual bool isAdventure() const;
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
     * @hash   -983615312
     * @vftbl  245
     * @symbol  ?kill\@Agent\@\@UEAAXXZ
     */
    virtual void kill();
    /**
     * @hash   1238093709
     * @vftbl  260
     * @symbol  ?updateEntitySpecificMolangVariables\@Agent\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   -1276384636
     * @vftbl  263
     * @symbol  ?_hurt\@Agent\@\@EEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
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
     * @hash   -437452791
     * @vftbl  278
     * @symbol  ?knockback\@Agent\@\@UEAAXPEAVActor\@\@HMMMMM\@Z
     */
    virtual void knockback(class Actor *, int, float, float, float, float, float);
    /**
     * @vftbl  285
     * @symbol  __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -674536042
     * @vftbl  289
     * @symbol  ?travel\@Agent\@\@UEAAXMMM\@Z
     */
    virtual void travel(float, float, float);
    /**
     * @hash   1296951318
     * @vftbl  291
     * @symbol  ?aiStep\@Agent\@\@UEAAXXZ
     */
    virtual void aiStep();
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
     * @hash   1846880960
     * @vftbl  334
     * @symbol  ?createAIGoals\@Agent\@\@UEAA_NXZ
     */
    virtual bool createAIGoals();
    /**
     * @hash   1499502183
     * @vftbl  341
     * @symbol  ?canExistWhenDisallowMob\@Agent\@\@UEBA_NXZ
     */
    virtual bool canExistWhenDisallowMob() const;
    /**
     * @hash   1378552250
     * @vftbl  346
     * @symbol  ?initBodyControl\@Agent\@\@EEAA?AV?$unique_ptr\@VBodyControl\@\@U?$default_delete\@VBodyControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENT
    /**
     * @hash   956692636
     * @symbol  ?breaksFallingBlocks\@Agent\@\@UEBA_NXZ
     */
    MCVAPI bool breaksFallingBlocks() const;
    /**
     * @hash   150440432
     * @symbol  ?getAlwaysShowNameTag\@Agent\@\@UEBA_NXZ
     */
    MCVAPI bool getAlwaysShowNameTag() const;
    /**
     * @hash   -2102316285
     * @symbol  ?interactPreventDefault\@Agent\@\@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault();
    /**
     * @hash   -730179736
     * @symbol  ?isTargetable\@Agent\@\@UEBA_NXZ
     */
    MCVAPI bool isTargetable() const;
#endif
    /**
     * @hash   1257518145
     * @symbol  ??0Agent\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Agent(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol  ?checkTravelType\@Agent\@\@QEAA?AW4AgentTravelType\@\@XZ
     */
    MCAPI enum class AgentTravelType checkTravelType();
    /**
     * @symbol  ?doClientTravel\@Agent\@\@QEAAXAEBVAABB\@\@\@Z
     */
    MCAPI void doClientTravel(class AABB const &);
    /**
     * @symbol  ?doServerTravel\@Agent\@\@QEAA?AVVec3\@\@AEBVAABB\@\@W4AgentTravelType\@\@\@Z
     */
    MCAPI class Vec3 doServerTravel(class AABB const &, enum class AgentTravelType);
    /**
     * @hash   1460315036
     * @symbol  ?getMoveSpeedScalar\@Agent\@\@QEBAMXZ
     */
    MCAPI float getMoveSpeedScalar() const;
    /**
     * @hash   507522022
     * @symbol  ?getSelectedSlot\@Agent\@\@QEBAHXZ
     */
    MCAPI int getSelectedSlot() const;
    /**
     * @hash   -505338923
     * @symbol  ?isValidSlotNum\@Agent\@\@QEAA_NH\@Z
     */
    MCAPI bool isValidSlotNum(int);
    /**
     * @hash   223370156
     * @symbol  ?setMoveTarget\@Agent\@\@QEAAXM\@Z
     */
    MCAPI void setMoveTarget(float);
    /**
     * @hash   836990168
     * @symbol  ?setMoveTarget\@Agent\@\@QEAAXVVec2\@\@\@Z
     */
    MCAPI void setMoveTarget(class Vec2);
    /**
     * @hash   91847458
     * @symbol  ?setNameTagFromOwner\@Agent\@\@QEAAXAEBVPlayer\@\@\@Z
     */
    MCAPI void setNameTagFromOwner(class Player const &);
    /**
     * @hash   -493118005
     * @symbol  ?startCommandMode\@Agent\@\@QEAAXXZ
     */
    MCAPI void startCommandMode();
    /**
     * @hash   1017170765
     * @symbol  ?stopCommandMode\@Agent\@\@QEAAXXZ
     */
    MCAPI void stopCommandMode();
    /**
     * @hash   1125836308
     * @symbol  ?swingAnimationCompleted\@Agent\@\@QEAA_NXZ
     */
    MCAPI bool swingAnimationCompleted();
    /**
     * @hash   837189375
     * @symbol  ?swingArm\@Agent\@\@QEAAXXZ
     */
    MCAPI void swingArm();
    /**
     * @hash   1734432994
     * @symbol  ?tryFireCreateEvent\@Agent\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void tryFireCreateEvent(class Player &);
    /**
     * @hash   -932439014
     * @symbol  ?roundTeleportPos\@Agent\@\@SA?AVVec3\@\@AEBV2\@\@Z
     */
    MCAPI static class Vec3 roundTeleportPos(class Vec3 const &);
    /**
     * @hash   -1371615899
     * @symbol  ?tryGetFromEntity\@Agent\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class Agent * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @symbol  ?_isOnGround\@Agent\@\@AEAA_NAEBVAABB\@\@\@Z
     */
    MCAPI bool _isOnGround(class AABB const &);

private:

};