#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
class ItemRegistryRef;
class Level;
class ServerScriptManager;
namespace VanillaWorldSystems { class Impl; }
// clang-format on

namespace VanillaWorldSystems {
// functions
// NOLINTBEGIN
MCNAPI ::std::shared_ptr<::VanillaWorldSystems::Impl> init(::Bedrock::NonOwnerPointer<::Level> const& level, ::Experiments const& experiments, ::BaseGameVersion const& baseGameVersion, ::ItemRegistryRef itemRegistry, ::ServerScriptManager const* scriptManager);
// NOLINTEND

}
