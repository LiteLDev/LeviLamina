#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class BoostableComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BoostableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd849f7;
    ::ll::UntypedStorage<4, 4>  mUnk520096;
    ::ll::UntypedStorage<4, 4>  mUnk37d505;
    // NOLINTEND

public:
    // prevent constructor by default
    BoostableDefinition& operator=(BoostableDefinition const&);
    BoostableDefinition(BoostableDefinition const&);
    BoostableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext&, ::BoostableComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BoostableDefinition>>& root
    );
    // NOLINTEND
};
