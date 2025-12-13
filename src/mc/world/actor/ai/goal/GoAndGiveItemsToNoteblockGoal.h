#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Path;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GoAndGiveItemsToNoteblockGoal : public ::Goal {
public:
    // GoAndGiveItemsToNoteblockGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // GoAndGiveItemsToNoteblockGoal inner types define
    enum class State : int {
        GoToNoteblock = 0,
        Done          = 1,
    };

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
        Definition();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Definition() /*override*/ = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GoAndGiveItemsToNoteblockGoal::Definition>>&
                root
        );
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                       mMob;
    ::ll::TypedStorage<8, 64, ::GoAndGiveItemsToNoteblockGoal::Definition> mDefinition;
    ::ll::TypedStorage<4, 4, ::GoAndGiveItemsToNoteblockGoal::State>       mState;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>                    mPath;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                  mTargetBlockPos;
    // NOLINTEND

public:
    // prevent constructor by default
    GoAndGiveItemsToNoteblockGoal& operator=(GoAndGiveItemsToNoteblockGoal const&);
    GoAndGiveItemsToNoteblockGoal(GoAndGiveItemsToNoteblockGoal const&);
    GoAndGiveItemsToNoteblockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~GoAndGiveItemsToNoteblockGoal() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
