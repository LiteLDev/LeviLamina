#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ExploreOutskirtsGoal;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ExploreOutskirtsDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk8c2ea8;
    ::ll::UntypedStorage<4, 4>  mUnkf2bdd8;
    ::ll::UntypedStorage<4, 4>  mUnk9562c2;
    ::ll::UntypedStorage<4, 4>  mUnk45c016;
    ::ll::UntypedStorage<4, 4>  mUnkf4f43c;
    ::ll::UntypedStorage<4, 4>  mUnk27229d;
    ::ll::UntypedStorage<4, 4>  mUnkbfc026;
    ::ll::UntypedStorage<4, 4>  mUnk6ce524;
    ::ll::UntypedStorage<4, 4>  mUnk6a836c;
    ::ll::UntypedStorage<4, 4>  mUnkba513e;
    ::ll::UntypedStorage<4, 12> mUnk74a2fb;
    // NOLINTEND

public:
    // prevent constructor by default
    ExploreOutskirtsDefinition& operator=(ExploreOutskirtsDefinition const&);
    ExploreOutskirtsDefinition(ExploreOutskirtsDefinition const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExploreOutskirtsDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExploreOutskirtsDefinition();

    MCAPI void initialize(::EntityContext& entity, ::ExploreOutskirtsGoal& goal) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                                       name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ExploreOutskirtsDefinition>>& root
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
