#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

struct PBRTexturePtrs {
public:
    // PBRTexturePtrs inner types declare
    // clang-format off
    struct MERSTexturePtr;
    struct NormalTexturePtr;
    // clang-format on

    // PBRTexturePtrs inner types define
    struct MERSTexturePtr {};

    struct NormalTexturePtr {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                  mColorTexture;
    ::ll::TypedStorage<8, 40, ::PBRTexturePtrs::MERSTexturePtr>   mMERSTexture;
    ::ll::TypedStorage<8, 40, ::PBRTexturePtrs::NormalTexturePtr> mNormalTexture;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PBRTexturePtrs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
