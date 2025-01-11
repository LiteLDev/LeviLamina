#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Mob;
struct DistanceSortedActor;
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

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Definition();

        MCAPI void initialize(::EntityContext& entity, ::SniffGoal& goal) const;
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
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
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
    ::ll::UntypedStorage<8, 8>  mUnk127f63;
    ::ll::UntypedStorage<4, 12> mUnk38a0a0;
    ::ll::UntypedStorage<4, 8>  mUnk71a353;
    ::ll::UntypedStorage<2, 2>  mUnk664b71;
    ::ll::UntypedStorage<8, 8>  mUnk8cb558;
    ::ll::UntypedStorage<8, 8>  mUnkd4f69b;
    ::ll::UntypedStorage<4, 4>  mUnka684b6;
    ::ll::UntypedStorage<4, 4>  mUnk8ee75a;
    // NOLINTEND

public:
    // prevent constructor by default
    SniffGoal& operator=(SniffGoal const&);
    SniffGoal(SniffGoal const&);
    SniffGoal();

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
    MCAPI explicit SniffGoal(::Mob& mob);

    MCAPI ::std::vector<::DistanceSortedActor> _fetchNearbySniffableActors(::ActorType actorType) const;

    MCAPI ::std::optional<::DistanceSortedActor> _fetchNearestSniffableActor() const;
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

    MCFOLD void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
