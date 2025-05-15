#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Mob;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class StayNearNoteblockGoal : public ::Goal {
public:
    // StayNearNoteblockGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // StayNearNoteblockGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkabdc09;
        ::ll::UntypedStorage<4, 4> mUnk34cede;
        ::ll::UntypedStorage<4, 4> mUnk54ab03;
        ::ll::UntypedStorage<4, 4> mUnk935c11;
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
        // static functions
        // NOLINTBEGIN
        MCNAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::StayNearNoteblockGoal::Definition>>& root
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
    ::ll::TypedStorage<8, 8, ::Mob&>                               mMob;
    ::ll::TypedStorage<8, 64, ::StayNearNoteblockGoal::Definition> mDefinition;
    ::ll::TypedStorage<4, 4, int>                                  mTimeToRecalcPath;
    // NOLINTEND

public:
    // prevent constructor by default
    StayNearNoteblockGoal& operator=(StayNearNoteblockGoal const&);
    StayNearNoteblockGoal(StayNearNoteblockGoal const&);
    StayNearNoteblockGoal();

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
    virtual ~StayNearNoteblockGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::BlockPos> const _hasLastVibrationAtNoteblock();
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
