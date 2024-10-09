#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MobEffectImmunityDefinition {
public:
    // prevent constructor by default
    MobEffectImmunityDefinition& operator=(MobEffectImmunityDefinition const&);
    MobEffectImmunityDefinition(MobEffectImmunityDefinition const&);
    MobEffectImmunityDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext&, struct MobEffectImmunityComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MobEffectImmunityDefinition>>& root
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void addEffectByName(std::string const& name);

    // NOLINTEND
};
