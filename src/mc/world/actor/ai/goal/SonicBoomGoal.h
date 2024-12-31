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

class SonicBoomGoal : public ::Goal {
public:
    // SonicBoomGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // SonicBoomGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk11af3a;
        ::ll::UntypedStorage<4, 4>  mUnka719e0;
        ::ll::UntypedStorage<4, 4>  mUnkd8351d;
        ::ll::UntypedStorage<4, 4>  mUnk5a0044;
        ::ll::UntypedStorage<4, 4>  mUnkf88d75;
        ::ll::UntypedStorage<4, 4>  mUnkc5eeb7;
        ::ll::UntypedStorage<4, 4>  mUnk620727;
        ::ll::UntypedStorage<4, 4>  mUnk36eafc;
        ::ll::UntypedStorage<4, 4>  mUnk73df70;
        ::ll::UntypedStorage<4, 4>  mUnkab5d4f;
        ::ll::UntypedStorage<8, 32> mUnka60694;
        ::ll::UntypedStorage<8, 32> mUnkb8a8a1;
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
        MCAPI void initialize(::EntityContext& entity, ::SonicBoomGoal& goal) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SonicBoomGoal::Definition>>&
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
    ::ll::UntypedStorage<8, 8>  mUnk434c31;
    ::ll::UntypedStorage<4, 4>  mUnk3bd807;
    ::ll::UntypedStorage<4, 4>  mUnkcff4a4;
    ::ll::UntypedStorage<4, 4>  mUnk40a8ba;
    ::ll::UntypedStorage<4, 4>  mUnk6911f5;
    ::ll::UntypedStorage<4, 4>  mUnk13e5ba;
    ::ll::UntypedStorage<4, 4>  mUnk7367a4;
    ::ll::UntypedStorage<4, 4>  mUnk8ad6be;
    ::ll::UntypedStorage<2, 2>  mUnk760007;
    ::ll::UntypedStorage<2, 2>  mUnkfd66bd;
    ::ll::UntypedStorage<2, 2>  mUnk2f7fe4;
    ::ll::UntypedStorage<4, 4>  mUnkfcefd7;
    ::ll::UntypedStorage<4, 4>  mUnk236ba1;
    ::ll::UntypedStorage<8, 24> mUnk147938;
    ::ll::UntypedStorage<8, 24> mUnk5ea725;
    ::ll::UntypedStorage<8, 24> mUnk7b2f1f;
    ::ll::UntypedStorage<8, 24> mUnk1b3e9b;
    // NOLINTEND

public:
    // prevent constructor by default
    SonicBoomGoal& operator=(SonicBoomGoal const&);
    SonicBoomGoal(SonicBoomGoal const&);
    SonicBoomGoal();

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
    virtual ~SonicBoomGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SonicBoomGoal(::Mob& mob);
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
