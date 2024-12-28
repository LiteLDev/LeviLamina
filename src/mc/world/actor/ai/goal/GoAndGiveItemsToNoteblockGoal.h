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

class GoAndGiveItemsToNoteblockGoal : public ::Goal {
public:
    // GoAndGiveItemsToNoteblockGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // GoAndGiveItemsToNoteblockGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk28921a;
        ::ll::UntypedStorage<4, 4>  mUnkefab65;
        ::ll::UntypedStorage<4, 4>  mUnkaee478;
        ::ll::UntypedStorage<4, 4>  mUnkc958ac;
        ::ll::UntypedStorage<4, 4>  mUnk78eead;
        ::ll::UntypedStorage<4, 4>  mUnk92db2e;
        ::ll::UntypedStorage<8, 24> mUnk6465d0;
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

        MCAPI void initialize(::EntityContext& entity, ::GoAndGiveItemsToNoteblockGoal& goal) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GoAndGiveItemsToNoteblockGoal::Definition>>&
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

    enum class State : int {
        GoToNoteblock = 0,
        Done          = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk656e86;
    ::ll::UntypedStorage<8, 96> mUnk23e7d0;
    ::ll::UntypedStorage<4, 4>  mUnkda4d61;
    ::ll::UntypedStorage<8, 8>  mUnk95b135;
    ::ll::UntypedStorage<4, 12> mUnkcb0bf0;
    // NOLINTEND

public:
    // prevent constructor by default
    GoAndGiveItemsToNoteblockGoal& operator=(GoAndGiveItemsToNoteblockGoal const&);
    GoAndGiveItemsToNoteblockGoal(GoAndGiveItemsToNoteblockGoal const&);
    GoAndGiveItemsToNoteblockGoal();

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
    virtual ~GoAndGiveItemsToNoteblockGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GoAndGiveItemsToNoteblockGoal(::Mob& mob);
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
