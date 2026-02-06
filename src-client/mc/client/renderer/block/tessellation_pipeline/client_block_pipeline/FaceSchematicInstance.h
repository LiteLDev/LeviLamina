#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/UvTransform.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Material; }
// clang-format on

namespace ClientBlockPipeline {

class FaceSchematicInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                   mExists;
    ::ll::TypedStorage<1, 1, uchar>                                  mCullAgainst;
    ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::Material const*> mMaterial;
    ::ll::TypedStorage<4, 32, ::ClientBlockPipeline::UvTransform>    mUvTransform;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
