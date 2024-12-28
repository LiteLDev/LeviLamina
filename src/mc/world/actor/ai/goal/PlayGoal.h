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
class SemVersion;
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
        virtual ~PlayDefinition() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void initialize(::EntityContext& entity, ::PlayGoal& goal) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::PlayGoal::PlayDefinition>>&
                root
        );

        MCAPI static ::SemVersion getStrictParsingVersion();
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk959bc8;
    ::ll::UntypedStorage<4, 4>  mUnk455562;
    ::ll::UntypedStorage<4, 4>  mUnkeb7537;
    ::ll::UntypedStorage<8, 24> mUnk28e02e;
    ::ll::UntypedStorage<4, 12> mUnkc299b3;
    ::ll::UntypedStorage<4, 4>  mUnk56da34;
    ::ll::UntypedStorage<4, 4>  mUnk3b46db;
    ::ll::UntypedStorage<4, 4>  mUnkbbf2a3;
    ::ll::UntypedStorage<4, 4>  mUnkab238f;
    ::ll::UntypedStorage<8, 8>  mUnk976192;
    ::ll::UntypedStorage<8, 40> mUnk83e94c;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayGoal& operator=(PlayGoal const&);
    PlayGoal(PlayGoal const&);
    PlayGoal();

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
    virtual ~PlayGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayGoal(::Mob& mob);
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

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
