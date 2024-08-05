#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class OutOfControlDefinition {
public:
    // prevent constructor by default
    OutOfControlDefinition& operator=(OutOfControlDefinition const&);
    OutOfControlDefinition(OutOfControlDefinition const&);
    OutOfControlDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext& entity, struct OutOfControlComponent&) const;

    MCAPI void uninitialize(class EntityContext& entity, struct OutOfControlComponent&) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class OutOfControlDefinition>>&
            root
    );

    // NOLINTEND
};
