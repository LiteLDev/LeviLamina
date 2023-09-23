#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AgentAnimation.h"
#include "mc/enums/AgentTravelType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/GameType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

class Agent : public ::Mob {
public:
    // prevent constructor by default
    Agent& operator=(Agent const&);
    Agent(Agent const&);
    Agent();

public:
    // NOLINTBEGIN
    // vIndex: 12, symbol: ?initializeComponents@Agent@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 38, symbol: ?teleportTo@Agent@@UEAAXAEBVVec3@@_NHH1@Z
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool);

    // vIndex: 43, symbol: ?normalTick@Agent@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 52, symbol: ?isInvisible@Agent@@UEBA_NXZ
    virtual bool isInvisible() const;

    // vIndex: 53, symbol: ?canShowNameTag@Agent@@UEBA_NXZ
    virtual bool canShowNameTag() const;

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 58, symbol:
    // ?getFormattedNameTag@Agent@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getFormattedNameTag() const;

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 81, symbol: ?isPickable@Agent@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 82, symbol: __unk_vfn_82
    virtual void __unk_vfn_82();

    // vIndex: 85, symbol: __unk_vfn_85
    virtual void __unk_vfn_85();

    // vIndex: 92, symbol: __unk_vfn_92
    virtual void __unk_vfn_92();

    // vIndex: 94, symbol: __unk_vfn_94
    virtual void __unk_vfn_94();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 97, symbol: __unk_vfn_97
    virtual void __unk_vfn_97();

    // vIndex: 105, symbol: ?setOwner@Agent@@UEAAXUActorUniqueID@@@Z
    virtual void setOwner(struct ActorUniqueID);

    // vIndex: 125, symbol: ?handleEntityEvent@Agent@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 142, symbol: ?setCarriedItem@Agent@@UEAAXAEBVItemStack@@@Z
    virtual void setCarriedItem(class ItemStack const&);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 172, symbol: ?canBePulledIntoVehicle@Agent@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 188, symbol: ?canBeAffected@Agent@@UEBA_NI@Z
    virtual bool canBeAffected(uint) const;

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 219, symbol: ?kill@Agent@@UEAAXXZ
    virtual void kill();

    // vIndex: 233, symbol: ?updateEntitySpecificMolangVariables@Agent@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@Agent@@EEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 249, symbol: ?knockback@Agent@@UEAAXPEAVActor@@HMMMMM@Z
    virtual void knockback(class Actor*, int, float, float, float, float, float);

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // vIndex: 300, symbol: ?createAIGoals@Agent@@UEAA_NXZ
    virtual bool createAIGoals();

    // vIndex: 307, symbol: ?canExistWhenDisallowMob@Agent@@UEBA_NXZ
    virtual bool canExistWhenDisallowMob() const;

    // vIndex: 311, symbol:
    // ?initBodyControl@Agent@@EEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
    virtual std::unique_ptr<class BodyControl> initBodyControl();

    // symbol: ?breaksFallingBlocks@Agent@@UEBA_NXZ
    MCVAPI bool breaksFallingBlocks() const;

    // symbol: ?getAlwaysShowNameTag@Agent@@UEBA_NXZ
    MCVAPI bool getAlwaysShowNameTag() const;

    // symbol: ?interactPreventDefault@Agent@@UEAA_NXZ
    MCVAPI bool interactPreventDefault();

    // symbol: ?isTargetable@Agent@@UEBA_NXZ
    MCVAPI bool isTargetable() const;

    // symbol: ??0Agent@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Agent(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?checkTravelType@Agent@@QEAA?AW4AgentTravelType@@XZ
    MCAPI ::AgentTravelType checkTravelType();

    // symbol: ?doClientTravel@Agent@@QEAAXAEBVAABB@@@Z
    MCAPI void doClientTravel(class AABB const&);

    // symbol: ?doServerTravel@Agent@@QEAA?AVVec3@@AEBVAABB@@W4AgentTravelType@@@Z
    MCAPI class Vec3 doServerTravel(class AABB const&, ::AgentTravelType);

    // symbol: ?getMoveSpeedScalar@Agent@@QEBAMXZ
    MCAPI float getMoveSpeedScalar() const;

    // symbol: ?getSelectedSlot@Agent@@QEBAHXZ
    MCAPI int getSelectedSlot() const;

    // symbol: ?handleAnimationEvent@Agent@@QEAAXW4AgentAnimation@@@Z
    MCAPI void handleAnimationEvent(::AgentAnimation);

    // symbol: ?isEmoting@Agent@@QEBA_NXZ
    MCAPI bool isEmoting() const;

    // symbol: ?isValidSlotNum@Agent@@QEAA_NH@Z
    MCAPI bool isValidSlotNum(int);

    // symbol: ?setGameType@Agent@@QEAAXW4GameType@@@Z
    MCAPI void setGameType(::GameType);

    // symbol: ?setMoveTarget@Agent@@QEAAXM@Z
    MCAPI void setMoveTarget(float);

    // symbol: ?setMoveTarget@Agent@@QEAAXVVec2@@@Z
    MCAPI void setMoveTarget(class Vec2);

    // symbol: ?setNameTagFromOwner@Agent@@QEAAXAEBVPlayer@@@Z
    MCAPI void setNameTagFromOwner(class Player const&);

    // symbol: ?shrug@Agent@@QEAAXXZ
    MCAPI void shrug();

    // symbol: ?startCommandMode@Agent@@QEAAXXZ
    MCAPI void startCommandMode();

    // symbol: ?stopCommandMode@Agent@@QEAAXXZ
    MCAPI void stopCommandMode();

    // symbol: ?swingArm@Agent@@QEAAXXZ
    MCAPI void swingArm();

    // symbol: ?tryFireCreateEvent@Agent@@QEAAXAEAVPlayer@@@Z
    MCAPI void tryFireCreateEvent(class Player&);

    // symbol: ?roundTeleportPos@Agent@@SA?AVVec3@@AEBV2@@Z
    MCAPI static class Vec3 roundTeleportPos(class Vec3 const&);

    // symbol: ?tryGetFromEntity@Agent@@SAPEAV1@AEAVEntityContext@@_N@Z
    MCAPI static class Agent* tryGetFromEntity(class EntityContext&, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isOnGround@Agent@@AEAA_NAEBVAABB@@@Z
    MCAPI bool _isOnGround(class AABB const&);

    // NOLINTEND
};
