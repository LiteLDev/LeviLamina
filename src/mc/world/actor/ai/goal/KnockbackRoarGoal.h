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
        ::ll::UntypedStorage<4, 4>   mUnkae121c;
        ::ll::UntypedStorage<4, 4>   mUnk94efa3;
        ::ll::UntypedStorage<4, 4>   mUnk5618a4;
        ::ll::UntypedStorage<4, 4>   mUnkbf90f4;
        ::ll::UntypedStorage<4, 4>   mUnk846fd7;
        ::ll::UntypedStorage<4, 4>   mUnk83f7b0;
        ::ll::UntypedStorage<4, 4>   mUnk9c3129;
        ::ll::UntypedStorage<4, 4>   mUnk7f7582;
        ::ll::UntypedStorage<8, 64>  mUnkf3008d;
        ::ll::UntypedStorage<8, 64>  mUnkeede97;
        ::ll::UntypedStorage<8, 104> mUnkd904c6;
        ::ll::UntypedStorage<1, 1>   mUnk2f039f;
        // NOLINTEND

    public:
        // prevent constructor by default
        KnockbackRoarDefinition& operator=(KnockbackRoarDefinition const&);
        KnockbackRoarDefinition(KnockbackRoarDefinition const&);
        KnockbackRoarDefinition();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~KnockbackRoarDefinition() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void initialize(::EntityContext& entity, ::KnockbackRoarGoal& goal) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::KnockbackRoarGoal::KnockbackRoarDefinition>>&
                root
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
    virtual ~KnockbackRoarGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
