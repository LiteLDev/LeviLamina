#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core_graphics/TextureDescription.h"
#include "mc/deps/renderer/hal/SampleDescription.h"
#include "mc/deps/renderer/hal/enums/BindFlagsBit.h"

// auto generated forward declare list
// clang-format off
namespace cg { struct ImageDescription; }
// clang-format on

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

public:
    // prevent constructor by default
    TextureDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextureDescription(
        ::cg::ImageDescription const&   imageDescription,
        ::mce::BindFlagsBit             bindFlag,
        ::mce::SampleDescription const& sampleDesc
    );

    MCAPI uint getMipHeight(uint mipLevel) const;

    MCAPI uint getMipWidth(uint mipLevel) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::mce::TextureDescription getDefaultTextureDescription(int w, int h);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::cg::ImageDescription const&   imageDescription,
        ::mce::BindFlagsBit             bindFlag,
        ::mce::SampleDescription const& sampleDesc
    );
    // NOLINTEND
};

} // namespace mce
