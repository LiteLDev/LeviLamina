#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class IMinecraftEventing;
namespace VanillaSystems { class IActorAdapter; }
namespace VanillaSystems { class IVanillaSystemsEventingAdapter; }
namespace VanillaSystems { struct BlockSourceFactoryAdapterComponent; }
// clang-format on

namespace VanillaSystems {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::VanillaSystems::IActorAdapter> createActorAdapter(::WeakRef<::EntityRegistry>& registry);

MCAPI void
createTemporaryBlockSource(::OptionalGlobal<::VanillaSystems::BlockSourceFactoryAdapterComponent> adapterComponent);

MCAPI ::std::unique_ptr<::VanillaSystems::IVanillaSystemsEventingAdapter>
createVanillaSystemsEventingAdapter(::Bedrock::NonOwnerPointer<::IMinecraftEventing> eventing);

MCAPI void
resetTemporaryBlockSource(::OptionalGlobal<::VanillaSystems::BlockSourceFactoryAdapterComponent> adapterComponent);
// NOLINTEND

} // namespace VanillaSystems
