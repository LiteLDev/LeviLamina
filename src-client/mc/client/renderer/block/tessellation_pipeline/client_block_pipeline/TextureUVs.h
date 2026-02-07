#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct TextureUVs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>  mU0;
    ::ll::TypedStorage<4, 4, float>  mV0;
    ::ll::TypedStorage<4, 4, float>  mU1;
    ::ll::TypedStorage<4, 4, float>  mV1;
    ::ll::TypedStorage<4, 4, float>  mWeight;
    ::ll::TypedStorage<2, 2, ushort> mPBRTextureDataHandle;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
