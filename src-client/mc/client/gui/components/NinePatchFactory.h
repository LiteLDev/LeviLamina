#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
class NinePatchLayer;
struct IntRectangle;
namespace mce { class TextureGroup; }
// clang-format on

class NinePatchFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroup>> mTextureGroup;
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                     mResourceLocation;
    ::ll::TypedStorage<4, 4, int>                                     mWidth;
    ::ll::TypedStorage<4, 4, int>                                     mHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    NinePatchFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    NinePatchFactory(::std::shared_ptr<::mce::TextureGroup> textureGroup, ::ResourceLocation const& resourceLocation);

    MCAPI ::std::unique_ptr<::NinePatchLayer>
    createSymmetrical(::IntRectangle const& src, int xCutAt, int yCutAt, float w, float h);

    MCAPI ~NinePatchFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::mce::TextureGroup> textureGroup, ::ResourceLocation const& resourceLocation);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
