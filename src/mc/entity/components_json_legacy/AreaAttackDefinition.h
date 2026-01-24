#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AreaAttackDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                   mDamageRange;
    ::ll::TypedStorage<4, 4, int>                                     mDamagePerTick;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause> mDamageCause;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                     mEntityFilter;
    ::ll::TypedStorage<4, 4, float>                                   mAttackCooldownSeconds;
    ::ll::TypedStorage<1, 1, bool>                                    mPlayAttackSound;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setDamageCause(::std::string const& cause);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AreaAttackDefinition>>& root
    );
    // NOLINTEND
};
