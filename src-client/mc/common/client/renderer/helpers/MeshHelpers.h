#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
class Tessellator;
struct UIActorOffscreenCaptureDescription;
struct UIMeshOffscreenCaptureDescription;
struct UIStructureVolumeOffscreenCaptureDescription;
struct UIThumbnailMeshOffscreenCaptureDescription;
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
namespace mce { class TexturePtr; }
namespace mce { struct ClientTexture; }
namespace mce { struct ServerTexture; }
// clang-format on

namespace MeshHelpers {
// functions
// NOLINTBEGIN
MCAPI void renderMeshImmediately(
    ::ScreenContext&          screenContext,
    ::Tessellator&            tessellator,
    ::mce::MaterialPtr const& material,
    ::std::variant<
        ::std::monostate,
        ::UIActorOffscreenCaptureDescription,
        ::UIThumbnailMeshOffscreenCaptureDescription,
        ::UIMeshOffscreenCaptureDescription,
        ::UIStructureVolumeOffscreenCaptureDescription> const& offscreenCaptureDescription
);

MCAPI void renderMeshImmediately(
    ::ScreenContext&          screenContext,
    ::Tessellator&            tessellator,
    ::mce::MaterialPtr const& material,
    ::std::variant<::std::monostate, ::mce::TexturePtr, ::mce::ClientTexture, ::mce::ServerTexture> const& texture,
    ::std::function<void(
        ::ScreenContext const&,
        ::mce::Mesh const&,
        ::mce::MaterialPtr const&,
        ::std::variant<::std::monostate, ::mce::TexturePtr, ::mce::ClientTexture, ::mce::ServerTexture> const&
    )> meshRenderOverride
);

MCAPI void renderMeshImmediately(
    ::ScreenContext&            screenContext,
    ::Tessellator&              tessellator,
    ::mce::MaterialPtr const&   material,
    ::mce::ClientTexture const& texture,
    ::std::variant<
        ::std::monostate,
        ::UIActorOffscreenCaptureDescription,
        ::UIThumbnailMeshOffscreenCaptureDescription,
        ::UIMeshOffscreenCaptureDescription,
        ::UIStructureVolumeOffscreenCaptureDescription> const& offscreenCaptureDescription
);

MCAPI void renderMeshImmediately(
    ::ScreenContext&          screenContext,
    ::Tessellator&            tessellator,
    ::mce::MaterialPtr const& material,
    ::std::variant<::std::monostate, ::mce::TexturePtr, ::mce::ClientTexture, ::mce::ServerTexture> const& texture,
    ::std::variant<
        ::std::monostate,
        ::UIActorOffscreenCaptureDescription,
        ::UIThumbnailMeshOffscreenCaptureDescription,
        ::UIMeshOffscreenCaptureDescription,
        ::UIStructureVolumeOffscreenCaptureDescription> const& offscreenCaptureDescription
);

MCAPI void renderMeshImmediately(
    ::ScreenContext&                                                           screenContext,
    ::Tessellator&                                                             tessellator,
    ::mce::MaterialPtr const&                                                  material,
    ::std::initializer_list<::std::reference_wrapper<::mce::TexturePtr const>> textures,
    ::std::variant<
        ::std::monostate,
        ::UIActorOffscreenCaptureDescription,
        ::UIThumbnailMeshOffscreenCaptureDescription,
        ::UIMeshOffscreenCaptureDescription,
        ::UIStructureVolumeOffscreenCaptureDescription> const& offscreenCaptureDescription
);
// NOLINTEND

} // namespace MeshHelpers
