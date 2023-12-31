#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorCategory.h"
#include "mc/entity/utilities/ActorType.h"

class ActorClassTree {
public:
    // prevent constructor by default
    ActorClassTree& operator=(ActorClassTree const&);
    ActorClassTree(ActorClassTree const&);
    ActorClassTree();

public:
    // NOLINTBEGIN
    // symbol: ?getEntityTypeIdLegacy@ActorClassTree@@SA?AW4ActorType@@W42@@Z
    MCAPI static ::ActorType getEntityTypeIdLegacy(::ActorType entityId);

    // symbol: ?hasCategory@ActorClassTree@@SA_NAEBW4ActorCategory@@W42@@Z
    MCAPI static bool hasCategory(::ActorCategory const& category, ::ActorCategory testFor);

    // symbol: ?isHangingEntity@ActorClassTree@@SA_NAEBVActor@@@Z
    MCAPI static bool isHangingEntity(class Actor const& inEntity);

    // symbol: ?isInstanceOf@ActorClassTree@@SA_NAEBVActor@@W4ActorType@@@Z
    MCAPI static bool isInstanceOf(class Actor const& inEntity, ::ActorType type);

    // symbol: ?isMob@ActorClassTree@@SA_NW4ActorType@@@Z
    MCAPI static bool isMob(::ActorType type);

    // symbol: ?isMobLegacy@ActorClassTree@@SA_NW4ActorType@@@Z
    MCAPI static bool isMobLegacy(::ActorType type);

    // symbol: ?isOfType@ActorClassTree@@SA_NW4ActorType@@0@Z
    MCAPI static bool isOfType(::ActorType type, ::ActorType contains);

    // symbol: ?isTypeInstanceOf@ActorClassTree@@SA_NW4ActorType@@0@Z
    MCAPI static bool isTypeInstanceOf(::ActorType type, ::ActorType testFor);

    // NOLINTEND
};
