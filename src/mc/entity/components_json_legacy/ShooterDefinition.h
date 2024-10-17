#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ShooterDefinition {
public:
    // prevent constructor by default
    ShooterDefinition& operator=(ShooterDefinition const&);
    ShooterDefinition(ShooterDefinition const&);
    ShooterDefinition();

public:
    // NOLINTBEGIN
    MCAPI void addSoundByName(std::string const& name);

    MCAPI void initialize(class EntityContext&, class ShooterComponent& component) const;

    MCAPI void setActorDefByName(std::string const& name);

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ShooterDefinition>>& root
    );

    // NOLINTEND
};
