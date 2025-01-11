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
class NavigationComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class JumpToBlockGoal : public ::Goal {
public:
    // JumpToBlockGoal inner types declare
    // clang-format off
    class Definition;
    struct WeightedJumpToBlockPos;
    // clang-format on

    // JumpToBlockGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkf951bd;
        ::ll::UntypedStorage<4, 4>  mUnkca792f;
        ::ll::UntypedStorage<4, 4>  mUnk408f62;
        ::ll::UntypedStorage<4, 4>  mUnk7b4fd6;
        ::ll::UntypedStorage<4, 8>  mUnk835c86;
        ::ll::UntypedStorage<4, 4>  mUnk35e09f;
        ::ll::UntypedStorage<4, 4>  mUnkb92dc7;
        ::ll::UntypedStorage<8, 24> mUnk5db1ed;
        ::ll::UntypedStorage<4, 4>  mUnkcd10c0;
        ::ll::UntypedStorage<8, 24> mUnka9f5e1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
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

        MCAPI void initialize(::EntityContext& entity, ::JumpToBlockGoal& goal) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::JumpToBlockGoal::Definition>>&
                root
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

    enum class JumpState : uchar {
        LookingForBlock = 0,
        FaceJump        = 1,
        Jump            = 2,
        Airborne        = 3,
        Done            = 4,
    };

    struct WeightedJumpToBlockPos {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkb2bcc9;
        ::ll::UntypedStorage<4, 12> mUnkdcd117;
        ::ll::UntypedStorage<4, 4>  mUnk99b073;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedJumpToBlockPos& operator=(WeightedJumpToBlockPos const&);
        WeightedJumpToBlockPos(WeightedJumpToBlockPos const&);
        WeightedJumpToBlockPos();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkc1a99e;
    ::ll::UntypedStorage<1, 1>   mUnk64ec2f;
    ::ll::UntypedStorage<8, 8>   mUnkd58433;
    ::ll::UntypedStorage<8, 8>   mUnk5a894a;
    ::ll::UntypedStorage<4, 4>   mUnk92ff91;
    ::ll::UntypedStorage<1, 1>   mUnk539581;
    ::ll::UntypedStorage<8, 24>  mUnk323303;
    ::ll::UntypedStorage<4, 12>  mUnk9a0987;
    ::ll::UntypedStorage<8, 24>  mUnk9c9a5a;
    ::ll::UntypedStorage<4, 12>  mUnk9ba9b0;
    ::ll::UntypedStorage<8, 24>  mUnkca9cbd;
    ::ll::UntypedStorage<4, 12>  mUnkb5a404;
    ::ll::UntypedStorage<8, 8>   mUnk915a0c;
    ::ll::UntypedStorage<8, 136> mUnk47d5e1;
    ::ll::UntypedStorage<4, 24>  mUnk784b3a;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpToBlockGoal& operator=(JumpToBlockGoal const&);
    JumpToBlockGoal(JumpToBlockGoal const&);
    JumpToBlockGoal();

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
    virtual ~JumpToBlockGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit JumpToBlockGoal(::Mob& mob);

    MCAPI void _clearGoalState();

    MCAPI bool _findCandidateBlocks(::NavigationComponent& navigation);

    MCAPI bool _findJumpableBlocks(bool useOnlyPreferredBlocksIfAny);

    MCAPI bool _findTargetBlock();

    MCAPI void resetCooldown();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCFOLD bool $canBeInterrupted();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
