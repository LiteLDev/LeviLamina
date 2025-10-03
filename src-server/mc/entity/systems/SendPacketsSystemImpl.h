#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
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
// NOLINTEND

} // namespace SendPacketsSystemImpl
