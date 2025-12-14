#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Mob;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InvestigateSuspiciousLocationGoal : public ::Goal {
public:
    // InvestigateSuspiciousLocationGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // InvestigateSuspiciousLocationGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mSpeedMultiplier;
        ::ll::TypedStorage<4, 4, float> mGoalRadius;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Definition() /*override*/ = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const&                                   name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
                ::JsonUtil::EmptyClass,
                ::InvestigateSuspiciousLocationGoal::Definition>>& root
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
    ::ll::TypedStorage<8, 8, ::Mob&>      mMob;
    ::ll::TypedStorage<4, 12, ::Vec3>     mWantedPosition;
    ::ll::TypedStorage<4, 12, ::BlockPos> mChosenEndPos;
    ::ll::TypedStorage<4, 4, float>       mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>       mGoalRadiusSq;
    ::ll::TypedStorage<1, 1, bool>        mPathingInvalid;
    ::ll::TypedStorage<1, 1, bool>        mReachedTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    InvestigateSuspiciousLocationGoal& operator=(InvestigateSuspiciousLocationGoal const&);
    InvestigateSuspiciousLocationGoal(InvestigateSuspiciousLocationGoal const&);
    InvestigateSuspiciousLocationGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~InvestigateSuspiciousLocationGoal() /*override*/ = default;
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
