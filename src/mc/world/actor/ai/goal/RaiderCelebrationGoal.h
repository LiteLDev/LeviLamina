#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class EntityContext;
class Mob;
struct FloatRange;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RaiderCelebrationGoal : public ::Goal {
public:
    // RaiderCelebrationGoal inner types declare
    // clang-format off
    class RaiderCelebrationDefinition;
    // clang-format on

    // RaiderCelebrationGoal inner types define
    class RaiderCelebrationDefinition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnk3fc362;
        ::ll::UntypedStorage<4, 8>   mUnkb2e139;
        ::ll::UntypedStorage<4, 8>   mUnk1113c0;
        ::ll::UntypedStorage<4, 4>   mUnkb6f8ed;
        ::ll::UntypedStorage<8, 104> mUnk2fa6a6;
        // NOLINTEND

    public:
        // prevent constructor by default
        RaiderCelebrationDefinition& operator=(RaiderCelebrationDefinition const&);
        RaiderCelebrationDefinition(RaiderCelebrationDefinition const&);

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~RaiderCelebrationDefinition() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI RaiderCelebrationDefinition();

        MCAPI void addCelebrationSoundByName(::std::string const& name);

        MCAPI void initialize(::EntityContext& entity, ::RaiderCelebrationGoal& goal) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const&                                        name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
                ::JsonUtil::EmptyClass,
                ::RaiderCelebrationGoal::RaiderCelebrationDefinition>>& root
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::TypedStorage<4, 4, int>                                    mNextJumpTickTimer;
    ::ll::TypedStorage<4, 4, int>                                    mNextSoundTickTimer;
    ::ll::TypedStorage<4, 4, int>                                    mRuntimeTicks;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<4, 8, ::FloatRange>                           mSoundIntervalRange;
    ::ll::TypedStorage<4, 8, ::FloatRange>                           mJumpIntervalRange;
    ::ll::TypedStorage<4, 4, float>                                  mDuration;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>             mCelebrationEndEvent;
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
    virtual ~RaiderCelebrationGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RaiderCelebrationGoal(::Mob& mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
