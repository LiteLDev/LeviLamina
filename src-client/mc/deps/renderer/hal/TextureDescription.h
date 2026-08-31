#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core_graphics/TextureDescription.h"
#include "mc/deps/renderer/hal/SampleDescription.h"
#include "mc/deps/renderer/hal/enums/BindFlagsBit.h"

namespace mce {

struct TextureDescription : public ::cg::TextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::mce::SampleDescription> mSampleDescription;
    ::ll::TypedStorage<4, 16, ::mce::Color>            mClearColor;
    ::ll::TypedStorage<4, 4, float>                    mOptimizedClearDepth;
    ::ll::TypedStorage<1, 1, uchar>                    mOptimizedClearStencil;
    ::ll::TypedStorage<4, 4, ::mce::BindFlagsBit>      mBindFlags;
    ::ll::TypedStorage<1, 1, bool>                     mIsStaging;
    // NOLINTEND
};

} // namespace mce
