#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AgentAnimation.h"
#include "mc/enums/AgentTravelType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/GameType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Agent : public ::Mob {
public:
    // prevent constructor by default
    Agent& operator=(Agent const&);
    Agent(Agent const&);
    Agent();

public:
    // NOLINTBEGIN
    // vIndex: 6, symbol: ?initializeComponents@Agent@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::ActorInitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __gen_??1Agent@@UEAA@XZ
    virtual ~Agent() = default;

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

    // vIndex: 41, symbol: ?getNameTagTextColor@Agent@@UEBA?AVColor@mce@@XZ
    virtual class mce::Color getNameTagTextColor() const;

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 51, symbol: ?isPickable@Agent@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 68, symbol: ?setOwner@Agent@@UEAAXUActorUniqueID@@@Z
    virtual void setOwner(struct ActorUniqueID);

    // vIndex: 83, symbol: ?handleEntityEvent@Agent@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 92, symbol: ?setCarriedItem@Agent@@UEAAXAEBVItemStack@@@Z
    virtual void setCarriedItem(class ItemStack const&);

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 115, symbol: ?canBePulledIntoVehicle@Agent@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 124, symbol: ?canBeAffected@Agent@@UEBA_NI@Z
    virtual bool canBeAffected(uint) const;

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 146, symbol: ?kill@Agent@@UEAAXXZ
    virtual void kill();

    // vIndex: 160, symbol: ?updateEntitySpecificMolangVariables@Agent@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: ?_hurt@Agent@@EEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 169, symbol: ?knockback@Agent@@UEAAXPEAVActor@@HMMMMM@Z
    virtual void knockback(class Actor*, int, float, float, float, float, float);

    // vIndex: 199, symbol: ?createAIGoals@Agent@@UEAA_NXZ
    virtual bool createAIGoals();

    // vIndex: 205, symbol: ?canExistWhenDisallowMob@Agent@@UEBA_NXZ
    virtual bool canExistWhenDisallowMob() const;

    // vIndex: 206, symbol:
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
