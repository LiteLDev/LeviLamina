#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class StrictEntityContext;
struct PassengerOfBlockArguments;
struct PassengerOfBlockComponent;
// clang-format on

namespace PassengerOfBlockUtil {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI bool isPassengerOfBlock(::EntityContext const& entity);
#endif

MCNAPI void startPassengerOfBlock(::Actor& actor, bool sendPacket, ::PassengerOfBlockArguments const& arguments);

#ifdef LL_PLAT_C
MCNAPI void stopPassengerOfBlock(
    ::StrictEntityContext const&                         entity,
    ::EntityModifier<::PassengerOfBlockComponent> const& modifier
);
#endif
// NOLINTEND

} // namespace PassengerOfBlockUtil
