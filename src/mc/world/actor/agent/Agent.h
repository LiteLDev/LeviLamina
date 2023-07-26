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
    /**
     * @vftbl 12
     * @symbol ?initializeComponents\@Agent\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void
    initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 38
     * @symbol ?teleportTo\@Agent\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool); // NOLINT
    /**
     * @vftbl 43
     * @symbol ?normalTick\@Agent\@\@UEAAXXZ
     */
    virtual void normalTick(); // NOLINT
    /**
     * @vftbl 53
     * @symbol ?isInvisible\@Agent\@\@UEBA_NXZ
     */
    virtual bool isInvisible() const; // NOLINT
    /**
     * @vftbl 54
     * @symbol ?canShowNameTag\@Agent\@\@UEBA_NXZ
     */
    virtual bool canShowNameTag() const; // NOLINT
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55(); // NOLINT
    /**
     * @vftbl 59
     * @symbol
     * ?getFormattedNameTag\@Agent\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getFormattedNameTag() const; // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 82
     * @symbol ?isPickable\@Agent\@\@UEAA_NXZ
     */
    virtual bool isPickable(); // NOLINT
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83(); // NOLINT
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86(); // NOLINT
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93(); // NOLINT
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95(); // NOLINT
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96(); // NOLINT
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98(); // NOLINT
    /**
     * @vftbl 106
     * @symbol ?setOwner\@Agent\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void setOwner(struct ActorUniqueID); // NOLINT
    /**
     * @vftbl 127
     * @symbol ?handleEntityEvent\@Agent\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int); // NOLINT
    /**
     * @vftbl 144
     * @symbol ?setCarriedItem\@Agent\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setCarriedItem(class ItemStack const&); // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 176
     * @symbol ?canBePulledIntoVehicle\@Agent\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const; // NOLINT
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178(); // NOLINT
    /**
     * @vftbl 192
     * @symbol ?canBeAffected\@Agent\@\@UEBA_NI\@Z
     */
    virtual bool canBeAffected(unsigned int) const; // NOLINT
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202(); // NOLINT
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203(); // NOLINT
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219(); // NOLINT
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222(); // NOLINT
    /**
     * @vftbl 223
     * @symbol ?kill\@Agent\@\@UEAAXXZ
     */
    virtual void kill(); // NOLINT
    /**
     * @vftbl 237
     * @symbol ?updateEntitySpecificMolangVariables\@Agent\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams&); // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 240
     * @symbol ?_hurt\@Agent\@\@EEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool); // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253(); // NOLINT
    /**
     * @vftbl 254
     * @symbol ?knockback\@Agent\@\@UEAAXPEAVActor\@\@HMMMMM\@Z
     */
    virtual void knockback(class Actor*, int, float, float, float, float, float); // NOLINT
    /**
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276(); // NOLINT
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280(); // NOLINT
    /**
     * @vftbl 306
     * @symbol ?createAIGoals\@Agent\@\@UEAA_NXZ
     */
    virtual bool createAIGoals(); // NOLINT
    /**
     * @vftbl 313
     * @symbol ?canExistWhenDisallowMob\@Agent\@\@UEBA_NXZ
     */
    virtual bool canExistWhenDisallowMob() const; // NOLINT
    /**
     * @vftbl 317
     * @symbol
     * ?initBodyControl\@Agent\@\@EEAA?AV?$unique_ptr\@VBodyControl\@\@U?$default_delete\@VBodyControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl(); // NOLINT
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENT
    /**
     * @symbol ?breaksFallingBlocks\@Agent\@\@UEBA_NXZ
     */
    MCVAPI bool breaksFallingBlocks() const; // NOLINT
    /**
     * @symbol ?getAlwaysShowNameTag\@Agent\@\@UEBA_NXZ
     */
    MCVAPI bool getAlwaysShowNameTag() const; // NOLINT
    /**
     * @symbol ?interactPreventDefault\@Agent\@\@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault(); // NOLINT
    /**
     * @symbol ?isTargetable\@Agent\@\@UEBA_NXZ
     */
    MCVAPI bool isTargetable() const; // NOLINT
#endif
    /**
     * @symbol ??0Agent\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Agent(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?checkTravelType\@Agent\@\@QEAA?AW4AgentTravelType\@\@XZ
     */
    MCAPI enum class AgentTravelType checkTravelType(); // NOLINT
    /**
     * @symbol ?doClientTravel\@Agent\@\@QEAAXAEBVAABB\@\@\@Z
     */
    MCAPI void doClientTravel(class AABB const&); // NOLINT
    /**
     * @symbol ?doServerTravel\@Agent\@\@QEAA?AVVec3\@\@AEBVAABB\@\@W4AgentTravelType\@\@\@Z
     */
    MCAPI class Vec3 doServerTravel(class AABB const&, enum class AgentTravelType); // NOLINT
    /**
     * @symbol ?getMoveSpeedScalar\@Agent\@\@QEBAMXZ
     */
    MCAPI float getMoveSpeedScalar() const; // NOLINT
    /**
     * @symbol ?getSelectedSlot\@Agent\@\@QEBAHXZ
     */
    MCAPI int getSelectedSlot() const; // NOLINT
    /**
     * @symbol ?handleAnimationEvent\@Agent\@\@QEAAXW4AgentAnimation\@\@\@Z
     */
    MCAPI void handleAnimationEvent(enum class AgentAnimation); // NOLINT
    /**
     * @symbol ?isEmoting\@Agent\@\@QEBA_NXZ
     */
    MCAPI bool isEmoting() const; // NOLINT
    /**
     * @symbol ?isValidSlotNum\@Agent\@\@QEAA_NH\@Z
     */
    MCAPI bool isValidSlotNum(int); // NOLINT
    /**
     * @symbol ?setGameType\@Agent\@\@QEAAXW4GameType\@\@\@Z
     */
    MCAPI void setGameType(enum class GameType); // NOLINT
    /**
     * @symbol ?setMoveTarget\@Agent\@\@QEAAXM\@Z
     */
    MCAPI void setMoveTarget(float); // NOLINT
    /**
     * @symbol ?setMoveTarget\@Agent\@\@QEAAXVVec2\@\@\@Z
     */
    MCAPI void setMoveTarget(class Vec2); // NOLINT
    /**
     * @symbol ?setNameTagFromOwner\@Agent\@\@QEAAXAEBVPlayer\@\@\@Z
     */
    MCAPI void setNameTagFromOwner(class Player const&); // NOLINT
    /**
     * @symbol ?shrug\@Agent\@\@QEAAXXZ
     */
    MCAPI void shrug(); // NOLINT
    /**
     * @symbol ?startCommandMode\@Agent\@\@QEAAXXZ
     */
    MCAPI void startCommandMode(); // NOLINT
    /**
     * @symbol ?stopCommandMode\@Agent\@\@QEAAXXZ
     */
    MCAPI void stopCommandMode(); // NOLINT
    /**
     * @symbol ?swingArm\@Agent\@\@QEAAXXZ
     */
    MCAPI void swingArm(); // NOLINT
    /**
     * @symbol ?tryFireCreateEvent\@Agent\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void tryFireCreateEvent(class Player&); // NOLINT
    /**
     * @symbol ?roundTeleportPos\@Agent\@\@SA?AVVec3\@\@AEBV2\@\@Z
     */
    MCAPI static class Vec3 roundTeleportPos(class Vec3 const&); // NOLINT
    /**
     * @symbol ?tryGetFromEntity\@Agent\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class Agent* tryGetFromEntity(class EntityContext&, bool); // NOLINT

    // private:
    /**
     * @symbol ?_isOnGround\@Agent\@\@AEAA_NAEBVAABB\@\@\@Z
     */
    MCAPI bool _isOnGround(class AABB const&); // NOLINT

private:
};
