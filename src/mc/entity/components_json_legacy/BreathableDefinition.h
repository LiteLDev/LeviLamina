#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BreathableDefinition {
public:
    // prevent constructor by default
    BreathableDefinition& operator=(BreathableDefinition const&);
    BreathableDefinition(BreathableDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI BreathableDefinition();

    MCAPI void addBreathableBlockDescriptor(class BlockDescriptor const& blockDescriptor);

    MCAPI void addNonBreathableBlockDescriptor(class BlockDescriptor const& blockDescriptor);

    MCAPI void initialize(class EntityContext& entity, class BreathableComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BreathableDefinition>>&
            root
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
