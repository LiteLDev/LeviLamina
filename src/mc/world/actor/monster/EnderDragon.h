#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/level/pathfinder/PathCompletionType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class BlockLegacy;
class BlockPos;
class EnderCrystal;
class EntityContext;
class Path;
class PathfinderNode;
class Vec3;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class EnderDragon : public ::Monster {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkac943d;
    ::ll::UntypedStorage<4, 4>   mUnke5a802;
    ::ll::UntypedStorage<8, 8>   mUnk1062c1;
    ::ll::UntypedStorage<4, 768> mUnk11c904;
    ::ll::UntypedStorage<4, 4>   mUnk5d54df;
    ::ll::UntypedStorage<8, 8>   mUnk13fb8a;
    ::ll::UntypedStorage<8, 8>   mUnkd44524;
    ::ll::UntypedStorage<8, 8>   mUnk85ea3d;
    ::ll::UntypedStorage<8, 8>   mUnk86483c;
    ::ll::UntypedStorage<8, 8>   mUnk62a1e2;
    ::ll::UntypedStorage<8, 8>   mUnk53aab2;
    ::ll::UntypedStorage<8, 8>   mUnkb85f71;
    ::ll::UntypedStorage<8, 8>   mUnk1b0795;
    ::ll::UntypedStorage<1, 1>   mUnk9ece3a;
    ::ll::UntypedStorage<4, 4>   mUnk29c5f9;
    ::ll::UntypedStorage<4, 4>   mUnkede53f;
    ::ll::UntypedStorage<4, 4>   mUnkab9a7d;
    ::ll::UntypedStorage<4, 12>  mUnke72f4d;
    ::ll::UntypedStorage<4, 4>   mUnk893b82;
    ::ll::UntypedStorage<1, 1>   mUnk70fc7d;
    ::ll::UntypedStorage<1, 1>   mUnkf1cd69;
    ::ll::UntypedStorage<8, 24>  mUnka92db8;
    ::ll::UntypedStorage<8, 24>  mUnk45bb48;
    ::ll::UntypedStorage<8, 32>  mUnkbeb4f5;
    ::ll::UntypedStorage<8, 8>   mUnk9b5011;
    ::ll::UntypedStorage<4, 4>   mUnkd16120;
    ::ll::UntypedStorage<1, 1>   mUnke7bd10;
    ::ll::UntypedStorage<8, 64>  mUnk3356b7;
    // NOLINTEND

public:
    // prevent constructor by default
    EnderDragon& operator=(EnderDragon const&);
    EnderDragon(EnderDragon const&);
    EnderDragon();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual ~EnderDragon() /*override*/;

    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 11
    virtual void remove() /*override*/;

    // vIndex: 57
    virtual void setSitting(bool value) /*override*/;

    // vIndex: 107
    virtual bool canBeAffected(uint id) const /*override*/;

    // vIndex: 41
    virtual bool isImmobile() const /*override*/;

    // vIndex: 71
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 37
    virtual ::Vec3 getHeadLookVector(float a) const /*override*/;

    // vIndex: 125
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 36
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 66
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 98
    virtual bool canBePulledIntoVehicle() const /*override*/;

    // vIndex: 139
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 180
    virtual void tickDeath() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EnderDragon(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _checkCrystals();

    MCAPI bool _checkWalls(::AABB bb);

    MCAPI bool _hurt(::AABB* part, ::ActorDamageSource const& source, float damage);

    MCAPI void _hurtEntities(::gsl::span<::gsl::not_null<::Actor*>> actors) const;

    MCAPI void _knockBack(::gsl::span<::gsl::not_null<::Actor*>> actors) const;

    MCAPI ::std::unique_ptr<::Path>
    _reconstructPath(::PathfinderNode& from, ::PathfinderNode& to, ::PathCompletionType completionType);

    MCAPI void dieNaturally();

    MCAPI int findClosestNode();

    MCAPI int findClosestNode(::Vec3 const& pos);

    MCAPI ::std::unique_ptr<::Path> findPath(int startIndex, int endIndex, ::PathfinderNode* finalNode);

    MCAPI int getFlameCount() const;

    MCAPI float getFlapTime() const;

    MCAPI ::BlockPos getHeadPos() const;

    MCAPI ::std::vector<float> const getLatencyPos(int step, float a) const;

    MCAPI int getNumCrystalsAlive();

    MCAPI ::Vec3 getTargetPos() const;

    MCAPI void incrementFlameCount();

    MCAPI void onCrystalDestroyed(::EnderCrystal const& crystal, ::BlockPos pos, ::ActorDamageSource const& source);

    MCAPI void postAiStep();

    MCAPI void resetFlameCount();

    MCAPI void setDragonKilledCallback(::std::function<void(::EnderDragon&)> onKilled);

    MCAPI void setHasDragonPreviouslyBeenKilled(bool beenKilled);

    MCAPI void setNumCrystalsAlive(int crystalCount);

    MCAPI void setTargetPos(::Vec3 pos);

    MCAPI void setTurnSpeed(float speed);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _isDragonImmuneBlock(::BlockLegacy const& block);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int& GROWL_INTERVAL_MAX();

    MCAPI static int& GROWL_INTERVAL_MIN();

    MCAPI static int& MAX_PATH_RADIUS();

    MCAPI static float& SITTING_ALLOWED_DAMAGE_PERCENTAGE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $remove();

    MCAPI void $setSitting(bool value);

    MCFOLD bool $canBeAffected(uint id) const;

    MCAPI bool $isImmobile() const;

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCAPI ::Vec3 $getHeadLookVector(float a) const;

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI float $getShadowRadius() const;

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCFOLD bool $canBePulledIntoVehicle() const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void $tickDeath();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
