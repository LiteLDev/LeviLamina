#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace VanillaWorldSystems { class Impl; }
// clang-format on

namespace VanillaWorldSystems {
// NOLINTBEGIN
MCAPI std::shared_ptr<class VanillaWorldSystems::Impl> init(
    class Bedrock::NonOwnerPointer<class Level> const&             level,
    class Experiments const&                                       experiments,
    class BaseGameVersion const&                                   baseGameVersion,
    class ItemRegistryRef                                          itemRegistry,
    std::optional<gsl::not_null<class ServerScriptManager const*>> scriptManager
);
// NOLINTEND

}; // namespace VanillaWorldSystems
