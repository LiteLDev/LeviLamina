#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class OcelotAttackGoal;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class OcelotAttackDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk54300c;
    ::ll::UntypedStorage<4, 4> mUnk1db96b;
    ::ll::UntypedStorage<4, 4> mUnk1a5cd8;
    ::ll::UntypedStorage<4, 4> mUnkf007f7;
    ::ll::UntypedStorage<4, 4> mUnk88d33c;
    ::ll::UntypedStorage<4, 4> mUnk32a747;
    ::ll::UntypedStorage<4, 4> mUnkeabe3d;
    ::ll::UntypedStorage<4, 4> mUnk5bdf7b;
    ::ll::UntypedStorage<4, 4> mUnk3ffa0f;
    ::ll::UntypedStorage<4, 4> mUnk3088a7;
    // NOLINTEND

public:
    // prevent constructor by default
    OcelotAttackDefinition& operator=(OcelotAttackDefinition const&);
    OcelotAttackDefinition(OcelotAttackDefinition const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OcelotAttackDefinition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OcelotAttackDefinition();

    MCAPI void initialize(::EntityContext& entity, ::OcelotAttackGoal& goal) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                                   name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::OcelotAttackDefinition>>& root
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
