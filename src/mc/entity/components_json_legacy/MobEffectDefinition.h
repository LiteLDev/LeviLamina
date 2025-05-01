#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MobEffectDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>               mEffectRange;
    ::ll::TypedStorage<4, 4, int>                 mEffectId;
    ::ll::TypedStorage<4, 4, ::EffectDuration>    mEffectTime;
    ::ll::TypedStorage<4, 4, int>                 mCooldownTicks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mEntityFilter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setCooldownTimeInTicks(int const& seconds);

    MCNAPI void setEffectTimeInTicks(int const& seconds);

    MCNAPI void setEffectTimeWithInfiniteString(::std::string const& duration);

    MCNAPI void setMobEffectByName(::std::string const& mobEffect);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MobEffectDefinition>>& root
    );
    // NOLINTEND
};
