#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace VanillaWorldSystems { class Impl; }
// clang-format on

namespace VanillaWorldSystems {
// NOLINTBEGIN
MCAPI std::shared_ptr<class VanillaWorldSystems::Impl>
init(class Bedrock::NonOwnerPointer<class Level> const&, class Experiments const&, class BaseGameVersion const&, class ItemRegistryRef, std::optional<gsl::not_null<class ServerScriptManager const*>>);
// NOLINTEND

}; // namespace VanillaWorldSystems
