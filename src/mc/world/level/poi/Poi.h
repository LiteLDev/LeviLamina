#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class LevelStorage;
class ResourcePackManager;
namespace Poi { class TagProvider; }
namespace Poi { struct Registry; }
namespace Poi { struct TagRegistrar; }
// clang-format on

namespace Poi {
// functions
// NOLINTBEGIN
MCNAPI void loadResources(
    ::Poi::Registry&             registry,
    ::Poi::TagProvider const&    tags,
    ::Poi::TagRegistrar&         registrar,
    ::ResourcePackManager const& packs,
    ::IMinecraftEventing&        eventing
);

MCNAPI void prealloc(::Poi::Registry& registry, ::Poi::TagProvider const& tags, ::LevelStorage const& storage);

MCNAPI void serialize(::Poi::Registry& registry, ::LevelStorage& storage);
// NOLINTEND

} // namespace Poi
