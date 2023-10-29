#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/PathCompletionType.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

class EnderDragon : public ::Monster {
public:
    // prevent constructor by default
    EnderDragon& operator=(EnderDragon const&);
    EnderDragon(EnderDragon const&);
    EnderDragon();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ?reloadHardcoded@EnderDragon@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 19, symbol: ?remove@EnderDragon@@UEAAXXZ
    virtual void remove();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 68, symbol: ?getShadowRadius@EnderDragon@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 69, symbol: ?getHeadLookVector@EnderDragon@@UEBA?AVVec3@@M@Z
    virtual class Vec3 getHeadLookVector(float) const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 78, symbol: ?isImmobile@EnderDragon@@UEBA_NXZ
    virtual bool isImmobile() const;

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

    // vIndex: 106, symbol: ?setSitting@EnderDragon@@UEAAX_N@Z
    virtual void setSitting(bool);

    // vIndex: 119, symbol: ?isInvulnerableTo@EnderDragon@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 125, symbol: ?handleEntityEvent@EnderDragon@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 161, symbol: ?canChangeDimensionsUsingPortal@EnderDragon@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 172, symbol: ?canBePulledIntoVehicle@EnderDragon@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 188, symbol: ?canBeAffected@EnderDragon@@UEBA_NI@Z
    virtual bool canBeAffected(uint) const;

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 220, symbol: ?die@EnderDragon@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 233, symbol: ?updateEntitySpecificMolangVariables@EnderDragon@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@EnderDragon@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 247, symbol: ?_onSizeUpdated@EnderDragon@@EEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // vIndex: 315, symbol: ?tickDeath@EnderDragon@@MEAAXXZ
    virtual void tickDeath();

    // symbol: ?canExistInPeaceful@EnderDragon@@UEBA_NXZ
    MCVAPI bool canExistInPeaceful() const;

    // symbol: ?isFishable@EnderDragon@@UEBA_NXZ
    MCVAPI bool isFishable() const;

    // symbol: ??0EnderDragon@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI EnderDragon(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?dieNaturally@EnderDragon@@QEAAXXZ
    MCAPI void dieNaturally();

    // symbol: ?findClosestNode@EnderDragon@@QEAAHXZ
    MCAPI int findClosestNode();

    // symbol: ?findClosestNode@EnderDragon@@QEAAHAEBVVec3@@@Z
    MCAPI int findClosestNode(class Vec3 const&);

    // symbol:
    // ?findPath@EnderDragon@@QEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@HHPEAVPathfinderNode@@@Z
    MCAPI std::unique_ptr<class Path> findPath(int, int, class PathfinderNode*);

    // symbol: ?getFlameCount@EnderDragon@@QEBAHXZ
    MCAPI int getFlameCount() const;

    // symbol: ?getFlapTime@EnderDragon@@QEBAMXZ
    MCAPI float getFlapTime() const;

    // symbol: ?getHeadPos@EnderDragon@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos getHeadPos() const;

    // symbol: ?getLatencyPos@EnderDragon@@QEBA?BV?$vector@MV?$allocator@M@std@@@std@@HM@Z
    MCAPI std::vector<float> const getLatencyPos(int, float) const;

    // symbol: ?getNumCrystalsAlive@EnderDragon@@QEAAHXZ
    MCAPI int getNumCrystalsAlive();

    // symbol: ?getTargetPos@EnderDragon@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 getTargetPos() const;

    // symbol: ?incrementFlameCount@EnderDragon@@QEAAXXZ
    MCAPI void incrementFlameCount();

    // symbol: ?onCrystalDestroyed@EnderDragon@@QEAAXAEBVEnderCrystal@@VBlockPos@@AEBVActorDamageSource@@@Z
    MCAPI void onCrystalDestroyed(class EnderCrystal const&, class BlockPos, class ActorDamageSource const&);

    // symbol: ?postAiStep@EnderDragon@@QEAAXXZ
    MCAPI void postAiStep();

    // symbol: ?resetFlameCount@EnderDragon@@QEAAXXZ
    MCAPI void resetFlameCount();

    // symbol: ?setDragonKilledCallback@EnderDragon@@QEAAXV?$function@$$A6AXAEAVEnderDragon@@@Z@std@@@Z
    MCAPI void setDragonKilledCallback(std::function<void(class EnderDragon&)>);

    // symbol: ?setHasDragonPreviouslyBeenKilled@EnderDragon@@QEAAX_N@Z
    MCAPI void setHasDragonPreviouslyBeenKilled(bool);

    // symbol: ?setNumCrystalsAlive@EnderDragon@@QEAAXH@Z
    MCAPI void setNumCrystalsAlive(int);

    // symbol: ?setTargetPos@EnderDragon@@QEAAXVVec3@@@Z
    MCAPI void setTargetPos(class Vec3);

    // symbol: ?setTurnSpeed@EnderDragon@@QEAAXM@Z
    MCAPI void setTurnSpeed(float);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_hurt@EnderDragon@@IEAA_NPEAVAABB@@AEBVActorDamageSource@@M@Z
    MCAPI bool _hurt(class AABB*, class ActorDamageSource const&, float);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_checkCrystals@EnderDragon@@AEAAXXZ
    MCAPI void _checkCrystals();

    // symbol: ?_checkWalls@EnderDragon@@AEAA_NVAABB@@@Z
    MCAPI bool _checkWalls(class AABB);

    // symbol: ?_hurtEntities@EnderDragon@@AEBAXV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@@Z
    MCAPI void _hurtEntities(gsl::span<gsl::not_null<class Actor*>>) const;

    // symbol: ?_knockBack@EnderDragon@@AEBAXV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@@Z
    MCAPI void _knockBack(gsl::span<gsl::not_null<class Actor*>>) const;

    // symbol:
    // ?_reconstructPath@EnderDragon@@AEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVPathfinderNode@@0W4PathCompletionType@@@Z
    MCAPI std::unique_ptr<class Path>
          _reconstructPath(class PathfinderNode&, class PathfinderNode&, ::PathCompletionType);

    // symbol: ?_isDragonImmuneBlock@EnderDragon@@CA_NAEBVBlockLegacy@@@Z
    MCAPI static bool _isDragonImmuneBlock(class BlockLegacy const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?GROWL_INTERVAL_MAX@EnderDragon@@0HA
    MCAPI static int GROWL_INTERVAL_MAX;

    // symbol: ?GROWL_INTERVAL_MIN@EnderDragon@@0HA
    MCAPI static int GROWL_INTERVAL_MIN;

    // symbol: ?MAX_PATH_RADIUS@EnderDragon@@0HA
    MCAPI static int MAX_PATH_RADIUS;

    // symbol: ?SITTING_ALLOWED_DAMAGE_PERCENTAGE@EnderDragon@@0MA
    MCAPI static float SITTING_ALLOWED_DAMAGE_PERCENTAGE;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $GROWL_INTERVAL_MAX() { return GROWL_INTERVAL_MAX; }

    auto& $GROWL_INTERVAL_MIN() { return GROWL_INTERVAL_MIN; }

    auto& $MAX_PATH_RADIUS() { return MAX_PATH_RADIUS; }

    auto& $SITTING_ALLOWED_DAMAGE_PERCENTAGE() { return SITTING_ALLOWED_DAMAGE_PERCENTAGE; }

    // NOLINTEND
};
