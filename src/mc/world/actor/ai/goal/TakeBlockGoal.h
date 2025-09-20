#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TakeBlockGoal : public ::Goal {
public:
    // TakeBlockGoal inner types declare
    // clang-format off
    struct Definition;
    // clang-format on

    // TakeBlockGoal inner types define
    struct Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>  mUnkd45905;
        ::ll::UntypedStorage<8, 64>  mUnk130ea6;
        ::ll::UntypedStorage<8, 104> mUnka3bd5c;
        ::ll::UntypedStorage<4, 8>   mUnk1a35db;
        ::ll::UntypedStorage<4, 8>   mUnk81c4e3;
        ::ll::UntypedStorage<4, 4>   mUnkfeaab9;
        ::ll::UntypedStorage<1, 1>   mUnk98c74e;
        ::ll::UntypedStorage<1, 1>   mUnkf44ae7;
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
        virtual ~Definition() /*override*/;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TakeBlockGoal::Definition>>&
                root
        );
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static bool const& DEFAULT_AFFECTED_BY_GRIEFING_RULE();

        MCNAPI static bool const& DEFAULT_REQUIRES_LINE_OF_SIGHT();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    ::ll::TypedStorage<8, 8, ::Mob&>                        mMob;
    ::ll::TypedStorage<8, 232, ::TakeBlockGoal::Definition> mDefinition;
    // NOLINTEND

public:
    // prevent constructor by default
    TakeBlockGoal& operator=(TakeBlockGoal const&);
    TakeBlockGoal(TakeBlockGoal const&);
    TakeBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~TakeBlockGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
