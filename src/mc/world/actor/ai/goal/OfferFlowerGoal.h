#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ActorFilterGroup;
class EntityContext;
class Mob;
class SemVersion;
class Vec3;
class WeakEntityRef;
struct Tick;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class OfferFlowerGoal : public ::Goal {
public:
    // OfferFlowerGoal inner types declare
    // clang-format off
    class OfferFlowerDefinition;
    // clang-format on

    // OfferFlowerGoal inner types define
    class OfferFlowerDefinition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkb53867;
        ::ll::UntypedStorage<4, 4>  mUnk27c5f9;
        ::ll::UntypedStorage<8, 64> mUnkd106a1;
        ::ll::UntypedStorage<4, 12> mUnkc20c91;
        ::ll::UntypedStorage<4, 4>  mUnke4f2cb;
        ::ll::UntypedStorage<4, 4>  mUnk6ce882;
        // NOLINTEND

    public:
        // prevent constructor by default
        OfferFlowerDefinition& operator=(OfferFlowerDefinition const&);
        OfferFlowerDefinition(OfferFlowerDefinition const&);
        OfferFlowerDefinition();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~OfferFlowerDefinition() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void initialize(::EntityContext& entity, ::OfferFlowerGoal& goal) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::OfferFlowerGoal::OfferFlowerDefinition>>&
                root
        );

        MCAPI static ::SemVersion getStrictParsingVersion();
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
    ::ll::TypedStorage<4, 4, int>                 mMaxOfferFlowerDurationTicks;
    ::ll::TypedStorage<4, 4, float>               mChanceToStart;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilters;
    ::ll::TypedStorage<4, 12, ::Vec3>             mSearchArea;
    ::ll::TypedStorage<4, 4, float>               mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>               mMaxHeadRotationY;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>    mTakeFlowerMob;
    ::ll::TypedStorage<8, 8, ::Tick>              mTimeoutTick;
    ::ll::TypedStorage<8, 8, ::Mob&>              mMob;
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
    virtual ~OfferFlowerGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OfferFlowerGoal(::Mob& mob);

    MCFOLD int getMaxOfferFlowerDurationTicks() const;
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
