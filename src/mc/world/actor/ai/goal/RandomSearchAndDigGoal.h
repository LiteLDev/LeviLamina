#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/actor/ai/util/ExpiringTick.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class BlockDescriptor;
class BlockSource;
class EntityContext;
class Mob;
class Path;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RandomSearchAndDigGoal : public ::Goal {
public:
    // RandomSearchAndDigGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // RandomSearchAndDigGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnk4238e5;
        ::ll::UntypedStorage<4, 4>   mUnka8d56d;
        ::ll::UntypedStorage<4, 4>   mUnkfb237e;
        ::ll::UntypedStorage<4, 4>   mUnk76bbab;
        ::ll::UntypedStorage<4, 4>   mUnk7ee553;
        ::ll::UntypedStorage<4, 4>   mUnkabc13c;
        ::ll::UntypedStorage<4, 4>   mUnk982b6b;
        ::ll::UntypedStorage<4, 4>   mUnk1a41fe;
        ::ll::UntypedStorage<4, 8>   mUnk6fd5b8;
        ::ll::UntypedStorage<4, 8>   mUnk3568bb;
        ::ll::UntypedStorage<8, 104> mUnka78a58;
        ::ll::UntypedStorage<8, 104> mUnkb75651;
        ::ll::UntypedStorage<8, 104> mUnkab4305;
        ::ll::UntypedStorage<8, 104> mUnk6d29d0;
        ::ll::UntypedStorage<8, 104> mUnkaa0a4f;
        ::ll::UntypedStorage<8, 104> mUnk2873e0;
        ::ll::UntypedStorage<8, 24>  mUnk8c296b;
        ::ll::UntypedStorage<8, 32>  mUnk75129d;
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
        MCNAPI Definition();

        MCNAPI void addBlockDescriptor(::BlockDescriptor const& blockDescriptor);

        MCNAPI void initialize(::EntityContext& entity, ::RandomSearchAndDigGoal& goal) const;

        MCNAPI ::RandomSearchAndDigGoal::Definition& operator=(::RandomSearchAndDigGoal::Definition const&);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::RandomSearchAndDigGoal::Definition>>& root
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    enum class CanUseOutcome : int {
        Ok                    = 0,
        InCooldown            = 1,
        NoNavigation          = 2,
        CouldNotFindTargetPos = 3,
        CouldNotCreatePath    = 4,
        CouldNotPathAllTheWay = 5,
    };

    enum class State : int {
        Searching = 0,
        Digging   = 1,
        Success   = 2,
        Done      = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 776, ::RandomSearchAndDigGoal::Definition> mDefinition;
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::TypedStorage<4, 4, ::RandomSearchAndDigGoal::State>        mState;
    ::ll::TypedStorage<4, 4, float>                                  mGoalRadiusSqr;
    ::ll::TypedStorage<1, 1, bool>                                   mItemFound;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mTargetPos;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>              mPath;
    ::ll::TypedStorage<2, 2, ushort>                                 mCooldownDurationTicks;
    ::ll::TypedStorage<2, 2, ushort>                                 mDiggingDurationTicks;
    ::ll::TypedStorage<2, 2, ushort>                                 mSpawnItemAfterTicks;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mCooldownEndTick;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mItemFoundEndTick;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mDiggingEndTick;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>>       mDiggingParticleCooldown;
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
    virtual ~RandomSearchAndDigGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::RandomSearchAndDigGoal::CanUseOutcome _canUse();

    MCNAPI void _digUpItems();

    MCNAPI void _emitDiggingParticles();

    MCNAPI ::std::optional<::BlockPos> _findWantedTargetPos() const;

    MCNAPI bool _isValidTarget(::BlockSource const& region, ::BlockPos pos) const;

    MCNAPI void _triggerEvent(::ActorDefinitionTrigger const& eventTrigger) const;
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
