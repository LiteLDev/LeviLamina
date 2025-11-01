#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorRemovedFlagComponent;
struct ActorTickedComponent;
struct AttributesComponent;
struct MobFlagComponent;
struct TickDeathNeededComponent;
// clang-format on

namespace FlagDeadMobsSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void tick(
    ::entt::type_list<::Include<::ActorTickedComponent, ::MobFlagComponent>, ::Exclude<::ActorRemovedFlagComponent>>,
    ::StrictEntityContext const&                 entity,
    ::AttributesComponent&                       attributesComponent,
    ::Optional<::TickDeathNeededComponent>       tickDeathNeeded,
    ::EntityModifier<::TickDeathNeededComponent> modifier
);
// NOLINTEND

} // namespace FlagDeadMobsSystemImpl
