#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class EntityContext;
class Mob;
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

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~MoveOutdoorsDefinition() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI MoveOutdoorsDefinition();

        MCAPI void initialize(::EntityContext& entity, ::MoveOutdoorsGoal& goal) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MoveOutdoorsGoal::MoveOutdoorsDefinition>>&
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnkb7d9d4;
    ::ll::UntypedStorage<8, 8>  mUnk8c2ac0;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveOutdoorsGoal& operator=(MoveOutdoorsGoal const&);
    MoveOutdoorsGoal(MoveOutdoorsGoal const&);
    MoveOutdoorsGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 11
    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~MoveOutdoorsGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MoveOutdoorsGoal(::Mob& mob);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool mobHasClearSpaceAbove(::BlockSource& region, ::BlockPos const& pos);
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
    MCAPI void $start();

    MCAPI bool $canUse();

    MCAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
