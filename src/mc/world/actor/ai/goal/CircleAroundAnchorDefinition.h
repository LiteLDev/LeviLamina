#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class CircleAroundAnchorGoal;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CircleAroundAnchorDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb3f721;
    ::ll::UntypedStorage<4, 4> mUnk5a3b59;
    ::ll::UntypedStorage<4, 4> mUnk72893b;
    ::ll::UntypedStorage<4, 4> mUnkb705be;
    ::ll::UntypedStorage<4, 4> mUnk317805;
    ::ll::UntypedStorage<4, 4> mUnkbd20ac;
    ::ll::UntypedStorage<4, 8> mUnkbefb43;
    ::ll::UntypedStorage<4, 8> mUnk4ea664;
    ::ll::UntypedStorage<4, 8> mUnk4ad145;
    // NOLINTEND

public:
    // prevent constructor by default
    CircleAroundAnchorDefinition& operator=(CircleAroundAnchorDefinition const&);
    CircleAroundAnchorDefinition(CircleAroundAnchorDefinition const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CircleAroundAnchorDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CircleAroundAnchorDefinition();

    MCAPI void initialize(::EntityContext& entity, ::CircleAroundAnchorGoal& goal) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const& name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::CircleAroundAnchorDefinition>>&
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

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
