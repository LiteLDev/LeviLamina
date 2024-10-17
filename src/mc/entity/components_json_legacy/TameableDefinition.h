#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TameableDefinition {
public:
    // prevent constructor by default
    TameableDefinition& operator=(TameableDefinition const&);
    TameableDefinition(TameableDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI TameableDefinition();

    MCAPI void addTamingItemByName(std::string const& name);

    MCAPI void initialize(class EntityContext&, class TameableComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TameableDefinition>>&
            root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
