#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct MobEffectImmunityComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MobEffectImmunityDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uint>> mMobEffects;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addEffectByName(::std::string const& name);

    MCAPI void initialize(::EntityContext&, ::MobEffectImmunityComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MobEffectImmunityDefinition>>& root
    );
    // NOLINTEND
};
