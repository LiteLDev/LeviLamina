#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/level/pathfinder/BinaryHeap.h"
#include "mc/world/level/pathfinder/PathCompletionType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class BlockPos;
class EnderCrystal;
class EntityContext;
class Path;
class PathfinderNode;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class EnderDragon : public ::Monster {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>                  mPath;
    ::ll::TypedStorage<4, 768, ::std::array<::std::array<float, 3>, 64>> mPositions;
    ::ll::TypedStorage<4, 4, int>                                        mPosPointer;
    ::ll::TypedStorage<8, 8, ::AABB*>                                    mHead;
    ::ll::TypedStorage<8, 8, ::AABB*>                                    mNeck;
    ::ll::TypedStorage<8, 8, ::AABB*>                                    mBody;
    ::ll::TypedStorage<8, 8, ::AABB*>                                    mTail1;
    ::ll::TypedStorage<8, 8, ::AABB*>                                    mTail2;
    ::ll::TypedStorage<8, 8, ::AABB*>                                    mTail3;
    ::ll::TypedStorage<8, 8, ::AABB*>                                    mWing1;
    ::ll::TypedStorage<8, 8, ::AABB*>                                    mWing2;
    ::ll::TypedStorage<1, 1, bool>                                       mInWall;
    ::ll::TypedStorage<4, 4, int>                                        mGrowlTime;
    ::ll::TypedStorage<4, 4, int>                                        mSittingDamageReceived;
    ::ll::TypedStorage<4, 4, float>                                      mTurnSpeed;
    ::ll::TypedStorage<4, 12, ::Vec3>                                    mTargetPos;
    ::ll::TypedStorage<4, 4, int>                                        mFlameAttackCount;
    ::ll::TypedStorage<1, 1, bool>                                       mNodesFinalized;
    ::ll::TypedStorage<8, 24, ::std::vector<::PathfinderNode>>           mNodes;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                        mNodeAdjacency;
    ::ll::TypedStorage<8, 32, ::BinaryHeap>                              mOpenSet;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                            mNearestCrystal;
    ::ll::TypedStorage<4, 4, int>                                        mEnderCrystalsAlive;
    ::ll::TypedStorage<1, 1, bool>                                       mDragonKilledPreviously;
    ::ll::TypedStorage<8, 64, ::std::function<void(::EnderDragon&)>>     mDragonKilledCallback;
    // NOLINTEND

public:
    // prevent constructor by default
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

    // vIndex: 56
    virtual void setSitting(bool value) /*override*/;

    // vIndex: 105
    virtual bool canBeAffected(uint id) const /*override*/;

    // vIndex: 40
    virtual bool isImmobile() const /*override*/;

    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    // vIndex: 36
    virtual ::Vec3 getHeadLookVector(float a) const /*override*/;

    // vIndex: 123
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 64
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 96
    virtual bool canBePulledIntoVehicle() const /*override*/;

    // vIndex: 173
    virtual void tickDeath() /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;
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

    MCAPI float _getHeadYOffset(float a) const;

    MCAPI bool _hurt(::AABB* part, ::ActorDamageSource const& source, float damage);

    MCAPI void _hurtEntities(::gsl::span<::gsl::not_null<::Actor*>> actors) const;

    MCAPI void _knockBack(::gsl::span<::gsl::not_null<::Actor*>> actors) const;

    MCAPI ::std::unique_ptr<::Path>
    _reconstructPath(::PathfinderNode& from, ::PathfinderNode& to, ::PathCompletionType completionType);

    MCAPI void dieNaturally();

    MCAPI int findClosestNode();

    MCAPI int findClosestNode(::Vec3 const& pos);

    MCAPI ::std::unique_ptr<::Path> findPath(int startIndex, int endIndex, ::PathfinderNode* finalNode);

    MCAPI ::std::vector<float> const getLatencyPos(int step, float a) const;

    MCAPI void onCrystalDestroyed(::EnderCrystal const& crystal, ::BlockPos pos, ::ActorDamageSource const& source);

    MCAPI void postAiStep();
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

    MCFOLD bool $isImmobile() const;

    MCAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCAPI ::Vec3 $getHeadLookVector(float a) const;

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI float $getShadowRadius() const;

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCFOLD bool $canBePulledIntoVehicle() const;

    MCAPI void $tickDeath();

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
