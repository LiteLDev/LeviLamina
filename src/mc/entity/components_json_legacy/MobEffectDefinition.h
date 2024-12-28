#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class MobEffectComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MobEffectDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk99c8d4;
    ::ll::UntypedStorage<4, 4>  mUnk7d267f;
    ::ll::UntypedStorage<4, 4>  mUnk322ee8;
    ::ll::UntypedStorage<4, 4>  mUnkc12640;
    ::ll::UntypedStorage<8, 64> mUnk5dd13a;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffectDefinition& operator=(MobEffectDefinition const&);
    MobEffectDefinition(MobEffectDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobEffectDefinition();

    MCAPI void initialize(::EntityContext& entity, ::MobEffectComponent& component) const;

    MCAPI void setCooldownTimeInTicks(int const& seconds);

    MCAPI void setEffectTimeInTicks(int const& seconds);

    MCAPI void setMobEffectByName(::std::string const& mobEffect);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MobEffectDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
