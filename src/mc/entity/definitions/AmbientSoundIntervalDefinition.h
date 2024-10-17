#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct AmbientSoundIntervalDefinition {
public:
    // prevent constructor by default
    AmbientSoundIntervalDefinition& operator=(AmbientSoundIntervalDefinition const&);
    AmbientSoundIntervalDefinition(AmbientSoundIntervalDefinition const&);
    AmbientSoundIntervalDefinition();

public:
    // NOLINTBEGIN
    MCAPI void addDynamic(struct DynamicAmbientSound const& definition);

    MCAPI void initialize(class EntityContext& entity, class AmbientSoundServerComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct AmbientSoundIntervalDefinition>>&
            root
    );

    // NOLINTEND
};
