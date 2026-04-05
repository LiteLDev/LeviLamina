#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/renoir/ColorWriteMask.h"
#include "mc/external/gameface/renoir/PixelFormat.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::RenderUtils { struct TextureData; }
namespace cg { class ImageBuffer; }
namespace mce { class TextureContainer; }
namespace mce { struct BlendStateDescription; }
namespace mce { struct ClientTexture; }
namespace mce { struct DepthStencilStateDescription; }
namespace mce { struct TextureDescription; }
namespace mce { struct TextureResourceService; }
namespace renoir { struct BlendingState; }
namespace renoir { struct DepthStencilState; }
// clang-format on

namespace OreUI::RenderUtils {
// functions
// NOLINTBEGIN
MCAPI ::std::vector<uchar> convertSingleChannelTextureDataToRGBA(::gsl::span<uchar const> textureData);

MCAPI ::OreUI::RenderUtils::TextureData convertTextureData(::renoir::PixelFormat format, ::gsl::span<uchar const> data);

MCAPI ::mce::BlendStateDescription
convertToBlendStateDescription(::renoir::BlendingState const& blendingState, ::renoir::ColorWriteMask colorWriteMask);

MCAPI ::mce::DepthStencilStateDescription
convertToDepthStencilStateDescription(::renoir::DepthStencilState const& depthStencilState);

MCAPI ::std::vector<::cg::ImageBuffer> createZeroedImageBuffers(::mce::TextureDescription const& textureDescription);

MCAPI ::mce::TextureContainer createZeroedTextureContainer(::mce::TextureDescription const& textureDescription);

MCAPI void* prepareRenderDragonTexture(
    ::mce::TextureResourceService& textureResourceService,
    ::mce::ClientTexture&          targetTexture,
    ::mce::TextureContainer&&      textureContainer
);
// NOLINTEND

} // namespace OreUI::RenderUtils
