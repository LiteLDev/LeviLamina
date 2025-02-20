#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ActorFilterGroup;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MobEffectDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>               mEffectRange;
    ::ll::TypedStorage<4, 4, int>                 mEffectId;
    ::ll::TypedStorage<4, 4, int>                 mEffectTime;
    ::ll::TypedStorage<4, 4, int>                 mCooldownTicks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mEntityFilter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
};
