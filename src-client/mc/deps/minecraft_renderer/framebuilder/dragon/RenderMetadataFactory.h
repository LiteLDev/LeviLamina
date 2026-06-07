#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct UIActorOffscreenCaptureDescription;
struct UIMeshOffscreenCaptureDescription;
struct UIStructureVolumeOffscreenCaptureDescription;
struct UIThumbnailMeshOffscreenCaptureDescription;
namespace dragon { struct RenderMetadata; }
namespace mce::framebuilder { struct CustomSurfaceShaderMetadata; }
// clang-format on

namespace dragon {

class RenderMetadataFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::dragon::RenderMetadata createRenderMetadata(
        int64                                                   id,
        ::mce::framebuilder::CustomSurfaceShaderMetadata const& cssMetadata,
        bool                                                    isItem,
        ::std::variant<
            ::std::monostate,
            ::UIActorOffscreenCaptureDescription,
            ::UIThumbnailMeshOffscreenCaptureDescription,
            ::UIMeshOffscreenCaptureDescription,
            ::UIStructureVolumeOffscreenCaptureDescription> const& offscreenCaptureDescription
    );
    // NOLINTEND
};

} // namespace dragon
