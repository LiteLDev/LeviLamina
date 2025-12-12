#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
class UserEntityIdentifierComponent;
struct SendPacketsComponent;
// clang-format on

namespace SendPacketsSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void sendPacketsSystem(
    ::ActorOwnerComponent const&                      actorOwnerComponent,
    ::Optional<::UserEntityIdentifierComponent const> userEntityIdentifierComponent,
    ::SendPacketsComponent&                           sendPacketsComponent
);

MCNAPI void tick(
    ::ViewT<
        ::StrictEntityContext,
        ::ActorOwnerComponent const,
        ::Optional<::UserEntityIdentifierComponent const>,
        ::SendPacketsComponent>              view,
    ::EntityModifier<::SendPacketsComponent> modifier
);
// NOLINTEND

} // namespace SendPacketsSystemImpl
