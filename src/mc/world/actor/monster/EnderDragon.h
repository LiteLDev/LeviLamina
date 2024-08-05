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

    MCAPI void setDragonKilledCallback(std::function<void(class EnderDragon&)>);

    MCAPI void setHasDragonPreviouslyBeenKilled(bool);

    MCAPI void setNumCrystalsAlive(int);

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

    MCAPI void _hurtEntities(gsl::span<gsl::not_null<class Actor*>> actors) const;

    MCAPI void _knockBack(gsl::span<gsl::not_null<class Actor*>> actors) const;

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
