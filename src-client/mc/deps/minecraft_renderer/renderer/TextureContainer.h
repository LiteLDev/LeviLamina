#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/AllowDroppingMips.h"
#include "mc/deps/renderer/hal/TextureDescription.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace cg { class ImageResource; }
// clang-format on

namespace mce {

class TextureContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cg::ImageResource>> mStorage;
    ::ll::TypedStorage<4, 64, ::mce::TextureDescription>              mDescription;
    ::ll::TypedStorage<1, 1, ::mce::AllowDroppingMips>                mAllowDroppingMips;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextureContainer(::cg::ImageBuffer&& rhs, ::mce::AllowDroppingMips allowDroppingMips);

    MCAPI TextureContainer(::std::shared_ptr<::cg::ImageResource>&& rhs, ::mce::AllowDroppingMips allowDroppingMips);

    MCAPI TextureContainer(::std::vector<::cg::ImageBuffer>&& rhs, ::mce::TextureDescription const& textureDescription);

    MCAPI ~TextureContainer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cg::ImageBuffer&& rhs, ::mce::AllowDroppingMips allowDroppingMips);

    MCAPI void* $ctor(::std::shared_ptr<::cg::ImageResource>&& rhs, ::mce::AllowDroppingMips allowDroppingMips);

    MCAPI void* $ctor(::std::vector<::cg::ImageBuffer>&& rhs, ::mce::TextureDescription const& textureDescription);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace mce
