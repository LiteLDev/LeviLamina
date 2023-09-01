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
    Agent& operator=(Agent const&) = delete;
    Agent(Agent const&)            = delete;
    Agent()                        = delete;

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

    // vIndex: 53, symbol: ?isInvisible@Agent@@UEBA_NXZ
    virtual bool isInvisible() const;

    // vIndex: 54, symbol: ?canShowNameTag@Agent@@UEBA_NXZ
    virtual bool canShowNameTag() const;

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 59, symbol:
    // ?getFormattedNameTag@Agent@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getFormattedNameTag() const;

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 82, symbol: ?isPickable@Agent@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 86, symbol: __unk_vfn_86
    virtual void __unk_vfn_86();

    // vIndex: 93, symbol: __unk_vfn_93
    virtual void __unk_vfn_93();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 96, symbol: __unk_vfn_96
    virtual void __unk_vfn_96();

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 106, symbol: ?setOwner@Agent@@UEAAXUActorUniqueID@@@Z
    virtual void setOwner(struct ActorUniqueID);

    // vIndex: 127, symbol: ?handleEntityEvent@Agent@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 144, symbol: ?setCarriedItem@Agent@@UEAAXAEBVItemStack@@@Z
    virtual void setCarriedItem(class ItemStack const&);

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 176, symbol: ?canBePulledIntoVehicle@Agent@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 192, symbol: ?canBeAffected@Agent@@UEBA_NI@Z
    virtual bool canBeAffected(uint) const;

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 223, symbol: ?kill@Agent@@UEAAXXZ
    virtual void kill();

    // vIndex: 237, symbol: ?updateEntitySpecificMolangVariables@Agent@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 240, symbol: ?_hurt@Agent@@EEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 254, symbol: ?knockback@Agent@@UEAAXPEAVActor@@HMMMMM@Z
    virtual void knockback(class Actor*, int, float, float, float, float, float);

    // vIndex: 276, symbol: __unk_vfn_276
    virtual void __unk_vfn_276();

    // vIndex: 280, symbol: __unk_vfn_280
    virtual void __unk_vfn_280();

    // vIndex: 306, symbol: ?createAIGoals@Agent@@UEAA_NXZ
    virtual bool createAIGoals();

    // vIndex: 313, symbol: ?canExistWhenDisallowMob@Agent@@UEBA_NXZ
    virtual bool canExistWhenDisallowMob() const;

    // vIndex: 317, symbol:
    // ?initBodyControl@Agent@@EEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
    virtual std::unique_ptr<class BodyControl> initBodyControl();

    // vIndex: 323, symbol: __unk_vfn_323
    virtual void __unk_vfn_323();

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
