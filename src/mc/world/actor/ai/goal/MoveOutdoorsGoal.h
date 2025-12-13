#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MoveOutdoorsGoal : public ::BaseMoveToBlockGoal {
public:
    // MoveOutdoorsGoal inner types declare
    // clang-format off
    class MoveOutdoorsDefinition;
    // clang-format on

    // MoveOutdoorsGoal inner types define
    class MoveOutdoorsDefinition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkc53cd2;
        ::ll::UntypedStorage<4, 4> mUnkee577d;
        ::ll::UntypedStorage<4, 4> mUnkbd24b6;
        ::ll::UntypedStorage<4, 4> mUnk279837;
        ::ll::UntypedStorage<4, 4> mUnk47f7f8;
        ::ll::UntypedStorage<4, 4> mUnke900b4;
        // NOLINTEND

    public:
        // prevent constructor by default
        MoveOutdoorsDefinition& operator=(MoveOutdoorsDefinition const&);
        MoveOutdoorsDefinition(MoveOutdoorsDefinition const&);
        MoveOutdoorsDefinition();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~MoveOutdoorsDefinition() /*override*/ = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MoveOutdoorsGoal::MoveOutdoorsDefinition>>&
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
    ::ll::TypedStorage<4, 40, ::MoveOutdoorsGoal::MoveOutdoorsDefinition> mDefinition;
    ::ll::TypedStorage<8, 8, ::Tick>                                      mNextTargetTick;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void start() /*override*/;

    virtual bool canUse() /*override*/;

    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~MoveOutdoorsGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _setNextTargetTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool mobHasClearSpaceAbove(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $start();

    MCNAPI bool $canUse();

    MCNAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
