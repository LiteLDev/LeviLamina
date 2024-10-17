#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/module/EntityHost.h"

class VanillaEntityInitializerCommon {
public:
    // prevent constructor by default
    VanillaEntityInitializerCommon& operator=(VanillaEntityInitializerCommon const&);
    VanillaEntityInitializerCommon(VanillaEntityInitializerCommon const&);
    VanillaEntityInitializerCommon();

public:
    // NOLINTBEGIN
    MCAPI static void
    initActorComponents(::EntityHost host, std::unique_ptr<class Actor> actor, class EntityContext& entity, class EntityContext const&);

    MCAPI static void initLevelEntityDependentComponents(class EntityContext& entity, class EntityContext const& level);

    // NOLINTEND
};
