#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Mob;
class Path;
class Vec3;
struct ActorUniqueID;
struct Tick;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EatMobGoal : public ::Goal {
public:
    // EatMobGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // EatMobGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk796103;
        ::ll::UntypedStorage<4, 4>  mUnk4189e1;
        ::ll::UntypedStorage<4, 4>  mUnk92deb5;
        ::ll::UntypedStorage<4, 4>  mUnk296b24;
        ::ll::UntypedStorage<8, 32> mUnk7b7d63;
        ::ll::UntypedStorage<8, 32> mUnk564b25;
        // NOLINTEND

    public:
        // prevent constructor by default
        Definition(Definition const&);

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Definition();

        MCAPI void initialize(::EntityContext& entity, ::EatMobGoal& goal) const;

        MCAPI ::EatMobGoal::Definition& operator=(::EatMobGoal::Definition const&);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const&                                                                                   name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EatMobGoal::Definition>>& root
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
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

    enum class State : int {
        MoveToTarget = 0,
        EatAnimation = 1,
        Done         = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                     mMob;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mTargetId;
    ::ll::TypedStorage<8, 128, ::EatMobGoal::Definition> mDefinition;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>  mPath;
    ::ll::TypedStorage<4, 4, ::EatMobGoal::State>        mState;
    ::ll::TypedStorage<8, 8, ::Tick>                     mEatAnimationTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                     mLastPathCalculationTick;
    ::ll::TypedStorage<1, 1, bool>                       mShouldKillTarget;
    ::ll::TypedStorage<4, 12, ::Vec3>                    mDropPos;
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
    virtual ~EatMobGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EatMobGoal(::Mob& mob);
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
