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
    EnderDragon& operator=(EnderDragon const&) = delete;
    EnderDragon(EnderDragon const&)            = delete;
    EnderDragon()                              = delete;

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

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 69, symbol: ?getShadowRadius@EnderDragon@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 70, symbol: ?getHeadLookVector@EnderDragon@@UEBA?AVVec3@@M@Z
    virtual class Vec3 getHeadLookVector(float) const;

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 79, symbol: ?isImmobile@EnderDragon@@UEBA_NXZ
    virtual bool isImmobile() const;

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

    // vIndex: 107, symbol: ?setSitting@EnderDragon@@UEAAX_N@Z
    virtual void setSitting(bool);

    // vIndex: 120, symbol: ?isInvulnerableTo@EnderDragon@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 127, symbol: ?handleEntityEvent@EnderDragon@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 163, symbol: ?canChangeDimensionsUsingPortal@EnderDragon@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 176, symbol: ?canBePulledIntoVehicle@EnderDragon@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 192, symbol: ?canBeAffected@EnderDragon@@UEBA_NI@Z
    virtual bool canBeAffected(uint) const;

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 224, symbol: ?die@EnderDragon@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 237, symbol: ?updateEntitySpecificMolangVariables@EnderDragon@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 240, symbol: ?_hurt@EnderDragon@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 252, symbol: ?_onSizeUpdated@EnderDragon@@EEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 276, symbol: __unk_vfn_276
    virtual void __unk_vfn_276();

    // vIndex: 280, symbol: __unk_vfn_280
    virtual void __unk_vfn_280();

    // vIndex: 321, symbol: ?tickDeath@EnderDragon@@MEAAXXZ
    virtual void tickDeath();

    // vIndex: 323, symbol: __unk_vfn_323
    virtual void __unk_vfn_323();

    // symbol: ?canExistInPeaceful@EnderDragon@@UEBA_NXZ
    MCVAPI bool canExistInPeaceful() const;

    // symbol: ?isFishable@EnderDragon@@UEBA_NXZ
    MCVAPI bool isFishable() const;

    // symbol: ??0EnderDragon@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI EnderDragon(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?dieNaturally@EnderDragon@@QEAAXXZ
    MCAPI void dieNaturally();

    // symbol: ?findClosestNode@EnderDragon@@QEAAHAEBVVec3@@@Z
    MCAPI int findClosestNode(class Vec3 const&);

    // symbol: ?findClosestNode@EnderDragon@@QEAAHXZ
    MCAPI int findClosestNode();

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
