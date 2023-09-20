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
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 38
     * @symbol ?teleportTo\@Agent\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @vftbl 43
     * @symbol ?normalTick\@Agent\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl 52
     * @symbol ?isInvisible\@Agent\@\@UEBA_NXZ
     */
    virtual bool isInvisible() const;
    /**
     * @vftbl 53
     * @symbol ?canShowNameTag\@Agent\@\@UEBA_NXZ
     */
    virtual bool canShowNameTag() const;
    /**
     * @vftbl 54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl 58
     * @symbol ?getFormattedNameTag\@Agent\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getFormattedNameTag() const;
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl 81
     * @symbol ?isPickable\@Agent\@\@UEAA_NXZ
     */
    virtual bool isPickable();
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
     * @vftbl 92
     * @symbol __unk_vfn_92
     */
    virtual void __unk_vfn_92();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 105
     * @symbol ?setOwner\@Agent\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void setOwner(struct ActorUniqueID);
    /**
     * @vftbl 125
     * @symbol ?handleEntityEvent\@Agent\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 142
     * @symbol ?setCarriedItem\@Agent\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setCarriedItem(class ItemStack const &);
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 172
     * @symbol ?canBePulledIntoVehicle\@Agent\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 188
     * @symbol ?canBeAffected\@Agent\@\@UEBA_NI\@Z
     */
    virtual bool canBeAffected(unsigned int) const;
    /**
     * @vftbl 198
     * @symbol __unk_vfn_198
     */
    virtual void __unk_vfn_198();
    /**
     * @vftbl 199
     * @symbol __unk_vfn_199
     */
    virtual void __unk_vfn_199();
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 219
     * @symbol ?kill\@Agent\@\@UEAAXXZ
     */
    virtual void kill();
    /**
     * @vftbl 233
     * @symbol ?updateEntitySpecificMolangVariables\@Agent\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 236
     * @symbol ?_hurt\@Agent\@\@EEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl 249
     * @symbol ?knockback\@Agent\@\@UEAAXPEAVActor\@\@HMMMMM\@Z
     */
    virtual void knockback(class Actor *, int, float, float, float, float, float);
    /**
     * @vftbl 270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl 274
     * @symbol __unk_vfn_274
     */
    virtual void __unk_vfn_274();
    /**
     * @vftbl 300
     * @symbol ?createAIGoals\@Agent\@\@UEAA_NXZ
     */
    virtual bool createAIGoals();
    /**
     * @vftbl 307
     * @symbol ?canExistWhenDisallowMob\@Agent\@\@UEBA_NXZ
     */
    virtual bool canExistWhenDisallowMob() const;
    /**
     * @vftbl 311
     * @symbol ?initBodyControl\@Agent\@\@EEAA?AV?$unique_ptr\@VBodyControl\@\@U?$default_delete\@VBodyControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
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
     * @symbol ?handleAnimationEvent\@Agent\@\@QEAAXW4AgentAnimation\@\@\@Z
     */
    MCAPI void handleAnimationEvent(enum class AgentAnimation);
    /**
     * @symbol ?isEmoting\@Agent\@\@QEBA_NXZ
     */
    MCAPI bool isEmoting() const;
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
     * @symbol ?shrug\@Agent\@\@QEAAXXZ
     */
    MCAPI void shrug();
    /**
     * @symbol ?startCommandMode\@Agent\@\@QEAAXXZ
     */
    MCAPI void startCommandMode();
    /**
     * @symbol ?stopCommandMode\@Agent\@\@QEAAXXZ
     */
    MCAPI void stopCommandMode();
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
