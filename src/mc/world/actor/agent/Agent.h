#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AgentAnimation.h"
#include "mc/enums/AgentTravelType.h"
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
    // vIndex: 6, symbol: ?initializeComponents@Agent@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __gen_??1Agent@@UEAA@XZ
    virtual ~Agent() = default;

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 26, symbol: ?teleportTo@Agent@@UEAAXAEBVVec3@@_NHH1@Z
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool);

    // vIndex: 29, symbol: ?normalTick@Agent@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 37, symbol: ?isInvisible@Agent@@UEBA_NXZ
    virtual bool isInvisible() const;

    // vIndex: 38, symbol: ?canShowNameTag@Agent@@UEBA_NXZ
    virtual bool canShowNameTag() const;

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol:
    // ?getFormattedNameTag@Agent@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getFormattedNameTag() const;

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 51, symbol: ?isPickable@Agent@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 69, symbol: ?setOwner@Agent@@UEAAXUActorUniqueID@@@Z
    virtual void setOwner(struct ActorUniqueID);

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 84, symbol: ?handleEntityEvent@Agent@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 93, symbol: ?setCarriedItem@Agent@@UEAAXAEBVItemStack@@@Z
    virtual void setCarriedItem(class ItemStack const&);

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 117, symbol: ?canBePulledIntoVehicle@Agent@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 120, symbol: __unk_vfn_120
    virtual void __unk_vfn_120();

    // vIndex: 126, symbol: ?canBeAffected@Agent@@UEBA_NI@Z
    virtual bool canBeAffected(uint) const;

    // vIndex: 142, symbol: __unk_vfn_142
    virtual void __unk_vfn_142();

    // vIndex: 143, symbol: __unk_vfn_143
    virtual void __unk_vfn_143();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 149, symbol: ?kill@Agent@@UEAAXXZ
    virtual void kill();

    // vIndex: 154, symbol: __unk_vfn_154
    virtual void __unk_vfn_154();

    // vIndex: 163, symbol: ?updateEntitySpecificMolangVariables@Agent@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@Agent@@EEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 173, symbol: ?knockback@Agent@@UEAAXPEAVActor@@HMMMMM@Z
    virtual void knockback(class Actor*, int, float, float, float, float, float);

    // vIndex: 203, symbol: ?createAIGoals@Agent@@UEAA_NXZ
    virtual bool createAIGoals();

    // vIndex: 204, symbol: __unk_vfn_204
    virtual void __unk_vfn_204();

    // vIndex: 209, symbol: ?canExistWhenDisallowMob@Agent@@UEBA_NXZ
    virtual bool canExistWhenDisallowMob() const;

    // vIndex: 210, symbol:
    // ?initBodyControl@Agent@@EEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
    virtual std::unique_ptr<class BodyControl> initBodyControl();

    // vIndex: 212, symbol: __unk_vfn_212
    virtual void __unk_vfn_212();

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

    // symbol: ?getSwingAnimationDuration@Agent@@QEBAHXZ
    MCAPI int getSwingAnimationDuration() const;

    // symbol: ?handleAnimationEvent@Agent@@QEAAXW4AgentAnimation@@@Z
    MCAPI void handleAnimationEvent(::AgentAnimation);

    // symbol: ?isEmoting@Agent@@QEBA_NXZ
    MCAPI bool isEmoting() const;

    // symbol: ?isValidSlotNum@Agent@@QEAA_NH@Z
    MCAPI bool isValidSlotNum(int);

    // symbol: ?setGameType@Agent@@QEAAXW4GameType@@@Z
    MCAPI void setGameType(::GameType);

    // symbol: ?setMoveTarget@Agent@@QEAAXVVec2@@@Z
    MCAPI void setMoveTarget(class Vec2);

    // symbol: ?setMoveTarget@Agent@@QEAAXM@Z
    MCAPI void setMoveTarget(float);

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
