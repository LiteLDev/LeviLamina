#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ResourcePackManager;
namespace Poi { struct TagRegistrar; }
// clang-format on

namespace Poi::Tags {
// functions
// NOLINTBEGIN
MCNAPI void
loadResources(::Poi::TagRegistrar& provider, ::ResourcePackManager const& packs, ::IMinecraftEventing& eventing);
// NOLINTEND

} // namespace Poi::Tags
