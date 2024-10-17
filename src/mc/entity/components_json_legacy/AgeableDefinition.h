#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AgeableDefinition {
public:
    // prevent constructor by default
    AgeableDefinition& operator=(AgeableDefinition const&);
    AgeableDefinition(AgeableDefinition const&);
    AgeableDefinition();

public:
    // NOLINTBEGIN
    MCAPI void addDropItem(class ItemDescriptor const& itemDescriptor);

    MCAPI void addFeedItem(struct ActorDefinitionFeedItem const& feedItem);

    MCAPI void addFeedItemByName(std::string const& itemName);

    MCAPI bool canGrowUp() const;

    MCAPI int getTicksAsBaby() const;

    MCAPI void initialize(class EntityContext& entity, class AgeableComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AgeableDefinition>>& root
    );

    // NOLINTEND
};
