#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MobEffectDefinition {
public:
    // prevent constructor by default
    MobEffectDefinition& operator=(MobEffectDefinition const&);
    MobEffectDefinition(MobEffectDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI MobEffectDefinition();

    MCAPI void initialize(class EntityContext& entity, class MobEffectComponent& component) const;

    MCAPI void setCooldownTimeInTicks(int const& seconds);

    MCAPI void setEffectTimeInTicks(int const& seconds);

    MCAPI void setMobEffectByName(std::string const& mobEffect);

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MobEffectDefinition>>&
            root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
