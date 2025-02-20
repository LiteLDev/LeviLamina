#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Vec3;
struct DistanceSortedActor;
struct FloatRange;
struct Tick;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SniffGoal : public ::Goal {
public:
    // SniffGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // SniffGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk4e5c3a;
        ::ll::UntypedStorage<4, 4> mUnk36f1db;
        ::ll::UntypedStorage<4, 4> mUnke583fe;
        ::ll::UntypedStorage<4, 4> mUnk3a8303;
        ::ll::UntypedStorage<4, 8> mUnkaa5169;
        // NOLINTEND

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() /*override*/ = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const&                                                                                  name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SniffGoal::Definition>>& root
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
    ::ll::TypedStorage<8, 8, ::Mob&>       mMob;
    ::ll::TypedStorage<4, 12, ::Vec3>      mSniffingRadius;
    ::ll::TypedStorage<4, 8, ::FloatRange> mCooldownRangeSeconds;
    ::ll::TypedStorage<2, 2, ushort>       mDurationTicks;
    ::ll::TypedStorage<8, 8, ::Tick>       mEndTick;
    ::ll::TypedStorage<8, 8, ::Tick>       mCooldownExpiryTick;
    ::ll::TypedStorage<4, 4, float>        mSuspicionRadiusHorizontal;
    ::ll::TypedStorage<4, 4, float>        mSuspicionRadiusVertical;
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
    virtual ~SniffGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::DistanceSortedActor> _fetchNearbySniffableActors(::ActorType actorType) const;

    MCAPI ::std::optional<::DistanceSortedActor> _fetchNearestSniffableActor() const;
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

    MCFOLD void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
