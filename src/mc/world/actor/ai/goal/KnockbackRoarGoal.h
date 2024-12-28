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

class KnockbackRoarGoal : public ::Goal {
public:
    // KnockbackRoarGoal inner types declare
    // clang-format off
    class KnockbackRoarDefinition;
    // clang-format on

    // KnockbackRoarGoal inner types define
    class KnockbackRoarDefinition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnkae121c;
        ::ll::UntypedStorage<4, 4>   mUnk94efa3;
        ::ll::UntypedStorage<4, 4>   mUnk5618a4;
        ::ll::UntypedStorage<4, 4>   mUnkbf90f4;
        ::ll::UntypedStorage<4, 4>   mUnk846fd7;
        ::ll::UntypedStorage<4, 4>   mUnk83f7b0;
        ::ll::UntypedStorage<4, 4>   mUnk9c3129;
        ::ll::UntypedStorage<4, 4>   mUnk7f7582;
        ::ll::UntypedStorage<8, 64>  mUnkf3008d;
        ::ll::UntypedStorage<8, 64>  mUnkeede97;
        ::ll::UntypedStorage<8, 104> mUnkd904c6;
        ::ll::UntypedStorage<1, 1>   mUnk2f039f;
        // NOLINTEND

    public:
        // prevent constructor by default
        KnockbackRoarDefinition& operator=(KnockbackRoarDefinition const&);
        KnockbackRoarDefinition(KnockbackRoarDefinition const&);
        KnockbackRoarDefinition();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~KnockbackRoarDefinition() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void initialize(::EntityContext& entity, ::KnockbackRoarGoal& goal) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::KnockbackRoarGoal::KnockbackRoarDefinition>>&
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
    ::ll::UntypedStorage<8, 8>   mUnk41123d;
    ::ll::UntypedStorage<4, 4>   mUnk8f441d;
    ::ll::UntypedStorage<4, 4>   mUnkfd4153;
    ::ll::UntypedStorage<4, 4>   mUnk101aad;
    ::ll::UntypedStorage<4, 4>   mUnkf63903;
    ::ll::UntypedStorage<4, 4>   mUnk99a8bf;
    ::ll::UntypedStorage<4, 4>   mUnkc3bb33;
    ::ll::UntypedStorage<4, 4>   mUnk589f84;
    ::ll::UntypedStorage<4, 4>   mUnkc0ac85;
    ::ll::UntypedStorage<8, 64>  mUnkd4eb85;
    ::ll::UntypedStorage<8, 64>  mUnk34e419;
    ::ll::UntypedStorage<8, 104> mUnk4ad607;
    ::ll::UntypedStorage<1, 1>   mUnk9085ec;
    ::ll::UntypedStorage<4, 4>   mUnkccc044;
    ::ll::UntypedStorage<4, 4>   mUnkb1fd21;
    // NOLINTEND

public:
    // prevent constructor by default
    KnockbackRoarGoal& operator=(KnockbackRoarGoal const&);
    KnockbackRoarGoal(KnockbackRoarGoal const&);
    KnockbackRoarGoal();

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
    virtual ~KnockbackRoarGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit KnockbackRoarGoal(::Mob& mob);
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
