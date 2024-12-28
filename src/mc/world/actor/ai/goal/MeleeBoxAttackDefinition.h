#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/MeleeAttackBaseDefinition.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class MeleeBoxAttackGoal;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MeleeBoxAttackDefinition : public ::MeleeAttackBaseDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8562e8;
    // NOLINTEND

public:
    // prevent constructor by default
    MeleeBoxAttackDefinition& operator=(MeleeBoxAttackDefinition const&);
    MeleeBoxAttackDefinition(MeleeBoxAttackDefinition const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MeleeBoxAttackDefinition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MeleeBoxAttackDefinition();

    MCAPI void initialize(::EntityContext& entity, ::MeleeBoxAttackGoal& goal) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                                     name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MeleeBoxAttackDefinition>>& root
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
