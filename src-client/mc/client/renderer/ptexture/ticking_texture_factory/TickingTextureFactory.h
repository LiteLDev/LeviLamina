#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
class TextureAtlas;
struct FlipbookTextureDescription;
struct MinecraftGraphics;
namespace mce { class TextureGroup; }
// clang-format on

namespace TickingTextureFactory {
// functions
// NOLINTBEGIN
MCNAPI void createTickingTextures(
    ::std::vector<::FlipbookTextureDescription> const& flipbookTextureDescriptions,
    ::TextureAtlas const&                              textureAtlas,
    ::MinecraftGraphics&                               minecraftGraphics,
    ::std::shared_ptr<::mce::TextureGroup>             textureGroup
);

MCNAPI ::std::vector<::FlipbookTextureDescription>
parseDynamicTextures(::ResourcePackManager& loader, bool animationDisabled);
// NOLINTEND

} // namespace TickingTextureFactory
