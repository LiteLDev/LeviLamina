#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct LeashableToComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LeashableToDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk9978b7;
    // NOLINTEND

public:
    // prevent constructor by default
    LeashableToDefinition& operator=(LeashableToDefinition const&);
    LeashableToDefinition(LeashableToDefinition const&);
    LeashableToDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext&, ::LeashableToComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::LeashableToDefinition>>& root
    );
    // NOLINTEND
};
