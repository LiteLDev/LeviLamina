#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TakeFlowerGoal : public ::Goal {
public:
    // TakeFlowerGoal inner types declare
    // clang-format off
    class TakeFlowerDefinition;
    // clang-format on

    // TakeFlowerGoal inner types define
    class TakeFlowerDefinition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>               mSpeedModifier;
        ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilters;
        ::ll::TypedStorage<4, 4, float>               mMinPickupFlowerWaitSeconds;
        ::ll::TypedStorage<4, 4, float>               mMaxPickupFlowerWaitSeconds;
        ::ll::TypedStorage<4, 12, ::Vec3>             mSearchArea;
        ::ll::TypedStorage<4, 4, float>               mMaxRotationX;
        ::ll::TypedStorage<4, 4, float>               mMaxHeadRotationY;
        ::ll::TypedStorage<4, 4, float>               mMinDistanceToTarget;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~TakeFlowerDefinition() /*override*/ = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TakeFlowerGoal::TakeFlowerDefinition>>& root
        );
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>               mSpeedModifier;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilters;
    ::ll::TypedStorage<4, 4, float>               mMinPickupFlowerWaitTicks;
    ::ll::TypedStorage<4, 4, float>               mMaxPickupFlowerWaitTicks;
    ::ll::TypedStorage<4, 12, ::Vec3>             mSearchArea;
    ::ll::TypedStorage<4, 4, float>               mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>               mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>               mMinDistanceToTargetSquared;
    ::ll::TypedStorage<4, 4, int>                 mPickupFlowerTick;
    ::ll::TypedStorage<1, 1, bool>                mTakeFlower;
    ::ll::TypedStorage<8, 8, ::Mob&>              mMob;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>    mOfferFlowerMob;
    // NOLINTEND

public:
    // prevent constructor by default
    TakeFlowerGoal& operator=(TakeFlowerGoal const&);
    TakeFlowerGoal(TakeFlowerGoal const&);
    TakeFlowerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~TakeFlowerGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
