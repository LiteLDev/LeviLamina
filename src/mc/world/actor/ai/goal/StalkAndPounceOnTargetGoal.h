#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ActorFilterGroup;
class Mob;
class Vec3;
// clang-format on

class StalkAndPounceOnTargetGoal : public ::Goal {
public:
    // StalkAndPounceOnTargetGoal inner types define
    enum class StalkAndPounceState : uchar {
        Stalking   = 0,
        Interested = 1,
        Pouncing   = 2,
        Stuck      = 3,
        Done       = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk86ffeb;
    ::ll::UntypedStorage<4, 4>  mUnk3cafff;
    ::ll::UntypedStorage<4, 4>  mUnkfaf93b;
    ::ll::UntypedStorage<4, 4>  mUnkc3ce4d;
    ::ll::UntypedStorage<4, 4>  mUnke6e24c;
    ::ll::UntypedStorage<4, 4>  mUnk78098c;
    ::ll::UntypedStorage<4, 4>  mUnk358953;
    ::ll::UntypedStorage<4, 4>  mUnk7d81ee;
    ::ll::UntypedStorage<8, 8>  mUnkf64601;
    ::ll::UntypedStorage<8, 64> mUnk5e3ec9;
    ::ll::UntypedStorage<1, 1>  mUnkc7ec2b;
    ::ll::UntypedStorage<8, 8>  mUnk63e016;
    ::ll::UntypedStorage<1, 1>  mUnk816196;
    // NOLINTEND

public:
    // prevent constructor by default
    StalkAndPounceOnTargetGoal& operator=(StalkAndPounceOnTargetGoal const&);
    StalkAndPounceOnTargetGoal(StalkAndPounceOnTargetGoal const&);
    StalkAndPounceOnTargetGoal();

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

    // vIndex: 3
    virtual bool canBeInterrupted() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~StalkAndPounceOnTargetGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StalkAndPounceOnTargetGoal(
        ::Mob&                    mob,
        ::ActorFilterGroup const& stuckBlocks,
        float                     stalkSpeed,
        float                     stalkGiveUpDist,
        float                     leapHeight,
        float                     leapDist,
        float                     maxPounceDist,
        float                     strikeDistance,
        float                     interestedTime,
        float                     stuckTime,
        bool                      setPersistent
    );

    MCAPI void _attemptToStrike(::Vec3 const& mobPos, ::Vec3 const& targetPos);

    MCAPI void _pounce(::Vec3 const& mobPos, ::Vec3 const& targetPos) const;

    MCAPI void _preparePounce(::Vec3 const& mobPos, ::Vec3 const& targetPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                    mob,
        ::ActorFilterGroup const& stuckBlocks,
        float                     stalkSpeed,
        float                     stalkGiveUpDist,
        float                     leapHeight,
        float                     leapDist,
        float                     maxPounceDist,
        float                     strikeDistance,
        float                     interestedTime,
        float                     stuckTime,
        bool                      setPersistent
    );
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

    MCAPI bool $canBeInterrupted();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
