#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntitySensorComponent;
struct EntitySubsensorDescriptor;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct EntitySensorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                        mRelativeRange;
    ::ll::TypedStorage<1, 1, bool>                                        mFindPlayersOnly;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                         mEventCondition;
    ::ll::TypedStorage<8, 24, ::std::vector<::EntitySubsensorDescriptor>> mSubsensorDescriptors;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::EntitySensorComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EntitySensorDefinition>>& root
    );
    // NOLINTEND
};
