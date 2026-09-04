#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
class AbstractTextureAccessor;
namespace cg { class ImageBuffer; }
// clang-format on

struct RuntimeImageGeneratorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                         mImageName;
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                                                    mImageLocation;
    ::ll::TypedStorage<8, 64, ::std::function<void(::AbstractTextureAccessor&, ::cg::ImageBuffer&)>> mImageGenerator;
    // NOLINTEND
};
