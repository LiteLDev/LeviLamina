#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct OffscreenCaptureDescription;
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
        ::OffscreenCaptureDescription const&                    offscreenCaptureDescription
    );
    // NOLINTEND
};

} // namespace dragon
