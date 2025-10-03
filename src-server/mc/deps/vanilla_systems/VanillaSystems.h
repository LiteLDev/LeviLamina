#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class IMinecraftEventing;
namespace VanillaSystems { class IActorAdapter; }
namespace VanillaSystems { class IVanillaSystemsEventingAdapter; }
// clang-format on

namespace VanillaSystems {
// functions
// NOLINTBEGIN
MCNAPI ::std::unique_ptr<::VanillaSystems::IActorAdapter> createActorAdapter(::WeakRef<::EntityRegistry>& registry);

MCNAPI ::std::unique_ptr<::VanillaSystems::IVanillaSystemsEventingAdapter>
createVanillaSystemsEventingAdapter(::Bedrock::NonOwnerPointer<::IMinecraftEventing> eventing);
// NOLINTEND

} // namespace VanillaSystems
