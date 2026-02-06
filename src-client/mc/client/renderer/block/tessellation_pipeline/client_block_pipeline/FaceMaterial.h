#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Material; }
// clang-format on

namespace ClientBlockPipeline {

struct FaceMaterial {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::Material const*> mMaterial;
    ::ll::TypedStorage<1, 1, uchar>                                  mTextureIndex;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
