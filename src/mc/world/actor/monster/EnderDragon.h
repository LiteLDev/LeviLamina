#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/PathCompletionType.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class EnderDragon : public ::Monster {
public:
    // prevent constructor by default
    EnderDragon& operator=(EnderDragon const&);
    EnderDragon(EnderDragon const&);
    EnderDragon();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@EnderDragon@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1EnderDragon@@UEAA@XZ
    virtual ~EnderDragon() = default;

    // vIndex: 13, symbol: ?remove@EnderDragon@@UEAAXXZ
    virtual void remove();

    // vIndex: 38, symbol: ?getShadowRadius@EnderDragon@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 39, symbol: ?getHeadLookVector@EnderDragon@@UEBA?AVVec3@@M@Z
    virtual class Vec3 getHeadLookVector(float a) const;

    // vIndex: 43, symbol: ?isImmobile@EnderDragon@@UEBA_NXZ
    virtual bool isImmobile() const;

    // vIndex: 61, symbol: ?setSitting@EnderDragon@@UEAAX_N@Z
    virtual void setSitting(bool value);

    // vIndex: 70, symbol: ?isInvulnerableTo@EnderDragon@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 75, symbol: ?handleEntityEvent@EnderDragon@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 96, symbol: ?canChangeDimensionsUsingPortal@EnderDragon@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 104, symbol: ?canBePulledIntoVehicle@EnderDragon@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 113, symbol: ?canBeAffected@EnderDragon@@UEBA_NI@Z
    virtual bool canBeAffected(uint) const;

    // vIndex: 133, symbol: ?die@EnderDragon@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 146, symbol: ?updateEntitySpecificMolangVariables@EnderDragon@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 148, symbol: ?_hurt@EnderDragon@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 190, symbol: ?tickDeath@EnderDragon@@MEAAXXZ
    virtual void tickDeath();

    // symbol: ??0EnderDragon@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI EnderDragon(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?dieNaturally@EnderDragon@@QEAAXXZ
    MCAPI void dieNaturally();

    // symbol: ?findClosestNode@EnderDragon@@QEAAHXZ
    MCAPI int findClosestNode();

    // symbol: ?findClosestNode@EnderDragon@@QEAAHAEBVVec3@@@Z
    MCAPI int findClosestNode(class Vec3 const& pos);

    // symbol:
    // ?findPath@EnderDragon@@QEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@HHPEAVPathfinderNode@@@Z
    MCAPI std::unique_ptr<class Path> findPath(int startIndex, int endIndex, class PathfinderNode* finalNode);

    // symbol: ?getFlameCount@EnderDragon@@QEBAHXZ
    MCAPI int getFlameCount() const;

    // symbol: ?getFlapTime@EnderDragon@@QEBAMXZ
    MCAPI float getFlapTime() const;

    // symbol: ?getHeadPos@EnderDragon@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos getHeadPos() const;

    // symbol: ?getLatencyPos@EnderDragon@@QEBA?BV?$vector@MV?$allocator@M@std@@@std@@HM@Z
    MCAPI std::vector<float> const getLatencyPos(int step, float a) const;

    // symbol: ?getNumCrystalsAlive@EnderDragon@@QEAAHXZ
    MCAPI int getNumCrystalsAlive();

    // symbol: ?getTargetPos@EnderDragon@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 getTargetPos() const;

    // symbol: ?incrementFlameCount@EnderDragon@@QEAAXXZ
    MCAPI void incrementFlameCount();

    // symbol: ?onCrystalDestroyed@EnderDragon@@QEAAXAEBVEnderCrystal@@VBlockPos@@AEBVActorDamageSource@@@Z
    MCAPI void
    onCrystalDestroyed(class EnderCrystal const& crystal, class BlockPos pos, class ActorDamageSource const& source);

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
    MCAPI void setTargetPos(class Vec3 pos);

    // symbol: ?setTurnSpeed@EnderDragon@@QEAAXM@Z
    MCAPI void setTurnSpeed(float speed);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_hurt@EnderDragon@@IEAA_NPEAVAABB@@AEBVActorDamageSource@@M@Z
    MCAPI bool _hurt(class AABB* part, class ActorDamageSource const& source, float damage);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_checkCrystals@EnderDragon@@AEAAXXZ
    MCAPI void _checkCrystals();

    // symbol: ?_checkWalls@EnderDragon@@AEAA_NVAABB@@@Z
    MCAPI bool _checkWalls(class AABB bb);

    // symbol: ?_hurtEntities@EnderDragon@@AEBAXV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@@Z
    MCAPI void _hurtEntities(gsl::span<gsl::not_null<class Actor*>> actors) const;

    // symbol: ?_knockBack@EnderDragon@@AEBAXV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@@Z
    MCAPI void _knockBack(gsl::span<gsl::not_null<class Actor*>> actors) const;

    // symbol:
    // ?_reconstructPath@EnderDragon@@AEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVPathfinderNode@@0W4PathCompletionType@@@Z
    MCAPI std::unique_ptr<class Path>
          _reconstructPath(class PathfinderNode& from, class PathfinderNode& to, ::PathCompletionType completionType);

    // symbol: ?_isDragonImmuneBlock@EnderDragon@@CA_NAEBVBlockLegacy@@@Z
    MCAPI static bool _isDragonImmuneBlock(class BlockLegacy const& block);

    // NOLINTEND

    // private:
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
};
