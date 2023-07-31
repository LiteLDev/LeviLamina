#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/Mob.h"

class Agent : public ::Mob {

public:
    // prevent constructor by default
    Agent& operator=(Agent const&) = delete;
    Agent(Agent const&)            = delete;
    Agent()                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 12
     * @symbol ?initializeComponents\@Agent\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const&);
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
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool);
    /**
     * @vftbl 43
     * @symbol ?normalTick\@Agent\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl 53
     * @symbol ?isInvisible\@Agent\@\@UEBA_NXZ
     */
    virtual bool isInvisible() const;
    /**
     * @vftbl 54
     * @symbol ?canShowNameTag\@Agent\@\@UEBA_NXZ
     */
    virtual bool canShowNameTag() const;
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 59
     * @symbol
     * ?getFormattedNameTag\@Agent\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getFormattedNameTag() const;
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
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
     * @symbol ?isPickable\@Agent\@\@UEAA_NXZ
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
     * @vftbl 106
     * @symbol ?setOwner\@Agent\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void setOwner(struct ActorUniqueID);
    /**
     * @vftbl 127
     * @symbol ?handleEntityEvent\@Agent\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 144
     * @symbol ?setCarriedItem\@Agent\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setCarriedItem(class ItemStack const&);
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 176
     * @symbol ?canBePulledIntoVehicle\@Agent\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 192
     * @symbol ?canBeAffected\@Agent\@\@UEBA_NI\@Z
     */
    virtual bool canBeAffected(unsigned int) const;
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
     * @symbol ?kill\@Agent\@\@UEAAXXZ
     */
    virtual void kill();
    /**
     * @vftbl 237
     * @symbol ?updateEntitySpecificMolangVariables\@Agent\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 240
     * @symbol ?_hurt\@Agent\@\@EEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);
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
     * @vftbl 254
     * @symbol ?knockback\@Agent\@\@UEAAXPEAVActor\@\@HMMMMM\@Z
     */
    virtual void knockback(class Actor*, int, float, float, float, float, float);
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
     * @vftbl 306
     * @symbol ?createAIGoals\@Agent\@\@UEAA_NXZ
     */
    virtual bool createAIGoals();
    /**
     * @vftbl 313
     * @symbol ?canExistWhenDisallowMob\@Agent\@\@UEBA_NXZ
     */
    virtual bool canExistWhenDisallowMob() const;
    /**
     * @vftbl 317
     * @symbol
     * ?initBodyControl\@Agent\@\@EEAA?AV?$unique_ptr\@VBodyControl\@\@U?$default_delete\@VBodyControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323();
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
    MCAPI Agent(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    /**
     * @symbol ?checkTravelType\@Agent\@\@QEAA?AW4AgentTravelType\@\@XZ
     */
    MCAPI enum class AgentTravelType checkTravelType();
    /**
     * @symbol ?doClientTravel\@Agent\@\@QEAAXAEBVAABB\@\@\@Z
     */
    MCAPI void doClientTravel(class AABB const&);
    /**
     * @symbol ?doServerTravel\@Agent\@\@QEAA?AVVec3\@\@AEBVAABB\@\@W4AgentTravelType\@\@\@Z
     */
    MCAPI class Vec3 doServerTravel(class AABB const&, enum class AgentTravelType);
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
     * @symbol ?roundTeleportPos\@Agent\@\@SA?AVVec3\@\@AEBV2\@\@Z
     */
    MCAPI static class Vec3 roundTeleportPos(class Vec3 const&);
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
    MCAPI void setNameTagFromOwner(class Player const&);
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
    MCAPI void tryFireCreateEvent(class Player&);
    /**
     * @symbol ?tryGetFromEntity\@Agent\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class Agent* tryGetFromEntity(class EntityContext&, bool);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_isOnGround\@Agent\@\@AEAA_NAEBVAABB\@\@\@Z
     */
    MCAPI bool _isOnGround(class AABB const&);
    // NOLINTEND
};
