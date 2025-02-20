#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/module/EntityHost.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
// clang-format on

struct VanillaEntityInitializerCommon {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    initActorComponents(::EntityHost actor, ::std::unique_ptr<::Actor> entity, ::EntityContext& host, ::EntityContext const&);

    MCAPI static void initLevelEntityDependentComponents(::EntityContext& entity, ::EntityContext const& level);
    // NOLINTEND
};
