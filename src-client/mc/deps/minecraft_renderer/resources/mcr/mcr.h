#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
namespace mce { class TexturePtr; }
namespace mce { struct ClientTexture; }
namespace mce { struct GlobalConstantBuffers; }
namespace mce { struct ServerTexture; }
namespace mce { struct ShaderConstants; }
// clang-format on

namespace mcr {
// functions
// NOLINTBEGIN
MCAPI bool bindMigrationTextures(
    ::mce::RenderContext&         renderContext,
    ::mce::GlobalConstantBuffers& globalConstantBuffers,
    ::gsl::span<::std::variant<::std::monostate, ::mce::TexturePtr, ::mce::ClientTexture, ::mce::ServerTexture> const>
        textures
);

MCAPI bool bindTexture(
    ::mce::RenderContext&       renderContext,
    ::mce::ShaderConstants&     shaderConstants,
    ::mce::ServerTexture const& serverTexture,
    uint                        textureIdx
);
// NOLINTEND

} // namespace mcr
