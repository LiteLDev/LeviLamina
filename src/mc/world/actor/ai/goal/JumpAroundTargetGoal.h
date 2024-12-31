#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class EntityContext;
class Mob;
class Vec3;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class JumpAroundTargetGoal : public ::Goal {
public:
    // JumpAroundTargetGoal inner types declare
    // clang-format off
    class Definition;
    struct Jump;
    // clang-format on

    // JumpAroundTargetGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk847e09;
        ::ll::UntypedStorage<4, 4>  mUnkce9b72;
        ::ll::UntypedStorage<4, 4>  mUnk1a5390;
        ::ll::UntypedStorage<4, 4>  mUnk3d9f20;
        ::ll::UntypedStorage<4, 4>  mUnk444002;
        ::ll::UntypedStorage<4, 4>  mUnk5c2703;
        ::ll::UntypedStorage<1, 1>  mUnka2d6e7;
        ::ll::UntypedStorage<4, 4>  mUnk44730f;
        ::ll::UntypedStorage<4, 4>  mUnkd2f898;
        ::ll::UntypedStorage<4, 8>  mUnkad043e;
        ::ll::UntypedStorage<4, 4>  mUnk89c7c3;
        ::ll::UntypedStorage<4, 8>  mUnk4501ce;
        ::ll::UntypedStorage<4, 4>  mUnkc54ede;
        ::ll::UntypedStorage<4, 4>  mUnkdc5697;
        ::ll::UntypedStorage<4, 4>  mUnkfe105c;
        ::ll::UntypedStorage<8, 24> mUnk35c3f0;
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
        // member functions
        // NOLINTBEGIN
        MCAPI void initialize(::EntityContext& entity, ::JumpAroundTargetGoal& goal) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::JumpAroundTargetGoal::Definition>>& root
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

    enum class State : int {
        PrepareJump = 0,
        Jumping     = 1,
        Done        = 2,
    };

    struct Jump {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkfedd89;
        ::ll::UntypedStorage<4, 12> mUnkc7e376;
        // NOLINTEND

    public:
        // prevent constructor by default
        Jump& operator=(Jump const&);
        Jump(Jump const&);
        Jump();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk6de47b;
    ::ll::UntypedStorage<4, 4>  mUnk4a8455;
    ::ll::UntypedStorage<4, 4>  mUnk3d2e60;
    ::ll::UntypedStorage<4, 4>  mUnk94cba2;
    ::ll::UntypedStorage<4, 4>  mUnkd07fab;
    ::ll::UntypedStorage<1, 1>  mUnk546dca;
    ::ll::UntypedStorage<4, 4>  mUnk54e8d4;
    ::ll::UntypedStorage<4, 4>  mUnk1f0a08;
    ::ll::UntypedStorage<4, 8>  mUnk567255;
    ::ll::UntypedStorage<4, 4>  mUnk935772;
    ::ll::UntypedStorage<4, 8>  mUnk8695db;
    ::ll::UntypedStorage<4, 4>  mUnk3921d0;
    ::ll::UntypedStorage<4, 4>  mUnk414bb9;
    ::ll::UntypedStorage<8, 24> mUnk537687;
    ::ll::UntypedStorage<4, 4>  mUnk568d85;
    ::ll::UntypedStorage<8, 8>  mUnk4dbb9f;
    ::ll::UntypedStorage<1, 1>  mUnk96be03;
    ::ll::UntypedStorage<8, 8>  mUnk4bd0ad;
    ::ll::UntypedStorage<4, 24> mUnk375b65;
    ::ll::UntypedStorage<4, 4>  mUnk17e6df;
    ::ll::UntypedStorage<4, 12> mUnkfdda0d;
    ::ll::UntypedStorage<8, 8>  mUnk746815;
    ::ll::UntypedStorage<8, 8>  mUnka9674f;
    ::ll::UntypedStorage<4, 28> mUnk832c20;
    ::ll::UntypedStorage<8, 8>  mUnka97799;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpAroundTargetGoal& operator=(JumpAroundTargetGoal const&);
    JumpAroundTargetGoal(JumpAroundTargetGoal const&);
    JumpAroundTargetGoal();

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
    virtual ~JumpAroundTargetGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit JumpAroundTargetGoal(::Mob& mob);

    MCAPI ::std::optional<::JumpAroundTargetGoal::Jump> _calculateOptimalJumpVector(::Vec3 const& targetPosition) const;

    MCAPI ::std::optional<::BlockPos> _snapToSurface(::Vec3 const& targetPosition) const;
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

    MCAPI bool $canBeInterrupted();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
