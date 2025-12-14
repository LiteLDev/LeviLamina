#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Mob;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class KnockbackRoarGoal : public ::Goal {
public:
    // KnockbackRoarGoal inner types declare
    // clang-format off
    class KnockbackRoarDefinition;
    // clang-format on

    // KnockbackRoarGoal inner types define
    class KnockbackRoarDefinition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                      mMaxRoarDurationSeconds;
        ::ll::TypedStorage<4, 4, float>                      mMaxSecondsUntilAttack;
        ::ll::TypedStorage<4, 4, int>                        mKnockbackDamage;
        ::ll::TypedStorage<4, 4, int>                        mKnockbackHorizontalStrength;
        ::ll::TypedStorage<4, 4, int>                        mKnockbackVerticalStrength;
        ::ll::TypedStorage<4, 4, float>                      mHeightCap;
        ::ll::TypedStorage<4, 4, int>                        mKnockbackEffectRange;
        ::ll::TypedStorage<4, 4, float>                      mMaxCooldownSeconds;
        ::ll::TypedStorage<8, 64, ::ActorFilterGroup>        mKnockbackFilterGroup;
        ::ll::TypedStorage<8, 64, ::ActorFilterGroup>        mDamageFilterGroup;
        ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnRoarEnd;
        ::ll::TypedStorage<1, 1, bool>                       mFilterEvaluateFix;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~KnockbackRoarDefinition() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void initialize(::EntityContext& entity, ::KnockbackRoarGoal& goal) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::KnockbackRoarGoal::KnockbackRoarDefinition>>&
                root
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    ::ll::TypedStorage<8, 8, ::Mob&>                     mMob;
    ::ll::TypedStorage<4, 4, int>                        mMaxRoarDurationTicks;
    ::ll::TypedStorage<4, 4, int>                        mMaxTicksUntilAttack;
    ::ll::TypedStorage<4, 4, int>                        mKnockbackDamage;
    ::ll::TypedStorage<4, 4, int>                        mKnockbackHorizontalStrength;
    ::ll::TypedStorage<4, 4, int>                        mKnockbackVerticalStrength;
    ::ll::TypedStorage<4, 4, float>                      mHeightCap;
    ::ll::TypedStorage<4, 4, int>                        mKnockbackEffectRange;
    ::ll::TypedStorage<4, 4, int>                        mMaxCooldownTicks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>        mKnockbackFilterGroup;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>        mDamageFilterGroup;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnRoarEnd;
    ::ll::TypedStorage<1, 1, bool>                       mFilterEvaluateFix;
    ::ll::TypedStorage<4, 4, int>                        mCurrentCooldownTicks;
    ::ll::TypedStorage<4, 4, int>                        mCurrentRoarTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    KnockbackRoarGoal& operator=(KnockbackRoarGoal const&);
    KnockbackRoarGoal(KnockbackRoarGoal const&);
    KnockbackRoarGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~KnockbackRoarGoal() /*override*/ = default;
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
