#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class PeekDefinition {
public:
    // prevent constructor by default
    PeekDefinition& operator=(PeekDefinition const&);
    PeekDefinition(PeekDefinition const&);
    PeekDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext& entity) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class PeekDefinition>>& root
    );

    // NOLINTEND
};
