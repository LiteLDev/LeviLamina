#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorCategory.h"
#include "mc/entity/utilities/ActorType.h"

class ActorClassTree {
public:
    // prevent constructor by default
    ActorClassTree& operator=(ActorClassTree const&) = delete;
    ActorClassTree(ActorClassTree const&)            = delete;
    ActorClassTree()                                 = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getEntityTypeIdLegacy@ActorClassTree@@SA?AW4ActorType@@W42@@Z
    MCAPI static ::ActorType getEntityTypeIdLegacy(::ActorType);

    // symbol: ?hasCategory@ActorClassTree@@SA_NAEBW4ActorCategory@@W42@@Z
    MCAPI static bool hasCategory(::ActorCategory const&, ::ActorCategory);

    // symbol: ?isHangingEntity@ActorClassTree@@SA_NAEBVActor@@@Z
    MCAPI static bool isHangingEntity(class Actor const&);

    // symbol: ?isInstanceOf@ActorClassTree@@SA_NAEBVActor@@W4ActorType@@@Z
    MCAPI static bool isInstanceOf(class Actor const&, ::ActorType);

    // symbol: ?isMob@ActorClassTree@@SA_NW4ActorType@@@Z
    MCAPI static bool isMob(::ActorType);

    // symbol: ?isMobLegacy@ActorClassTree@@SA_NW4ActorType@@@Z
    MCAPI static bool isMobLegacy(::ActorType);

    // symbol: ?isOfType@ActorClassTree@@SA_NW4ActorType@@0@Z
    MCAPI static bool isOfType(::ActorType, ::ActorType);

    // symbol: ?isTypeInstanceOf@ActorClassTree@@SA_NW4ActorType@@0@Z
    MCAPI static bool isTypeInstanceOf(::ActorType, ::ActorType);

    // NOLINTEND
};
