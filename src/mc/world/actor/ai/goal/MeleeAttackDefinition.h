#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/MeleeAttackBaseDefinition.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class MeleeAttackGoal;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MeleeAttackDefinition : public ::MeleeAttackBaseDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbe14ae;
    // NOLINTEND

public:
    // prevent constructor by default
    MeleeAttackDefinition& operator=(MeleeAttackDefinition const&);
    MeleeAttackDefinition(MeleeAttackDefinition const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MeleeAttackDefinition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MeleeAttackDefinition();

    MCAPI void initialize(::EntityContext& entity, ::MeleeAttackGoal& goal) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                                  name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MeleeAttackDefinition>>& root
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
