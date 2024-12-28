#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class ChargeHeldItemGoal;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ChargeHeldItemDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3e9be9;
    // NOLINTEND

public:
    // prevent constructor by default
    ChargeHeldItemDefinition& operator=(ChargeHeldItemDefinition const&);
    ChargeHeldItemDefinition(ChargeHeldItemDefinition const&);
    ChargeHeldItemDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChargeHeldItemDefinition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::ChargeHeldItemGoal& goal) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                                     name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ChargeHeldItemDefinition>>& root
    );
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
