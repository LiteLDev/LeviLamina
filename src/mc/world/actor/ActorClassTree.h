#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/types/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorType.h"

class ActorClassTree {
public:
    // prevent constructor by default
    ActorClassTree& operator=(ActorClassTree const&);
    ActorClassTree(ActorClassTree const&);
    ActorClassTree();

public:
    // NOLINTBEGIN
    MCAPI static ::ActorType getEntityTypeIdLegacy(::ActorType entityId);

    MCAPI static bool hasCategory(::ActorCategory const& category, ::ActorCategory testFor);

    MCAPI static bool isHangingEntity(class Actor const& inEntity);

    MCAPI static bool isInstanceOf(class Actor const& inEntity, ::ActorType type);

    MCAPI static bool isMob(::ActorType type);

    MCAPI static bool isMobLegacy(::ActorType type);

    MCAPI static bool isOfType(::ActorType type, ::ActorType contains);

    MCAPI static bool isTypeInstanceOf(::ActorType type, ::ActorType testFor);

    // NOLINTEND
};
