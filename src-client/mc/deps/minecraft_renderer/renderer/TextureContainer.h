#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/AllowDroppingMips.h"

// auto generated forward declare list
// clang-format off
namespace cg { struct ImageBuffer; }
namespace cg { struct ImageResource; }
namespace mce { struct TextureDescription; }
// clang-format on

namespace mce {

class TextureContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9e5a0a;
    ::ll::UntypedStorage<4, 64> mUnk76ef4f;
    ::ll::UntypedStorage<1, 1>  mUnk9b4e66;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureContainer& operator=(TextureContainer const&);
    TextureContainer(TextureContainer const&);
    TextureContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureContainer(::cg::ImageBuffer&& rhs, ::mce::AllowDroppingMips allowDroppingMips);

    MCNAPI TextureContainer(::std::shared_ptr<::cg::ImageResource>&& rhs, ::mce::AllowDroppingMips allowDroppingMips);

    MCNAPI
    TextureContainer(::std::vector<::cg::ImageBuffer>&& rhs, ::mce::TextureDescription const& textureDescription);

    MCNAPI ~TextureContainer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cg::ImageBuffer&& rhs, ::mce::AllowDroppingMips allowDroppingMips);

    MCNAPI void* $ctor(::std::shared_ptr<::cg::ImageResource>&& rhs, ::mce::AllowDroppingMips allowDroppingMips);

    MCNAPI void* $ctor(::std::vector<::cg::ImageBuffer>&& rhs, ::mce::TextureDescription const& textureDescription);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
