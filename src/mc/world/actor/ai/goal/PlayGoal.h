#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Vec3;
struct MobDescriptor;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class PlayGoal : public ::Goal {
public:
    // PlayGoal inner types declare
    // clang-format off
    class PlayDefinition;
    // clang-format on

    // PlayGoal inner types define
    class PlayDefinition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk3994ee;
        ::ll::UntypedStorage<4, 4>  mUnkaef927;
        ::ll::UntypedStorage<4, 4>  mUnk5423fd;
        ::ll::UntypedStorage<8, 24> mUnkc8bff3;
        ::ll::UntypedStorage<4, 12> mUnk72eb24;
        ::ll::UntypedStorage<4, 4>  mUnk440473;
        ::ll::UntypedStorage<4, 4>  mUnk78bf76;
        ::ll::UntypedStorage<4, 4>  mUnkdf7e47;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlayDefinition& operator=(PlayDefinition const&);
        PlayDefinition(PlayDefinition const&);
        PlayDefinition();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~PlayDefinition() /*override*/ = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::PlayGoal::PlayDefinition>>&
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
    ::ll::TypedStorage<4, 4, float>                           mSpeedModifier;
    ::ll::TypedStorage<4, 4, int>                             mMaxPlayDurationTicks;
    ::ll::TypedStorage<4, 4, float>                           mChanceToStart;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor>> mFriendTypes;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mFriendSearchArea;
    ::ll::TypedStorage<4, 4, int>                             mRandomPosSearchRange;
    ::ll::TypedStorage<4, 4, int>                             mRandomPosSearchHeight;
    ::ll::TypedStorage<4, 4, int>                             mFollowDistanceInBlocksSquared;
    ::ll::TypedStorage<4, 4, int>                             mCurrentPlayDurationTicks;
    ::ll::TypedStorage<8, 8, ::Mob&>                          mMob;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Mob>>              mFollowFriend;
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
    virtual ~PlayGoal() /*override*/ = default;
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
