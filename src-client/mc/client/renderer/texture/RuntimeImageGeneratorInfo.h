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

public:
    // prevent constructor by default
    RuntimeImageGeneratorInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RuntimeImageGeneratorInfo(
        ::std::string const&                                                         imageName,
        ::ResourceLocation const&                                                    imageLocation,
        ::std::function<void(::AbstractTextureAccessor&, ::cg::ImageBuffer&)> const& imageGenerator
    );

    MCAPI ~RuntimeImageGeneratorInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                                                         imageName,
        ::ResourceLocation const&                                                    imageLocation,
        ::std::function<void(::AbstractTextureAccessor&, ::cg::ImageBuffer&)> const& imageGenerator
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
