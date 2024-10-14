#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LookAtDefinition {
public:
    // prevent constructor by default
    LookAtDefinition& operator=(LookAtDefinition const&);
    LookAtDefinition(LookAtDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI LookAtDefinition();

    MCAPI void initialize(class EntityContext& entity, class LookAtComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class LookAtDefinition>>& root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
