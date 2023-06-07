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
     * @vftbl 12
     * @symbol ?initializeComponents\@Agent\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
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
     * @vftbl 43
     * @symbol ?teleportTo\@Agent\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @vftbl 48
     * @symbol ?normalTick\@Agent\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl 59
     * @symbol ?isInvisible\@Agent\@\@UEBA_NXZ
     */
    virtual bool isInvisible() const;
    /**
     * @vftbl 60
     * @symbol ?canShowNameTag\@Agent\@\@UEBA_NXZ
     */
    virtual bool canShowNameTag() const;
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 65
     * @symbol ?getFormattedNameTag\@Agent\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getFormattedNameTag() const;
    /**
     * @vftbl 68
     * @symbol __unk_vfn_68
     */
    virtual void __unk_vfn_68();
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
     * @symbol ?isPickable\@Agent\@\@UEAA_NXZ
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
     * @vftbl 117
     * @symbol ?setOwner\@Agent\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void setOwner(struct ActorUniqueID);
    /**
     * @vftbl 139
     * @symbol ?handleEntityEvent\@Agent\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 156
     * @symbol ?setCarriedItem\@Agent\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setCarriedItem(class ItemStack const &);
    /**
     * @vftbl 176
     * @symbol __unk_vfn_176
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl 188
     * @symbol ?canBePulledIntoVehicle\@Agent\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @vftbl 190
     * @symbol __unk_vfn_190
     */
    virtual void __unk_vfn_190();
    /**
     * @vftbl 205
     * @symbol ?canBeAffected\@Agent\@\@UEBA_NI\@Z
     */
    virtual bool canBeAffected(unsigned int) const;
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
     * @symbol ?kill\@Agent\@\@UEAAXXZ
     */
    virtual void kill();
    /**
     * @vftbl 250
     * @symbol ?updateEntitySpecificMolangVariables\@Agent\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl 252
     * @symbol __unk_vfn_252
     */
    virtual void __unk_vfn_252();
    /**
     * @vftbl 253
     * @symbol ?_hurt\@Agent\@\@EEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
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
     * @vftbl 268
     * @symbol ?knockback\@Agent\@\@UEAAXPEAVActor\@\@HMMMMM\@Z
     */
    virtual void knockback(class Actor *, int, float, float, float, float, float);
    /**
     * @vftbl 278
     * @symbol ?travel\@Agent\@\@UEAAXMMM_N\@Z
     */
    virtual void travel(float, float, float, bool);
    /**
     * @vftbl 280
     * @symbol ?aiStep\@Agent\@\@UEAAXXZ
     */
    virtual void aiStep();
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
     * @vftbl 323
     * @symbol ?createAIGoals\@Agent\@\@UEAA_NXZ
     */
    virtual bool createAIGoals();
    /**
     * @vftbl 330
     * @symbol ?canExistWhenDisallowMob\@Agent\@\@UEBA_NXZ
     */
    virtual bool canExistWhenDisallowMob() const;
    /**
     * @vftbl 335
     * @symbol ?initBodyControl\@Agent\@\@EEAA?AV?$unique_ptr\@VBodyControl\@\@U?$default_delete\@VBodyControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @vftbl 343
     * @symbol __unk_vfn_343
     */
    virtual void __unk_vfn_343();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENT
    /**
     * @symbol ?breaksFallingBlocks\@Agent\@\@UEBA_NXZ
     */
    MCVAPI bool breaksFallingBlocks() const;
    /**
     * @symbol ?getAlwaysShowNameTag\@Agent\@\@UEBA_NXZ
     */
    MCVAPI bool getAlwaysShowNameTag() const;
    /**
     * @symbol ?interactPreventDefault\@Agent\@\@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault();
    /**
     * @symbol ?isTargetable\@Agent\@\@UEBA_NXZ
     */
    MCVAPI bool isTargetable() const;
#endif
    /**
     * @symbol ??0Agent\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Agent(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?checkTravelType\@Agent\@\@QEAA?AW4AgentTravelType\@\@XZ
     */
    MCAPI enum class AgentTravelType checkTravelType();
    /**
     * @symbol ?doClientTravel\@Agent\@\@QEAAXAEBVAABB\@\@\@Z
     */
    MCAPI void doClientTravel(class AABB const &);
    /**
     * @symbol ?doServerTravel\@Agent\@\@QEAA?AVVec3\@\@AEBVAABB\@\@W4AgentTravelType\@\@\@Z
     */
    MCAPI class Vec3 doServerTravel(class AABB const &, enum class AgentTravelType);
    /**
     * @symbol ?getMoveSpeedScalar\@Agent\@\@QEBAMXZ
     */
    MCAPI float getMoveSpeedScalar() const;
    /**
     * @symbol ?getSelectedSlot\@Agent\@\@QEBAHXZ
     */
    MCAPI int getSelectedSlot() const;
    /**
     * @symbol ?isValidSlotNum\@Agent\@\@QEAA_NH\@Z
     */
    MCAPI bool isValidSlotNum(int);
    /**
     * @symbol ?setGameType\@Agent\@\@QEAAXW4GameType\@\@\@Z
     */
    MCAPI void setGameType(enum class GameType);
    /**
     * @symbol ?setMoveTarget\@Agent\@\@QEAAXM\@Z
     */
    MCAPI void setMoveTarget(float);
    /**
     * @symbol ?setMoveTarget\@Agent\@\@QEAAXVVec2\@\@\@Z
     */
    MCAPI void setMoveTarget(class Vec2);
    /**
     * @symbol ?setNameTagFromOwner\@Agent\@\@QEAAXAEBVPlayer\@\@\@Z
     */
    MCAPI void setNameTagFromOwner(class Player const &);
    /**
     * @symbol ?startCommandMode\@Agent\@\@QEAAXXZ
     */
    MCAPI void startCommandMode();
    /**
     * @symbol ?stopCommandMode\@Agent\@\@QEAAXXZ
     */
    MCAPI void stopCommandMode();
    /**
     * @symbol ?swingAnimationCompleted\@Agent\@\@QEAA_NXZ
     */
    MCAPI bool swingAnimationCompleted();
    /**
     * @symbol ?swingArm\@Agent\@\@QEAAXXZ
     */
    MCAPI void swingArm();
    /**
     * @symbol ?tryFireCreateEvent\@Agent\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void tryFireCreateEvent(class Player &);
    /**
     * @symbol ?roundTeleportPos\@Agent\@\@SA?AVVec3\@\@AEBV2\@\@Z
     */
    MCAPI static class Vec3 roundTeleportPos(class Vec3 const &);
    /**
     * @symbol ?tryGetFromEntity\@Agent\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class Agent * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @symbol ?_isOnGround\@Agent\@\@AEAA_NAEBVAABB\@\@\@Z
     */
    MCAPI bool _isOnGround(class AABB const &);

private:

};
