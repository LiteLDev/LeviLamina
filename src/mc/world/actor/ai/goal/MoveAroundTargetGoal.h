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
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MoveAroundTargetGoal : public ::Goal {
public:
    // MoveAroundTargetGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // MoveAroundTargetGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk589d9d;
        ::ll::UntypedStorage<4, 4>  mUnka1b7e9;
        ::ll::UntypedStorage<4, 4>  mUnk979048;
        ::ll::UntypedStorage<4, 8>  mUnk7863ae;
        ::ll::UntypedStorage<4, 4>  mUnk9feb00;
        ::ll::UntypedStorage<4, 4>  mUnk3e86b6;
        ::ll::UntypedStorage<4, 4>  mUnk17aa2c;
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
        MCAPI void initialize(::EntityContext& entity, ::MoveAroundTargetGoal& goal) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MoveAroundTargetGoal::Definition>>& root
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
    ::ll::UntypedStorage<8, 8>  mUnk4e2ebe;
    ::ll::UntypedStorage<1, 1>  mUnkda95a6;
    ::ll::UntypedStorage<8, 64> mUnk22600f;
    ::ll::UntypedStorage<4, 4>  mUnkfacebc;
    ::ll::UntypedStorage<4, 4>  mUnk1b3675;
    ::ll::UntypedStorage<4, 8>  mUnk1db01a;
    ::ll::UntypedStorage<4, 4>  mUnk3fbac4;
    ::ll::UntypedStorage<4, 4>  mUnkc99876;
    ::ll::UntypedStorage<4, 4>  mUnk6d2b98;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveAroundTargetGoal& operator=(MoveAroundTargetGoal const&);
    MoveAroundTargetGoal(MoveAroundTargetGoal const&);
    MoveAroundTargetGoal();

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
    virtual ~MoveAroundTargetGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MoveAroundTargetGoal(::Mob& mob);
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
