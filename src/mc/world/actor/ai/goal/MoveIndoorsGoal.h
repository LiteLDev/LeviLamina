#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockPos;
class Mob;
struct Tick;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MoveIndoorsGoal : public ::Goal {
public:
    // MoveIndoorsGoal inner types declare
    // clang-format off
    class MoveIndoorsDefinition;
    // clang-format on

    // MoveIndoorsGoal inner types define
    class MoveIndoorsDefinition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk859fc8;
        ::ll::UntypedStorage<4, 4> mUnk4142d8;
        // NOLINTEND

    public:
        // prevent constructor by default
        MoveIndoorsDefinition& operator=(MoveIndoorsDefinition const&);
        MoveIndoorsDefinition(MoveIndoorsDefinition const&);
        MoveIndoorsDefinition();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~MoveIndoorsDefinition() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void addCooldownTicksBySeconds(float const& seconds);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MoveIndoorsGoal::MoveIndoorsDefinition>>&
                root
        );
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
    ::ll::TypedStorage<1, 1, bool>        mUsingPOI;
    ::ll::TypedStorage<1, 1, bool>        mPathingInvalid;
    ::ll::TypedStorage<4, 12, ::BlockPos> mInsidePos;
    ::ll::TypedStorage<4, 12, ::BlockPos> mStartPos;
    ::ll::TypedStorage<4, 24, ::AABB>     mPOIBoundingBox;
    ::ll::TypedStorage<8, 8, ::Tick>      mCooldownTimer;
    ::ll::TypedStorage<8, 8, ::Mob&>      mMob;
    ::ll::TypedStorage<8, 8, ::Tick>      mTimeoutCooldown;
    ::ll::TypedStorage<4, 4, float>       mSpeedModifier;
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
    virtual ~MoveIndoorsGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _isInside(::BlockPos const& pos);

    MCAPI void _startPathfinding();
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
