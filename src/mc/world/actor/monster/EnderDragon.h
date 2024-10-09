#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"
#include "mc/world/level/pathfinder/PathCompletionType.h"

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
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~EnderDragon() = default;

    // vIndex: 13
    virtual void remove();

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 39
    virtual class Vec3 getHeadLookVector(float a) const;

    // vIndex: 43
    virtual bool isImmobile() const;

    // vIndex: 60
    virtual void setSitting(bool value);

    // vIndex: 69
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 94
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 102
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 111
    virtual bool canBeAffected(uint) const;

    // vIndex: 131
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 144
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 188
    virtual void tickDeath();

    MCAPI EnderDragon(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void dieNaturally();

    MCAPI int findClosestNode();

    MCAPI int findClosestNode(class Vec3 const& pos);

    MCAPI std::unique_ptr<class Path> findPath(int startIndex, int endIndex, class PathfinderNode* finalNode);

    MCAPI int getFlameCount() const;

    MCAPI float getFlapTime() const;

    MCAPI class BlockPos getHeadPos() const;

    MCAPI std::vector<float> const getLatencyPos(int step, float a) const;

    MCAPI int getNumCrystalsAlive();

    MCAPI class Vec3 getTargetPos() const;

    MCAPI void incrementFlameCount();

    MCAPI void
    onCrystalDestroyed(class EnderCrystal const& crystal, class BlockPos pos, class ActorDamageSource const& source);

    MCAPI void postAiStep();

    MCAPI void resetFlameCount();

    MCAPI void setDragonKilledCallback(std::function<void(class EnderDragon&)> onKilled);

    MCAPI void setHasDragonPreviouslyBeenKilled(bool beenKilled);

    MCAPI void setNumCrystalsAlive(int crystalCount);

    MCAPI void setTargetPos(class Vec3 pos);

    MCAPI void setTurnSpeed(float speed);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _hurt(class AABB* part, class ActorDamageSource const& source, float damage);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _checkCrystals();

    MCAPI bool _checkWalls(class AABB bb);

    MCAPI void _hurtEntities(gsl::span<gsl::not_null<class Actor*>>) const;

    MCAPI void _knockBack(gsl::span<gsl::not_null<class Actor*>>) const;

    MCAPI std::unique_ptr<class Path>
          _reconstructPath(class PathfinderNode& from, class PathfinderNode& to, ::PathCompletionType completionType);

    MCAPI static bool _isDragonImmuneBlock(class BlockLegacy const& block);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int GROWL_INTERVAL_MAX;

    MCAPI static int GROWL_INTERVAL_MIN;

    MCAPI static int MAX_PATH_RADIUS;

    MCAPI static float SITTING_ALLOWED_DAMAGE_PERCENTAGE;

    // NOLINTEND
};
